#ifndef USER_H
#define USER_H

#include <QString>
#include <QList>
#include "Profile.h"

class User {
private:
    QString email;
    QString password;
    QList<Profile*> profiles;

public:
    User(const QString& email, const QString& password)
        : email(email), password(password) {}

    QString getEmail() const { return email; }
    QString getPassword() const { return password; }
    QList<Profile*> getProfiles() const { return profiles; }
    void setProfiles(const QList<Profile*>& updatedProfiles);

    void addProfile(Profile* profile) { profiles.append(profile); }
    static User* validateCredentials(const QString& email, const QString& password, const QList<User*>& users);

};

#endif // USER_H
