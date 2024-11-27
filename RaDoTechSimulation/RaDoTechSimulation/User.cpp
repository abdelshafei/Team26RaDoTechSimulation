#include "User.h"

User* User::validateCredentials(const QString& email, const QString& password, const QList<User*>& users) {
    for (User* user : users) {
        if (user->getEmail() == email) {
            if (user->getPassword() == password) {
                return user; // Successful login
            }
            break; // Email matched, but wrong password
        }
    }
    return nullptr; // No matching user
}
