#ifndef USER_H
#define USER_H

#include <QString>
#include <QList>
#include "Profile.h"

/* Class Purpose:
 * The User class is used to manage user information, including email, password, and associated profiles.
 *
 * Class Attributes:
 * email - Stores the email of the user.
 * password - Stores the password of the user.
 * profiles - Stores the list of profiles associated with the user.
 *
 * Class Functions:
 * getEmail() - Returns the email of the user.
 * getPassword() - Returns the password of the user.
 * getProfiles() - Returns the list of profiles associated with the user.
 * setProfiles() - Sets the list of profiles associated with the user.
 * addProfile() - Adds a profile to the user's list of profiles.
 * validateCredentials() - Validates the user's credentials against a list of users.
 */

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
