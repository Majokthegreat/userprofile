#include <iostream>
#include <cmath>   // for pow() and sqrt()
using namespace std;

int main() {
    // Declare variables for user input
    double num1, num2;

    // Prompt user for input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform and display all operations
    cout << "\nResults:\n";
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;

    // Handle division safely
    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Division: Cannot divide by zero!" << endl;

    // Power (num1 raised to num2)
    cout << num1 << " raised to the power of " << num2 << " = " << pow(num1, num2) << endl;

    // Square roots
    if (num1 >= 0)
        cout << "Square root of " << num1 << " = " << sqrt(num1) << endl;
    else
        cout << "Square root of " << num1 << " = Undefined (negative number)" << endl;

    if (num2 >= 0)
        cout << "Square root of " << num2 << " = " << sqrt(num2) << endl;
    else
        cout << "Square root of " << num2 << " = Undefined (negative number)" << endl;

    return 0;
}
