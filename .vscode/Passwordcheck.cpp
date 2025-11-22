// Passwordcheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string correctPassword = "P123";
    string userPassword;
    int maxAttempts = 3;
    int attempts = 0;
    
    while (attempts < maxAttempts)
    {
        cout << "Enter password: ";
        cin >> userPassword;
        
        if (userPassword == correctPassword)
        {
            cout << "✓ Access Granted! Welcome back." << endl;
            return 0;
        }
        else
        {
            attempts++;
            int remaining = maxAttempts - attempts;
            
            if (remaining > 0) {
                cout << "✗ Incorrect! " << remaining 
                     << " attempt(s) remaining before permanent lock!" << endl;
            }
        }
    }
    
    cout << "🔒 ACCOUNT BLOCKED! Maximum security violations detected." << endl;
    cout << "Please contact system administrator to restore access." << endl;
    return 0;
}