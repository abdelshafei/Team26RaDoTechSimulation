#include "User.h"

User* User::validateCredentials(const QString& email, const QString& password, const QList<User*>& users) {
    for (User* user : users) {
        if (user->getEmail() == email) {
            if (user->getPassword() == password) {
                return user;
            }
            break;
        }
    }
    return nullptr;
}

void User::setProfiles(const QList<Profile*>& updatedProfiles) {
    profiles = updatedProfiles;
}
