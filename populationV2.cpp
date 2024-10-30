// population.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
double inputValidation(string question, double min, bool inclusiveMin, double max, bool inclusiveMax);
int main()
{
    double startPop = 2;
    double days = 1;
    double percent = 0.01;
    startPop = inputValidation("starting population:", 2, true, DBL_MAX, false);
    days = inputValidation("days of multiplication:", 1, true, DBL_MAX, false);
    percent = inputValidation("percentage increase per day (e.g. 0.5):", 0, false, DBL_MAX, false);
    double newPop = startPop;
    for (int i = 0; i < days; i++) {
        cout << "__________________________________________________\n";
        cout << "  Start for day " << to_string(i + 1) << " : " << to_string(newPop);
        double increase = newPop * percent;
        cout << "  increase for this day is : " << increase;
        newPop += increase;
        cout << "  new population is : " << newPop << "\n";
    }
    return 0;
}
/// <summary>
/// gets input number validation(double) within a specified range
/// </summary>
/// <param name="question">the prompt to be output to the user</param>
/// <param name="min">the minimum boundary for acceptable input</param>
/// <param name="inclusiveMin">if true the minimum is an acceptable input</param>
/// <param name="max">the maximum boundary for acceptable input</param>
/// <param name="inclusiveMax">if trye the maximum is an acceptable input</param>
/// <returns></returns>
double inputValidation(string question, double min, bool inclusiveMin, double max, bool inclusiveMax) {
    //if inclusive(max/min) is true the output can include that number
    cout << question;
    double input;
    bool flag = true;
    while (flag) {
        flag = false;
        cin >> input;
        if (inclusiveMin) {
            if (input < min) flag = true;
        }
        else {
            if (input <= min) flag = true;
        }
        if (inclusiveMax) {
            if (input > max) flag = true;
        }
        else {
            if (input >= max) flag = true;
        }
        if (flag) cout << "\n try again: ";
    }
    return input;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
