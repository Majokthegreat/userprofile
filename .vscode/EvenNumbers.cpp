//even numbers from 12 to 28 using while loop
#include <iostream>
using namespace std;
int main() {
    int num = 12; // Starting from 12

    cout << "Even numbers from 12 to 28 are:" << endl;

    while (num <= 28) { // Continue until 28
        cout << num << " "; // Print the current even number
        num += 2; // Increment by 2 to get the next even number
    }

    cout << endl; // New line after printing all numbers
    return 0;
}