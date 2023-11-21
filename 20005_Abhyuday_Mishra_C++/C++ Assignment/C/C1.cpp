/* 
    C. Basic C++ Object-Oriented Programming :

        C1. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
*/

#include <iostream>
#include <string>

class Person 
{   
    /*Private Members*/
    private:
    std::string name;
    int age;
    std::string country;

    /*Public Members*/
    public:
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setCountry(const std::string& newCountry) {
        country = newCountry;
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getCountry() const {
        return country;
    }
};

int main() {
    Person person;

    person.setName("John Doe");
    person.setAge(30);
    person.setCountry("USA");

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}

/*  OUTPUT

    Name: John Doe
    Age: 30       
    Country: USA  
*/