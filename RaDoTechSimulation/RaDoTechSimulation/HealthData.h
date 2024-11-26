#ifndef HEALTHDATA_H
#define HEALTHDATA_H

#include <QString>
#include <QDate>
#include <QList>

struct MeridianResult {
    QString meridian;
    QString side;
    int conductance;  // µA
    QString status;
};

class HealthData {
private:
    QDate date;                  // Date of the measurement
    QList<MeridianResult> data;  // List of results for the measurement

public:
    HealthData(const QDate& date, const QList<MeridianResult>& data)
        : date(date), data(data) {}

    QDate getDate() const { return date; }
    QList<MeridianResult> getData() const { return data; }

    // Algorithms Functions
    // Functional Health Indicators
    double calculateEnergyLevel() const;
    double calculateImmuneSystem() const;
    double calculateMetabolism() const;
    double calculatePsychoEmotionalState() const;
    double calculateMusculoskeletalSystem() const;

    // Professional Practitioner Data
    double calculateAverageValue() const;
    double calculateLeftTotal() const;
    double calculateRightTotal() const;
    double calculateLeftRightRatio() const;
    double calculateUpperTotal() const;
    double calculateLowerTotal() const;
    double calculateUpperLowerRatio() const;
};

#endif // HEALTHDATA_H
