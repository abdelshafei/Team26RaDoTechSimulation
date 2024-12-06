#ifndef HEALTHDATA_H
#define HEALTHDATA_H

#include <QString>
#include <QDate>
#include <QList>

/* Class Purpose:
    * The HealthData class is used to store the health data of a user for a specific date.
    * The health data includes the meridian results and comments provided by the user.
    * The class provides functions to calculate functional health indicators and professional practitioner data.
    * 
    * Class Functions:
    * HealthData(const QDate& date, const QList<MeridianResult>& data, const QList<Comments>& comments) - Constructor for the HealthData class.
    * getDate() - Returns the date of the health data.
    * getData() - Returns the meridian results of the health data.
    * getComments() - Returns the comments of the health data.
    * calculateEnergyLevel() - Calculates the energy level of the user based on the meridian results.
    * calculateImmuneSystem() - Calculates the immune system of the user based on the meridian results.
    * calculateMetabolism() - Calculates the metabolism of the user based on the meridian results.
    * calculatePsychoEmotionalState() - Calculates the psycho-emotional state of the user based on the meridian results.
    * calculateMusculoskeletalSystem() - Calculates the musculoskeletal system of the user based on the meridian results.
    * calculateAverageValue() - Calculates the average value of the meridian results.
    * calculateLeftTotal() - Calculates the total conductance of the left side meridian results.
    * calculateRightTotal() - Calculates the total conductance of the right side meridian results.
    * calculateLeftRightRatio() - Calculates the ratio of the total conductance between the left and right sides.
    * calculateUpperTotal() - Calculates the total conductance of the upper body meridian results.
    * calculateLowerTotal() - Calculates the total conductance of the lower body meridian results.
    * calculateUpperLowerRatio() - Calculates the ratio of the total conductance between the upper and lower body.
    * 
    * Class Attributes:
    * date - A QDate object representing the date of the health data.
    * data - A list of MeridianResult objects representing the meridian results of the health data.
    * comments - A list of Comments objects representing the comments of the health data.
    * 
    * Class Structs:
    * MeridianResult - A struct representing the result of a meridian test.
    * Comments - A struct representing the comments provided by the user.
*/


struct MeridianResult {
    QString meridian;
    QString side;
    int conductance;// µA
    QString status;
};

struct Comments
{
    double bodyTemperature;
    QString bloodPressure;
    int heartRate;
    int sleepingTime;
    double currentWeight;
    QString emotionalState;
    QString overallFeeling;
    QString notes;
};


class HealthData {
private:
    QDate date;
    QList<MeridianResult> data;
    QList<Comments> comments;

public:
    HealthData(const QDate& date, const QList<MeridianResult>& data, const QList<Comments>& comments)
        : date(date), data(data), comments(comments) {}

    QDate getDate() const { return date; }
    QList<MeridianResult> getData() const { return data; }
    QList<Comments> getComments() const {return comments;}

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
