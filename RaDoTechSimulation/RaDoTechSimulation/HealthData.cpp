#include "HealthData.h"
#include <QDebug>

static QList<MeridianResult> filterByPrefix(const QList<MeridianResult>& data, const QString& prefix) {
    QList<MeridianResult> filtered;
    for (const MeridianResult& result : data) {
        if (result.meridian.startsWith(prefix)) {
            filtered.append(result);
        }
    }
    return filtered;
}

static double calculateSideSum(const QList<MeridianResult>& data, const QString& side) {
    double sum = 0.0;
    for (const MeridianResult& result : data) {
        if (result.side == side) {
            sum += result.conductance;
        }
    }
    return sum;
}

// Scaling factors for normalization
static const double ENERGY_LEVEL_SCALING_FACTOR = 2.78;
static const double IMMUNE_SYSTEM_SCALING_FACTOR = 52.1;
static const double PSYCHO_EMOTIONAL_SCALING_FACTOR = 80.71;
static const double MUSCULOSKELETAL_SCALING_FACTOR = 86.0;

// Functional Health Indicators
double HealthData::calculateEnergyLevel() const {
    double leftTotal = calculateSideSum(data, "Left");
    double rightTotal = calculateSideSum(data, "Right");
    qDebug()<<"Left Total: "<< leftTotal<<" Right Total: "<<rightTotal;
    double total = leftTotal + rightTotal;
    qDebug()<<"Total: " <<total / (data.size() * ENERGY_LEVEL_SCALING_FACTOR);
    return total / (data.size() * ENERGY_LEVEL_SCALING_FACTOR);
}

double HealthData::calculateImmuneSystem() const {
    QList<MeridianResult> upperBody = filterByPrefix(data, "H");
    double leftTotal = calculateSideSum(upperBody, "Left");
    double rightTotal = calculateSideSum(upperBody, "Right");
    double upperTotal = leftTotal + rightTotal;
    return upperTotal / (6 * IMMUNE_SYSTEM_SCALING_FACTOR);
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
    return sum / (emotionalMeridians.size() * PSYCHO_EMOTIONAL_SCALING_FACTOR);
}

double HealthData::calculateMusculoskeletalSystem() const {
    QList<MeridianResult> lowerBody = filterByPrefix(data, "F");
    double leftTotal = calculateSideSum(lowerBody, "Left");
    double rightTotal = calculateSideSum(lowerBody, "Right");
    double lowerTotal = leftTotal + rightTotal;
    return lowerTotal / (6 * MUSCULOSKELETAL_SCALING_FACTOR);
}

// Professional Practitioner Data
double HealthData::calculateAverageValue() const {
    double leftTotal = calculateSideSum(data, "Left");
    double rightTotal = calculateSideSum(data, "Right");
    return (leftTotal + rightTotal) / (data.size() * ENERGY_LEVEL_SCALING_FACTOR);
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
