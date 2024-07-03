#include <iostream>
#include <array>
using namespace std;

int main() {
    int points = 0;
    int answers[3];
    int sequences[3][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5}};

    cout << "Enter The Missing Number in Sequences" << endl;
    cout << "Sequence One: " << endl;
    cout << "1 | 5 | 10 | 16 | ?? " << endl;
    cout << "Missing Number is: ";
    cin >> answers[0];

    if (answers[0] == sequences[0][4]) {
        points += 10;
    }
    cout << "YOUR POINTS: " << points << endl;

    cout << "Sequence Two: " << endl;
    cout << "2 | 4 | 8 | 16 | ?? " << endl;
    cout << "Missing Number is: ";
    cin >> answers[1];

    if (answers[1] == sequences[1][4]) {
        points += 10;
    }
    cout << "YOUR POINTS: " << points << endl;

    cout << "Sequence Three: " << endl;
    cout << "1 | 1 | 2 | 3 | ?? " << endl;
    cout << "Missing Number is: ";
    cin >> answers[2];

    if (answers[2] == sequences[2][4]) {
        points += 10;
    }
    cout << "YOUR POINTS: " << points << endl;
    return 0;
}