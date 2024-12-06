#ifndef RECOMMENDATIONS_H
#define RECOMMENDATIONS_H

#include "HealthData.h"
#include "ui_mainwindow.h"

/* Class Purpose:
 * The Recommendations class is used to generate health recommendations based on the provided health data.
 *
 * Class Functions:
 * generateRecommendations() - Generates health recommendations based on the provided health data and updates the UI.
 * hyperactivePlaceholder() - Generates a placeholder recommendation for hyperactivity.
 * insufficiencyPlaceholder() - Generates a placeholder recommendation for insufficiency.
 * dietPlaceholder() - Generates a placeholder recommendation for diet.
 * foodPlaceholder() - Generates a placeholder recommendation for food.
 * excludePlaceholder() - Generates a placeholder recommendation for exclusions.
 * generalPlaceholder() - Generates a placeholder recommendation for general advice.
 * activityPlaceholder() - Generates a placeholder recommendation for activities.
 * supplementsPlaceholder() - Generates a placeholder recommendation for supplements.
 */

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
