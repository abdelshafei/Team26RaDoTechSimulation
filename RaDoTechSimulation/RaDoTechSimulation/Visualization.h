#ifndef VISUALIZATION_H
#define VISUALIZATION_H

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
#include "ui_mainwindow.h" // Include the generated UI file
#include "HealthData.h"

class Visualization : public QWidget {
    Q_OBJECT

public:
    explicit Visualization(QWidget *parent = nullptr);
    void showBarGraph(HealthData* healthdata, Ui::MainWindow* ui);
    void showCircleGraph(HealthData* healthdata, Ui::MainWindow* ui);
    void showBodyGraph(HealthData* healthdata, Ui::MainWindow* ui);

private:
    // Import UI components from the MainWindow UI
    Ui::MainWindow* ui;
};

#endif // VISUALIZATION_H
