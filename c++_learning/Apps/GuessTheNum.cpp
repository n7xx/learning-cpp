#include <iostream>
using namespace std;


int main() {
    int guessNumber = 7;
    int guess_tries = 0;
    cout << "Please Guess the Number between 1 & 10 " << endl;
    cout << "You Have Three Tries" << endl;

    while(true) {
        int guess;
        cout << "Enter Your first try: ";
        cin >> guess;
        if (guess == guessNumber) {
            cout << "Congratulations! You guessed the number in " << guess_tries << " tries" << endl;
            break;
        } 
        else
        {
            cout << "Try Again" << endl;
            guess_tries++;
        }
        if (guess_tries == 3) {
            cout << "Sorry, You Lost all tries.\nThe Number is " << guessNumber << endl;
            break;
        }
    }
    return 0;
}