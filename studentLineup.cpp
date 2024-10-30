// studentLineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    string path;
    cout << "enter full path to file with double slashes: ";
    cin >> path;
    ifstream myf(path);
    if (myf.is_open()) {
        while (getline(myf, line)) {
            cout << line << "\n";
        }
        myf.close();
    }
    else cout << "Couldn't open that file try running the program again and entering a valid path";
}
