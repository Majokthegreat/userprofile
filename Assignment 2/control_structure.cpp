#include<iostream>
using namespace std;
int main() {
    int age;
    cout << " Please Enter your age: ";
    cin >>age;

    // Check if the age is greater than or equal to 4
    if (age >=4 && age<=15) {
        cout <<" Admitted ! proceed to Registration." << endl;
    } 

    else {
        cout <<" Decline  minimum age not reached." << endl;
    }
    return 0;
}