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
        string name1;
        getline(myf, name1);
        string first = name1;
        string last = name1;
        int i = 1;
        while (getline(myf, line)) {
            i++;
            cout << line << "\n";
            if (line < first) first = line;
            if (line > last) last = line;
            cout << "first: " << first << " last : " << last << "\n";
        }
        cout <<  "first: " << first << " last : " << last << "number of students : " << i << "\n";
        myf.close();
    }
    else cout << "Couldn't open that file try running the program again and entering a valid path";
}
