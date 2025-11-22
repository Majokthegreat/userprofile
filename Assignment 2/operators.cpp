// aprogram to  test various operators in C++
#include <iostream>
using namespace std;
int main() {

    int num1 = 16, num2 = 4;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;
    cout << "Modulus: " << num1 %  num2<< endl;

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "num1 == num2: " << (num1 == num2) << endl;
    cout << "num1 != num2: " << (num1 != num2) << endl;
    cout << "num1 > num2: " << (num1 > num2) << endl;
    cout << "num1 < num2 : " << (num1 < num2)<< endl;
    cout << "num1 >= num2: " << (num1 >= num2) << endl;
    cout << "num1 <= num2: " << (num1 <= num2) << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;

    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "num1  & num2: " << (num1 & num2) << endl;
    cout << "num1 | num2: " << (num1 | num2) << endl;
    cout << "num1 ^ num2: " << (num1 ^ num2) << endl;
    cout << "~num1: " << (~num1) << endl;
    cout << "num1 << 1: " << (num1 << 1) << endl;
    cout << "num1 >> 1: " << (num1 >> 1) << endl;

    return 0;
}