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
    string townName;
    cout << "enter full path to file with double slashes: ";
    cin >> path;
    cout << "enter town name: ";
    cin >> townName;
    cout << "----------------------" << endl << townName << " Population Growth" << endl;
    ifstream myf(path);
    if (myf.is_open()) {
        while (getline(myf, line)) {
            string delimiter = " ";
            string year = (line.substr(0, line.find(delimiter)));
            int population = stoi(line.substr(year.length()+1, line.length()));
            cout << year << ": population: ";
            int thousands = population / 1000;
            for (int i = 0; i < thousands; i++) {
                cout << "*";
            }
            cout << "\n";
        }
        myf.close();
    }
    else cout << "Couldn't open that file try running the program again and entering a valid path";
}
//C:\\Users\\b7ers\\OneDrive\\Documents\\People.txt