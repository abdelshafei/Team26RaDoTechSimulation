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
#include "ui_mainwindow.h"
#include "HealthData.h"

/* Class Purpose:
 * The Visualization class is used to create and display various types of health data visualizations.
 *
 * Class Attributes:
 * ui - Pointer to the main window UI.
 *
 * Class Functions:
 * showBarGraph() - Displays a bar graph based on the provided health data.
 * showCircleGraph() - Displays a circle graph based on the provided health data.
 * showBodyGraph() - Displays a body graph based on the provided health data.
 */

class Visualization : public QWidget {
    Q_OBJECT

public:
    explicit Visualization(QWidget *parent = nullptr);
    void showBarGraph(HealthData* healthdata, Ui::MainWindow* ui);
    void showCircleGraph(HealthData* healthdata, Ui::MainWindow* ui);
    void showBodyGraph(HealthData* healthdata, Ui::MainWindow* ui);

private:
    Ui::MainWindow* ui;
};

#endif // VISUALIZATION_H
