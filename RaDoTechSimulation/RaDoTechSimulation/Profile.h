#ifndef PROFILE_H
#define PROFILE_H

#include <QString>
#include <QDate>
#include "HealthData.h"

/* Class Purpose:
 * The Profile class is used to store the personal information of a user profiles and connect to the Health Data of that profile.
 *
 * Class Attributes:
 * name - Stores the name of the profile.
 * gender - Stores the gender of the profile.
 * weight - Stores the weight of the profile.
 * height - Stores the height of the profile.
 * dateOfBirth - Stores the date of birth of the profile.
 * history - Stores the health data history of the profile.
 * selectedProfile - Stores the currently selected profile.
 *
 * Class Functions:
 * getName() - Returns the name of the profile.
 * getGender() - Returns the gender of the profile.
 * getWeight() - Returns the weight of the profile.
 * getHeight() - Returns the height of the profile.
 * getDateOfBirth() - Returns the date of birth of the profile.
 * getHistory() - Returns the health data history of the profile.
 * getSelectedProfile() - Returns the currently selected profile.
 * addHealthData() - Adds health data to the profile's history.
 * setSelectedProfile() - Sets the currently selected profile.
 * setName() - Sets the name of the profile.
 * setGender() - Sets the gender of the profile.
 * setWeight() - Sets the weight of the profile.
 * setHeight() - Sets the height of the profile.
 * setDateOfBirth() - Sets the date of birth of the profile.
 * 
 * Class Attributes:
 * name - Stores the name of the profile.
 * gender - Stores the gender of the profile.
 * weight - Stores the weight of the profile.
 * height - Stores the height of the profile.
 * dateOfBirth - Stores the date of birth of the profile.
 * history - Stores the health data history of the profile.
 * selectedProfile - Stores the currently selected profile.
 * 
 */


class Profile {
private:
    QString name;
    QString gender;
    double weight;
    double height;
    QDate dateOfBirth;
    QList<HealthData*> history;
    Profile* selectedProfile;

public:
    Profile(const QString& name, const QString& gender, double weight, double height, const QDate& dob)
        : name(name), gender(gender), weight(weight), height(height), dateOfBirth(dob) {}

    QString getName() const { return name; }
    QString getGender() const { return gender; }
    double getWeight() const { return weight; }
    double getHeight() const { return height; }
    QDate getDateOfBirth() const { return dateOfBirth; }
    QList<HealthData*> getHistory() const { return history; }
    Profile* getSelectedProfile() {return selectedProfile;}


    void addHealthData(HealthData* data) { history.append(data); }
    void setSelectedProfile(Profile* profile) {selectedProfile = profile; }
    void setName(const QString& name) { this->name = name; }
    void setGender(const QString& gender) { this->gender = gender; }
    void setWeight(double weight) { this->weight = weight; }
    void setHeight(double height) { this->height = height; }
    void setDateOfBirth(const QDate& dob) { this->dateOfBirth = dob; }

};

#endif // PROFILE_H
