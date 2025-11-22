#include <iostream>
#include <string>  // Needed for string input
using namespace std;

int main() {
    int age;
    string interest;

    cout << "Please Enter the age of the child: ";
    cin >> age;

    // Check if the age is between 4 and 10 (inclusive)
    if (age >= 4 && age <= 10) {
        cout << "Enter the child's interest (soccer/art): ";
        cin >> interest;

        // Compare strings using == (and fix assignment vs comparison)
        if (interest == "soccer") {
            cout << "Admitted! Proceed to Registration." << endl;
            cout << "Assigned to Soccer playgroup!" << endl;
        }
        else if (interest == "art") {
            cout << "Admitted to school." << endl;
            cout << "Assigned to Art playgroup!" << endl;
        }
        else {
            cout << "Sorry, we currently only have Soccer and Art playgroups." << endl;
        }
    }
    else {
        cout << "Sorry, the child must be between 4 and 10 years old to join." << endl;
    }

    return 0;
}