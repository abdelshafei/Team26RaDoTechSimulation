#ifndef RECOMMENDATIONS_H
#define RECOMMENDATIONS_H

#include "HealthData.h"
#include "ui_mainwindow.h"

class Recommendations
{
public:
    Recommendations();
    void generateRecommendations(HealthData* healthData, Ui::MainWindow* ui);

private:
    QString hyperactivePlaceholder();
    QString insufficiencyPlaceholder();
    QString dietPlaceholder();
    QString foodPlaceholder();
    QString excludePlaceholder();
    QString generalPlaceholder();
    QString activityPlaceholder();
    QString supplementsPlaceholder();
};

#endif // RECOMMENDATIONS_H
