#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDebug>

#include <QtCharts>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QValueAxis>
#include <QBarCategoryAxis>
#include <QtCharts/QPolarChart>
#include <QtCharts/QValueAxis>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QLineSeries>
#include <QChartView>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect Device View to App View button
    connect(ui->GoToAppViewButton, &QPushButton::clicked, this, &MainWindow::showAppView);

    // Connect App View to Device View button
    connect(ui->GoToDeviceViewButton, &QPushButton::clicked, this, &MainWindow::showDeviceView);

    // Connect App View buttons to respective pages
    connect(ui->HomePageButton, &QPushButton::clicked, this, &MainWindow::showHomePage);
    connect(ui->MeasureNowButton, &QPushButton::clicked, this, &MainWindow::showMeasureNowPage);
    connect(ui->HistoricalPageButton, &QPushButton::clicked, this, &MainWindow::showHistoricalPage);
    connect(ui->ProfilePageButton, &QPushButton::clicked, this, &MainWindow::showProfilePage);
    connect(ui->VisulizationPageButton, &QPushButton::clicked, this, &MainWindow::showVisualizationPage);
    connect(ui->CreateProfileButton, &QPushButton::clicked, this, &MainWindow::showCreateProfilePage);
    connect(ui->EnterButton, &QPushButton::clicked, this, &MainWindow::showLoginPage);

    //Images
    QPixmap pix("/home/student/Desktop/FinalProject/3004-Final-Project/images/loginImage.png");
    ui->loginImage->setPixmap(pix.scaled(81,71,Qt::KeepAspectRatio));

    //Save Button on Create Button
    connect(ui->SavePushButton, &QPushButton::clicked, this, &MainWindow::saveProfile);
//    currentUser = new User("example@example.com", "password123");
    connect(ui->AddNewProfileButton, &QPushButton::clicked, this, &MainWindow::goToCreateProfilePage);

    // Initialize preset users
    createPresetUsers();

    // Connect login button
    connect(ui->EnterLoginButton, &QPushButton::clicked, this, &MainWindow::handleLogin);


}

MainWindow::~MainWindow()
{
    delete ui;
}


// Switch to App View
void MainWindow::showAppView()
{
    // TODO: When we implement login and create profile, here we do if statement of which view to first go to after device view
    ui->ViewsStackedWidget->setCurrentWidget(ui->AppStartPage);
}

// Switch to Device View
void MainWindow::showDeviceView()
{
    ui->ViewsStackedWidget->setCurrentWidget(ui->DeviceView);
}

// Show Home Page in App View
void MainWindow::showHomePage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->HomePage);
}

void MainWindow::showCreateProfilePage()
{
    ui->ViewsStackedWidget->setCurrentWidget(ui->AppView);
    ui->AppStackedWidget->setCurrentWidget(ui->CreateProfilePage);

}

void MainWindow::showLoginPage()
{
    ui->ViewsStackedWidget->setCurrentWidget(ui->AppView);
    ui->AppStackedWidget->setCurrentWidget(ui->LoginPage);
}

// Show Measure Now Page in App View
void MainWindow::showMeasureNowPage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->MeasureNowPage);
}

// Show Historical Data Page in App View
void MainWindow::showHistoricalPage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->HistoricalPage);
}

// Show Profile Page in App View
void MainWindow::showProfilePage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->ProfilePage);
    updateProfilesList();
}

// Show Visualization Page in App View
void MainWindow::showVisualizationPage()
{
    ui->AppStackedWidget->setCurrentWidget(ui->VisulizationPage);
    showBarGraph();
//    showRadarChart();
}

void MainWindow::goToCreateProfilePage() {
    // Clear all input fields
    ui->ProfileNameTextEdit->clear();
    ui->GenderComboBox->setCurrentIndex(0); // Reset dropdown to the first option
    ui->WeightTextEdit->clear();
    ui->HeightTextEdit->clear();
    ui->DOBEdit->setDate(QDate::currentDate()); // Reset to current date
    ui->LoginTextEdit->setText(currentUser ? currentUser->getEmail() : "");
    ui->PasswordTextEditCreate->setText(currentUser ? currentUser->getPassword() : "");

    // Navigate to the Create Profile Page
    ui->AppStackedWidget->setCurrentWidget(ui->CreateProfilePage);
}


void MainWindow::saveProfile() {
    // Collect data for User

    QString email = ui->LoginTextEdit->toPlainText();
    QString password = ui->PasswordTextEditCreate->toPlainText();

    // Validate User data

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Email and password cannot be empty.");
        return;
    }

    // Create or update the User

    if (!currentUser) {
        currentUser = new User(email, password);
    }

    // Collect data for Profile

    QString name = ui->ProfileNameTextEdit->toPlainText();
    QString gender = ui->GenderComboBox->currentText();
    double weight = ui->WeightTextEdit->toPlainText().toDouble();
    double height = ui->HeightTextEdit->toPlainText().toDouble();
    QDate dob = ui->DOBEdit->date();

    // Validate Profile data

    if (name.isEmpty() || gender.isEmpty() || weight <= 0 || height <= 0) {
        QMessageBox::warning(this, "Input Error", "All profile fields must be filled correctly.");
        return;
    }

    // Create and associate the Profile with the User

    Profile* newProfile = new Profile(name, gender, weight, height, dob);
    currentUser->addProfile(newProfile);

    // Show success message

    QMessageBox::information(this, "Profile Created", "Profile and user created successfully!");

    // Navigate to the Home Page
    qDebug()<<"Name: "<<name<<"Gender: "<<gender<<" Weight: "<<weight<<" Height: "<<height<<" Dob: "<<dob;

    // Populate profiles on the Profiles Page
    updateProfilesList();

    // Navigate to the Profiles Page
    ui->AppStackedWidget->setCurrentWidget(ui->ProfilePage);
}

