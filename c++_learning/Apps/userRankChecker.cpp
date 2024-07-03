#include <iostream>
using namespace std;

int main() {
    int rank;
    cout << "Enter your rank: ";
    cin >> rank;
    if(rank <= 10) {
        cout << "You are a freshman.";
    } else if (rank <= 20 ) {
        cout << "You are a sophomore.";
    } else if (rank <= 50) {
        cout << "You are a junior.";
    } else if (rank <= 80) {
        cout << "You are a senior.";
    } else {
        cout << "You are a graduate student.";
    }
    return 0;
}