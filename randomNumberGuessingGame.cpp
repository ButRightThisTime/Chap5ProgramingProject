// randomNumberGuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <time.h>

using namespace std;
int randrange(int min, int max);
int checkGuess(int guess, int correct);
int main()
{
    while (true) {
        int number = randrange(1, 100);
        int guesses = 0;
        while (true) {            
            cout << "guess a numnber between 1 and 100: ";
            int guess;
            cin >> guess;
            guesses++;
            int flag = checkGuess(guess, number);
            if (flag == 1) cout << "too high" << endl;
            else if (flag == -1) cout << "too low" << endl;
            if (flag == 0) break;
            
        }
        cout << "Thats it! You Guessed it in "<< guesses << " tries" << endl << "enter(Q) to quit or anything else to keep guessing";
        string cont = "";
        cin >> cont;
        if (cont == "Q") break;
    }
}
int randrange(int min, int max) {
    srand(time(0));
    int num = min + (rand() % (max - min));
    return num;
}
int checkGuess(int guess, int correct) {
    if (guess > correct) return 1;
    else if (guess < correct) return -1;
    else return 0;
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