void MainWindow::updateProfilesList() {
    if (!currentUser) {
        ui->ProfileListLabel->setText("No profiles found.");
        return;
    }

    // Retrieve profiles
    QList<Profile*> profiles = currentUser->getProfiles();

    qDebug()<<profiles.size();

    // Build profile list as a string
    QString profilesText;
    for (int i = 0; i < profiles.size(); ++i) {
        Profile* profile = profiles[i];
        profilesText += QString("Current User: %1\n").arg(currentUser->getEmail());

        profilesText += QString("Profile %1:\n").arg(i + 1);
        profilesText += QString("Name: %1\n").arg(profile->getName());
        profilesText += QString("Gender: %1\n").arg(profile->getGender());
        profilesText += QString("Weight: %1 kg\n").arg(profile->getWeight());
        profilesText += QString("Height: %1 cm\n").arg(profile->getHeight());
        profilesText += QString("Date of Birth: %1\n\n").arg(profile->getDateOfBirth().toString("yyyy-MM-dd"));
    }

    // Update the QLabel
    ui->ProfileListLabel->setText(profilesText);
}


void MainWindow::showProfiles() {
    if (!currentUser) return;

    QString profileList = "Profiles:\n";
    for (Profile* profile : currentUser->getProfiles()) {
        profileList += profile->getName() + " (" + profile->getGender() + ")\n";
    }

    QMessageBox::information(this, "User Profiles", profileList);
}

void MainWindow::createPresetUsers() {
    // Create users with a test profile
    User* user1 = new User("test1@example.com", "password1");
    User* user2 = new User("test2@example.com", "password2");

    Profile* profile1 = new Profile("Profile1ForTest", "Male", 70.0, 175.0, QDate(1990, 1, 1));
    user1->addProfile(profile1);
    user2->addProfile(profile1); // Both users share the same test profile

    presetUsers.append(user1);
    presetUsers.append(user2);
}

void MainWindow::handleLogin() {
    // Get input from login fields
    QString email = ui->LoginEmailTextEdit->toPlainText();
    QString password = ui->PasswordTextEdit->toPlainText();

    // Validate credentials
    User* user = User::validateCredentials(email, password, presetUsers);

    if (user) {
        // Successful login
        currentUser = user;
        QMessageBox::information(this, "Login Successful", "Welcome to the app!");

        // Navigate to Home Page
        showProfiles();
        ui->AppStackedWidget->setCurrentWidget(ui->HomePage);
    } else {
        // Failed login
        QMessageBox::critical(this, "Login Failed", "Incorrect email or password. Please try again.");
    }
}

// Just to show Bar Graph
void MainWindow::showBarGraph()
{
    // Create a new bar set and populate it with data
    QBarSet *set0 = new QBarSet("Organ 1");
    QBarSet *set1 = new QBarSet("Organ 2");
    QBarSet *set2 = new QBarSet("Organ 3");

    // Sample data values
    *set0 << 70 << 85 << 60;
    *set1 << 55 << 90 << 40;
    *set2 << 65 << 75 << 50;

    // Create a bar series and add the sets
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);

    // Create a chart and add the series
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Organ Health Metrics");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Define categories (x-axis labels)
    QStringList categories;
    categories << "Scan 1" << "Scan 2" << "Scan 3";

    // Create category axis (x-axis)
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Create value axis (y-axis)
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 100); // Set the range for y-axis
    axisY->setTitleText("Health Metric (%)");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Remove legend for simplicity
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Create a QChartView and set it as the central widget
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Add the chart to the placeholder widget (chartContainer)
    QVBoxLayout *layout = new QVBoxLayout(ui->chartContainer);
    layout->addWidget(chartView);
    ui->chartContainer->setLayout(layout);
}

void MainWindow::showRadarChart()
{
    // Create a polar chart
    QtCharts::QPolarChart *polarChart = new QtCharts::QPolarChart();
    polarChart->setTitle("Organ Health Radar Chart");

    // Sample Data for the Radar Chart
    QVector<double> leftSideData = {85, 70, 90, 95, 80};
    QVector<double> rightSideData = {75, 85, 70, 90, 88};
    QVector<double> averageValues = {80, 78, 80, 92, 84};

    // Labels for the axes
    QStringList categories = {"Heart", "Liver", "Lungs", "Kidneys", "Stomach"};

    // Create a Value Axis (for the circular range)
    QtCharts::QValueAxis *valueAxis = new QtCharts::QValueAxis();
    valueAxis->setRange(0, 100); // Scale from 0 to 100
    valueAxis->setTickCount(6);  // Add tick marks
    valueAxis->setLabelFormat("%.0f");
    valueAxis->setTitleText("Health Metric (%)");
    polarChart->addAxis(valueAxis, QtCharts::QPolarChart::PolarOrientationRadial);

    // Create a Category Axis (for the angular labels)
    QtCharts::QCategoryAxis *angularAxis = new QtCharts::QCategoryAxis();
    angularAxis->setLabelsPosition(QtCharts::QCategoryAxis::AxisLabelsPositionOnValue);
    for (int i = 0; i < categories.size(); ++i)
    {
        angularAxis->append(categories[i], i);
    }
    angularAxis->setRange(0, categories.size());
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

    // Add the chart to the placeholder widget (chartContainer)
    QVBoxLayout *layout = new QVBoxLayout(ui->chartContainer);
    layout->addWidget(chartView);
    ui->chartContainer->setLayout(layout);
}
