#ifndef PROFILE_H
#define PROFILE_H

#include <QString>
#include <QDate>
#include "HealthData.h"

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
