#ifndef USER_H
#define USER_H

#include <QString>
#include <QList>
#include "Profile.h"

class User {
private:
    QString email;
    QString password;
    QList<Profile*> profiles; // Allow multiple profiles

public:
    User(const QString& email, const QString& password)
        : email(email), password(password) {}

    QString getEmail() const { return email; }
    QString getPassword() const { return password; }

    void addProfile(Profile* profile) { profiles.append(profile); }
    QList<Profile*> getProfiles() const { return profiles; }
};

#endif // USER_H
