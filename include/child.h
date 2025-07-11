#pragma once
#include <string>

class Child {
public:
    Child() = default;
    Child(const std::string& _name_, int _age_);
    void setAge(int _age_) {
        age = _age_;
    }
    int getAge() const {
        return age;
    }
    void setName(const std::string& _name_);
    std::string getName() const;
private:
    std::string name;
    int age;
};