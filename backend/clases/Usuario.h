
#include<iostream>
#include<string>
#include<vector>

class Usuario {
private:
    int Id;
    std::string Username;
    std::string Email;
    std::string PasswordHash;
    
public:
    
    Usuario(int id, 
        const std::string& username, 
        const std::string& email, 
        const std::string& passwordHash);
    
    // Getters
    int getId() const;
    std::string getUsername() const;
    std::string getEmail() const;
    std::string getPasswordHash() const;


    // Setters
    void setUsername(const std::string& username);
    void setEmail(const std::string& email);
    void setPasswordHash(const std::string& passwordHash);

    // Otros métodos

    

};