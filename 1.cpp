#include <iostream>
#include <string>

//1
int main()
{
    std::string name;
    std::cout << "Enter your name" << std::endl;
    std::getline(std::cin, name);
    std::string surname;
    std::cout << "Enter your surname" << std::endl;
    std::getline(std::cin, surname);
    std::string number;
    std::cout << "Enter your number of group" << std::endl;
    std::getline(std::cin, number);
    std::string faculty;
    std::cout << "Enter your faculty" << std::endl;
    std::getline(std::cin, faculty);
    std::cout << "name: " << name << std::endl << "surname: "
              << surname << std::endl << "number of group: "
              << number << std::endl << "faculty: " << faculty << std::endl;
    return 0;
}
