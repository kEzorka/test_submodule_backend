#include "../include/child.h"

Child::Child(const std::string& _name_, int _age_) : 
    name(_name_), age(_age_) {}

void Child::setName(const std::string& _name_) {
    name = _name_;
}

std::string Child::getName() const {
    return name;
}
