#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
    /* writing a file .output .txt will  be crfeated  if the it does not exist  in  the directory 
    */

    ofstream outFile ("output.txt");
    outFile << " writing a file."<< endl; 
    outFile.close();

    // reading from a file
   ifstream inFile ("output.txt");
   string content;
   while (std::getline(inFile, content))
    {

     cout << content << endl;
    }

    inFile.close();// close the  file after reading its contents 

    return 0;
}

