#include <iostream>
using namespace std;


int main() {
    int num_one, num_two, operation;
    cout << "1. +" << endl;
    cout << "2. *" << endl;
    cout << "3. /" << endl;
    cout << "4. -" << endl;
    cout << "Enter first number: ";
    cin >> num_one;
    cout << "Choose Your Operator: ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num_two;
    if(operation == 1) {
        cout << num_one << " + " << num_two << " = " << num_one + num_two << endl;
    } else if (operation == 2) {
        cout << num_one << " * " << num_two << " = " << num_one * num_two << endl;
    } else if (operation == 3) {
        cout << num_one << " / " << num_two << " = " << num_one / num_two << endl;
    } else if (operation == 4 ) {
        cout << num_one << " - " << num_two << " = " << num_one - num_two << endl;
    } else {
        cout << "Invalid operation" << endl;
    }
    
    return 0;
}