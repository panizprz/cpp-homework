#pragma once

#include <iostream>
#include <string>

class User
{
private:
    std::string name;
    std::string email;
public:
    User(const std::string&, const std::string&);
    ~User();

    void displayUser() const;
};

