#include<iostream>
#include<cmath>

using namespace std;
int main () {
    double num, result;
    cout << "Enter a number: ";
    cin >> num;

    // Calculate the square root
    result = sqrt(num);
    cout << "Square root of " << num << " is " << result << endl;

    // Calculate the power
    int exponent;
    cout << "Enter an exponent: ";
    cin >> exponent;
    result = pow(num, exponent);
    cout << num << " raised to the power of " << exponent << " is " << result << endl;

    // Calculate the absolute value
    result = fabs(num);
    cout << "Absolute value of " << num << " is " << result << endl;

    return 0;
}