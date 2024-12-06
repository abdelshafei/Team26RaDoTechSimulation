#include "Visualization.h"
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QPolarChart>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QLineSeries>
#include <QPixmap>
#include <QDebug>
#include <QWidget>

Visualization::Visualization(QWidget *parent) : QWidget(parent),  ui(new Ui::MainWindow) {

}

void Visualization::showBarGraph(HealthData* healthdata, Ui::MainWindow* ui) {
    // Get results and validate data
    QList<MeridianResult> results = healthdata->getData();
    if (results.size() < 24) {
        qDebug() << "Insufficient data for the bar graph. Expected 24, got:" << results.size();
        return;
    }

    // Create bar sets for "Left" and "Right"
    QBarSet* leftSet = new QBarSet("Left");
    QBarSet* rightSet = new QBarSet("Right");

    // Map data into bar sets
    for (int i = 0; i < results.size(); i += 2) {
        leftSet->append(results[i].conductance);     // Even indices are "Left"
        rightSet->append(results[i + 1].conductance); // Odd indices are "Right"
    }

    // Create a bar series and add the sets
    QBarSeries* series = new QBarSeries();
    series->append(leftSet);
    series->append(rightSet);

    // Create categories (meridian names)
    QStringList categories;
    categories << "Lungs" << "Pericardium" << "Heart" << "Small Intestine"
               << "Lymph" << "Large Intestine" << "Spleen" << "Liver"
               << "Kidney" << "Bladder" << "Gallbladder" << "Stomach";

    // Create category axis (x-axis)
    QBarCategoryAxis* axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setLabelsAngle(90);

    // Create value axis (y-axis)
    QValueAxis* axisY = new QValueAxis();
    axisY->setRange(0, 200);
    axisY->setTitleText("Conductance (µA)");

    // Create a chart
    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);

    chart->setTitle("Organ Health Metrics");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Create a QChartView and display the chart
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Clear and set the layout for the chart container
    QLayout* existingLayout = ui->ChartWidget->layout();
    if (existingLayout != nullptr) {
        QLayoutItem* item;
        while ((item = existingLayout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete existingLayout;
    }

    QVBoxLayout* layout = new QVBoxLayout(ui->ChartWidget);
    layout->addWidget(chartView);
    ui->ChartWidget->setLayout(layout);
}

void Visualization::showCircleGraph(HealthData* healthdata, Ui::MainWindow* ui) {
    // Create a polar chart
    QtCharts::QPolarChart *polarChart = new QtCharts::QPolarChart();
    polarChart->setTitle("Organ Health Radar Chart");

    // Get the data
    QList<MeridianResult> results = healthdata->getData();

    if (results.size() < 24) {
        qDebug() << "Insufficient data for radar chart. Expected at least 24 results, got:" << results.size();
        return;
    }

    // Vectors to hold computed values
    QVector<double> leftSideData;
    QVector<double> rightSideData;
    QVector<double> averageValues;

    // Process the data for left and right sides
    for (int i = 0; i < results.size(); i += 2) {
        double leftValue = results[i].conductance;
        double rightValue = results[i + 1].conductance;
        double averageValue = (leftValue + rightValue) / 2.0;

        leftSideData.append(leftValue);
        rightSideData.append(rightValue);
        averageValues.append(averageValue);
    }

    // Labels for the axes (corresponding to organ names)
    QStringList categories;
    categories << "Lungs" << "Pericardium" << "Heart" << "Small Intestine"
               << "Lymph" << "Large Intestine" << "Spleen" << "Liver"
               << "Kidney" << "Bladder" << "Gallbladder" << "Stomach";

    // Create a Value Axis (for the circular range)
    QtCharts::QValueAxis *valueAxis = new QtCharts::QValueAxis();
    valueAxis->setRange(0, 200);
    valueAxis->setTickCount(6);
    valueAxis->setLabelFormat("%.0f");
    valueAxis->setTitleText("Conductance");
    polarChart->addAxis(valueAxis, QtCharts::QPolarChart::PolarOrientationRadial);

    // Create a Category Axis (for the angular labels)
    QtCharts::QCategoryAxis *angularAxis = new QtCharts::QCategoryAxis();
    angularAxis->setLabelsPosition(QtCharts::QCategoryAxis::AxisLabelsPositionOnValue);
    for (int i = 0; i < categories.size(); ++i)
    {
        angularAxis->append(categories[i], i);
    }
    angularAxis->setRange(0, categories.size() - 1);
    polarChart->addAxis(angularAxis, QtCharts::QPolarChart::PolarOrientationAngular);

    // Create Line Series for each data set
    QtCharts::QLineSeries *leftSeries = new QtCharts::QLineSeries();
    leftSeries->setName("Left Side");
    for (int i = 0; i < leftSideData.size(); ++i)
    {
        leftSeries->append(i, leftSideData[i]);
    }
    polarChart->addSeries(leftSeries);
    leftSeries->attachAxis(valueAxis);
    leftSeries->attachAxis(angularAxis);

    QtCharts::QLineSeries *rightSeries = new QtCharts::QLineSeries();
    rightSeries->setName("Right Side");
    for (int i = 0; i < rightSideData.size(); ++i)
    {
        rightSeries->append(i, rightSideData[i]);
    }
    polarChart->addSeries(rightSeries);
    rightSeries->attachAxis(valueAxis);
    rightSeries->attachAxis(angularAxis);

    QtCharts::QLineSeries *averageSeries = new QtCharts::QLineSeries();
    averageSeries->setName("Average Values");
    for (int i = 0; i < averageValues.size(); ++i)
    {
        averageSeries->append(i, averageValues[i]);
    }
    polarChart->addSeries(averageSeries);
    averageSeries->attachAxis(valueAxis);
    averageSeries->attachAxis(angularAxis);

    // Create a Chart View for display
    QtCharts::QChartView *chartView = new QtCharts::QChartView(polarChart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Clear any existing layout in CircleChartWidget
    QLayout *existingLayout = ui->CircleChartWidget->layout();
    if (existingLayout != nullptr)
    {
        QLayoutItem *item;
        while ((item = existingLayout->takeAt(0)) != nullptr)
        {
            delete item->widget();
            delete item;
        }
        delete existingLayout;
    }

    // Add the chart to the placeholder widget (CircleChartWidget)
    QVBoxLayout *layout = new QVBoxLayout(ui->CircleChartWidget);
    layout->addWidget(chartView);
    ui->CircleChartWidget->setLayout(layout);
}

void Visualization::showBodyGraph(HealthData* healthdata, Ui::MainWindow* ui) {
    // Clear any existing layout in BodyChartWidget
    QLayout* existingLayout = ui->BodyChartWidget->layout();
    if (existingLayout) {
        QLayoutItem* item;
        while ((item = existingLayout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete existingLayout;
    }

    for(int i=0;i<healthdata->getData().size(); ++i){
        qDebug() << healthdata->getData()[i].meridian;
    }

    QPixmap leftLungPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/LeftLung.png");

    if (leftLungPixmap.isNull()) {
        qDebug() << "Failed to load LeftLung.png";
        ui->leftLungLabel->setText("Error: Failed to load LeftLung.png");
        ui->leftLungLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->leftLungLabel->setPixmap(leftLungPixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->leftLungLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftLungStatus->setText("(L)"+healthdata->getData()[0].status);

    QPixmap rightLungPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/RightLung.png");

    if (rightLungPixmap.isNull()) {
        qDebug() << "Failed to load RightLung.png";
        ui->rightLungLabel->setText("Error: Failed to load RightLung.png");
        ui->rightLungLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->rightLungLabel->setPixmap(rightLungPixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->rightLungLabel->setAlignment(Qt::AlignCenter);
    }

    ui->rightLungStatus->setText("(R) "+healthdata->getData()[1].status);

    QPixmap veinsPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/veins.png");

    if (veinsPixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->veinsLabel->setText("Error: Failed to load heartLabel.png");
        ui->veinsLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->veinsLabel->setPixmap(veinsPixmap.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->veinsLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftVeinsStatus->setText("(L) "+healthdata->getData()[2].status);
    ui->rightVeinsStatus->setText("(R) "+healthdata->getData()[3].status);

    QPixmap heartPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/heart.png");

    if (heartPixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->heartLabel->setText("Error: Failed to load heartLabel.png");
        ui->heartLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->heartLabel->setPixmap(heartPixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->heartLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftHeartStatus->setText("(L) "+healthdata->getData()[4].status);
    ui->rightHeartStatus->setText("(R) "+healthdata->getData()[5].status);


    ui->leftSmallIntestineStatus->setText("(L) "+healthdata->getData()[6].status);
    ui->rightSmallIntestineStatus->setText("(R) "+healthdata->getData()[7].status);

    QPixmap intestinePixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/intestines.png");

    if (intestinePixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->intestineLabel->setText("Error: Failed to load heartLabel.png");
        ui->intestineLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->intestineLabel->setPixmap(intestinePixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->intestineLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftLargeIntestineStatus->setText("(L) "+healthdata->getData()[10].status);
    ui->rightLargeIntestineStatus->setText("(R) "+healthdata->getData()[11].status);

    QPixmap liverPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/liver.png");

    if (liverPixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->liverLabel->setText("Error: Failed to load heartLabel.png");
        ui->liverLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->liverLabel->setPixmap(liverPixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->liverLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftLiverStatus->setText("(L) "+healthdata->getData()[14].status);
    ui->rightLiverStatus->setText("(R) "+healthdata->getData()[15].status);

    QPixmap kidneyPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/kidneys.png");

    if (kidneyPixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->kidneyLabel->setText("Error: Failed to load heartLabel.png");
        ui->kidneyLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->kidneyLabel->setPixmap(kidneyPixmap.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->kidneyLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftKidneyStatus->setText("(L) "+healthdata->getData()[16].status);
    ui->rightKidneyStatus->setText("(R) "+healthdata->getData()[17].status);

    QPixmap bladderPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/bladder.png");

    if (bladderPixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->bladderLabel->setText("Error: Failed to load heartLabel.png");
        ui->bladderLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->bladderLabel->setPixmap(bladderPixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->bladderLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftBladderStatus->setText("(L) "+healthdata->getData()[18].status);
    ui->rightBladderStatus->setText("(R) "+healthdata->getData()[19].status);

    QPixmap gallbladderPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/gallbladder.png");

    if (gallbladderPixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->gallbladderLabel->setText("Error: Failed to load heartLabel.png");
        ui->gallbladderLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->gallbladderLabel->setPixmap(gallbladderPixmap.scaled(25, 25, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->gallbladderLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftGallbladderStatus->setText("(L) "+healthdata->getData()[20].status);
    ui->rightGallbladderStatus->setText("(R) "+healthdata->getData()[21].status);

    QPixmap stomachPixmap("/home/student/Desktop/Final/3004-Final-Project/images/BodyDiagramImages/stomach.png");

    if (stomachPixmap.isNull()) {
        qDebug() << "Failed to load heartLabel.png";
        ui->stomachLabel->setText("Error: Failed to load heartLabel.png");
        ui->stomachLabel->setAlignment(Qt::AlignCenter);
    } else {
        ui->stomachLabel->setPixmap(stomachPixmap.scaled(100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->stomachLabel->setAlignment(Qt::AlignCenter);
    }

    ui->leftStomachStatus->setText("(L) "+healthdata->getData()[22].status);
    ui->rightStomachStatus->setText("(R) "+healthdata->getData()[23].status);


    qDebug() << "Body chart with lungs updated successfully.";
}
