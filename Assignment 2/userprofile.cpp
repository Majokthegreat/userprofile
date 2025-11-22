#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string firstName, middleName, lastName, fullName, alias, favoriteMeal, favoriteMovie, reason;

    std::cout << "Enter your First Name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter your Middle Name: ";
    std::getline(std::cin, middleName);

    std::cout << "Enter your Last Name: ";
    std::getline(std::cin, lastName);

    // Full name can be constructed or entered manually
    // Constructing it:
    fullName = firstName + " " + middleName + " " + lastName;

    std::cout << "Enter your Alias: ";
    std::getline(std::cin, alias);

    std::cout << "Enter your Favorite Meal: ";
    std::getline(std::cin, favoriteMeal);

    std::cout << "Enter your Favorite Movie: ";
    std::getline(std::cin, favoriteMovie);

    std::cout << "Why are you in this class? ";
    std::getline(std::cin, reason);

    // Formatting and displaying the output
    std::cout << "\n--- User Profile Summary ---\n";
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Middle Name: " << middleName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Alias: " << alias << std::endl;
    std::cout << "Favorite Meal: " << favoriteMeal << std::endl;
    std::cout << "Favorite Movie: " << favoriteMovie << std::endl;
    std::cout << "Reason for class: " << reason << std::endl;
    std::cout << "--------------------------\n";

    return 0;
}