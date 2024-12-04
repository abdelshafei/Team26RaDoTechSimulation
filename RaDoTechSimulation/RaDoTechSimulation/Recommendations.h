#ifndef RECOMMENDATIONS_H
#define RECOMMENDATIONS_H

#include "HealthData.h"
#include "ui_mainwindow.h" // Include the generated UI file

class Recommendations
{
public:
    Recommendations();
    void generateRecommendations(HealthData* healthData, Ui::MainWindow* ui);
    QString hyperactivePlaceholder();
};

#endif // RECOMMENDATIONS_H
