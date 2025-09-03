#include "Usuario.h"

Usuario::Usuario(int id, 
    const std::string& username, 
    const std::string& email, 
    const std::string& passwordHash)
    : Id(id), Username(username), Email(email), PasswordHash(passwordHash) {}


// Getters
int Usuario::getId() const {
    return Id;
}  
std::string Usuario::getUsername() const {
    return Username;
}
std::string Usuario::getEmail() const {
    return Email;
}
std::string Usuario::getPasswordHash() const {
    return PasswordHash;
}
// Setters
void Usuario::setUsername(const std::string& username) {
    this->Username = username;
}
void Usuario::setEmail(const std::string& email) {
    this->Email = email;
}
void Usuario::setPasswordHash(const std::string& passwordHash) {
    this->PasswordHash = passwordHash;
}

// Otros métodos
