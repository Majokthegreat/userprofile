//simple admission program to  admit students to different  level based on  their age subject to a maximum age of 16*
#include <iostream>
using namespace std;
int main() {
    int age;
    string name;
    cout << " welcome to  the school Admissio portal!";
    cout << "\n Please Enter the full  name of the student: ";
    getline(cin, name);
    cout << " Please Enter the age of the student: "; 
    cin >> age;  

    // Check if the age is greater than or equal to 4 and less than or equal to 16
    if (age >= 7 && age <= 16) {
    cout << " congratulations!." << endl;
    cout << name << " is admitted to grade school." << endl;

    }
        // Further categorize based on age
        else if (age >= 5 && age <= 6) {
    cout << "congratulations." << endl;
    cout << name << " is admitted to kindergarten." << endl;

        }
        else if (age >= 3 && age <= 4) {
    cout << "congratulations." << endl;
    cout << name << " is admitted to preschool." << endl;
        }
        else if (age >= 1 && age <= 2) {
    cout << "congratulations." << endl;
    cout << name << " is admitted to playgroup." << endl; 

    }
    else {
    
    cout << "sorry, "<<name <<" does not meet the age requirements for admission." << endl;

    }
    return 0;
}