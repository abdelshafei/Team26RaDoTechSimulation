#include "HealthData.h"

// Helper function to filter meridian results by name prefix
static QList<MeridianResult> filterByPrefix(const QList<MeridianResult>& data, const QString& prefix) {
    QList<MeridianResult> filtered;
    for (const MeridianResult& result : data) {
        if (result.meridian.startsWith(prefix)) {
            filtered.append(result);
        }
    }
    return filtered;
}

// Helper function to calculate sum for a specific side
static double calculateSideSum(const QList<MeridianResult>& data, const QString& side) {
    double sum = 0.0;
    for (const MeridianResult& result : data) {
        if (result.side == side) {
            sum += result.conductance;
        }
    }
    return sum;
}

// Functional Health Indicators
double HealthData::calculateEnergyLevel() const {
    double leftTotal = calculateSideSum(data, "Left");
    double rightTotal = calculateSideSum(data, "Right");
    return (leftTotal + rightTotal) / 2;
}

double HealthData::calculateImmuneSystem() const {
    QList<MeridianResult> upperBody = filterByPrefix(data, "H");
    double leftTotal = calculateSideSum(upperBody, "Left");
    double rightTotal = calculateSideSum(upperBody, "Right");
    return (leftTotal + rightTotal) / 6;
}

double HealthData::calculateMetabolism() const {
    double leftTotal = calculateSideSum(data, "Left");
    double rightTotal = calculateSideSum(data, "Right");
    return leftTotal / rightTotal;
}

double HealthData::calculatePsychoEmotionalState() const {
    QList<MeridianResult> emotionalMeridians = filterByPrefix(data, "H1");
    emotionalMeridians.append(filterByPrefix(data, "H2"));
    double sum = 0.0;
    for (const MeridianResult& result : emotionalMeridians) {
        sum += result.conductance;
    }
    return sum / emotionalMeridians.size();
}

double HealthData::calculateMusculoskeletalSystem() const {
    QList<MeridianResult> lowerBody = filterByPrefix(data, "F");
    double leftTotal = calculateSideSum(lowerBody, "Left");
    double rightTotal = calculateSideSum(lowerBody, "Right");
    return (leftTotal + rightTotal) / 6;
}

// Professional Practitioner Data
double HealthData::calculateAverageValue() const {
    double leftTotal = calculateSideSum(data, "Left");
    double rightTotal = calculateSideSum(data, "Right");
    return (leftTotal + rightTotal) / data.size();
}

double HealthData::calculateLeftTotal() const {
    return calculateSideSum(data, "Left");
}

double HealthData::calculateRightTotal() const {
    return calculateSideSum(data, "Right");
}

double HealthData::calculateLeftRightRatio() const {
    double leftTotal = calculateLeftTotal();
    double rightTotal = calculateRightTotal();
    return leftTotal / rightTotal;
}

double HealthData::calculateUpperTotal() const {
    QList<MeridianResult> upperBody = filterByPrefix(data, "H");
    double leftTotal = calculateSideSum(upperBody, "Left");
    double rightTotal = calculateSideSum(upperBody, "Right");
    return leftTotal + rightTotal;
}

double HealthData::calculateLowerTotal() const {
    QList<MeridianResult> lowerBody = filterByPrefix(data, "F");
    double leftTotal = calculateSideSum(lowerBody, "Left");
    double rightTotal = calculateSideSum(lowerBody, "Right");
    return leftTotal + rightTotal;
}

double HealthData::calculateUpperLowerRatio() const {
    double upperTotal = calculateUpperTotal();
    double lowerTotal = calculateLowerTotal();
    return upperTotal / lowerTotal;
}
