// simple admission program to admit students  to learning levels based on age and interest
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string interest;

    cout << "Enter child's age: ";
    cin >> age;
    cin.ignore();  // clear input buffer

    // Check age condition
    if (age < 4 || age > 10) {
        cout << "Error: The age input is invalid." << endl;
        return 0;
    }

    cout << "Enter child's interest: ";
    getline(cin, interest);

    // Convert to lowercase (manual approach)
    for (char &c : interest) {
        c = tolower(c);
    }

    // Switch-case using string comparison is not allowed directly in C++
    // So we use if-else inside a switch dummy variable
    int choice = 0;

    if (interest == "soccer") choice = 1;
    else if (interest == "art") choice = 2;
    else if (interest == "music") choice = 3;
    else if (interest == "athletics") choice = 4;
    else if (interest == "toys") choice = 5;
    else choice = 6;

    switch (choice) {
        case 1:
            cout << "Assign to the Soccer Play Group." << endl;
            break;

        case 2:
            cout << "Assign to the Art Play Group." << endl;
            break;

        case 3:
            cout << "Assign to the Music Play Group." << endl;
            break;

        case 4:
            cout << "Assign to the Athletics Play Group." << endl;
            break;

        case 5:
            cout << "Assign to the Toys Play Group." << endl;
            break;

        default:
            cout << "Assign to Other Groups." << endl;
    }

    return 0;
}
