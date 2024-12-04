#include "Recommendations.h"

Recommendations::Recommendations(){}

void Recommendations::generateRecommendations(HealthData* healthData, Ui::MainWindow* ui){
    if (healthData){
        ui->HyperactiveLabel->setText(hyperactivePlaceholder());
        ui->ActivityLabel->setText(activityPlaceholder());
        ui->InsufficiencyLabel->setText(insufficiencyPlaceholder());
        ui->DietLabel->setText(dietPlaceholder());
        ui->FoodLabel->setText(foodPlaceholder());
        ui->ExcludeLabel->setText(excludePlaceholder());
        ui->GeneralLabel->setText(generalPlaceholder());
        ui->SupplementLabel->setText(supplementsPlaceholder());
    }
}
QString Recommendations::hyperactivePlaceholder(){
    QString placeholderText = "Hyper Active Recommendations \nPlaceholder";
    return placeholderText;
}

QString Recommendations::insufficiencyPlaceholder(){
    QString placeholderText = "Insufficiency Recommendations \nPlaceholder";
    return placeholderText;
}
QString Recommendations::dietPlaceholder(){
    QString placeholderText = "Diet Recommendations \nPlaceholder";
    return placeholderText;
}
QString Recommendations::foodPlaceholder(){
    QString placeholderText = "Food Recommendations \nPlaceholder";
    return placeholderText;
}
QString Recommendations::excludePlaceholder(){
    QString placeholderText = "Exclude Recommendations \nPlaceholder";
    return placeholderText;
}
QString Recommendations::generalPlaceholder(){
    QString placeholderText = "General Recommendations \nPlaceholder";
    return placeholderText;
}
QString Recommendations::activityPlaceholder(){
    QString placeholderText = "Activity Recommendations \nPlaceholder";
    return placeholderText;
}
QString Recommendations::supplementsPlaceholder(){
    QString placeholderText = "Supplements Recommendations \nPlaceholder";
    return placeholderText;
}

