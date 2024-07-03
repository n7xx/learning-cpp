#include <iostream>
using namespace std;

int main() {
    int num_one, num_two, operation;
    cout << "1. +" << endl;
    cout << "2. *" << endl;
    cout << "3. /" << endl;
    cout << "4. -" << endl;
    cout << "Enter Your First Number: ";
    cin >> num_one;
    cout << "Choose The Operator: ";
    cin >> operation;
    cout << "Enter Your Second Number: ";
    cin >> num_two;
    switch (operation) {
        case 1:
            cout << num_one << " + " << num_two << " = " << num_one + num_two << endl;
            break;
        case 2:
            cout << num_one << " * " << num_two << " = " << num_one * num_two << endl;
            break;
        case 3:
            cout << num_one << " / " << num_two << " = " << num_one / num_two << endl;
            break;
        case 4:
            cout << num_one << " - " << num_two << " = " << num_one - num_two << endl;
            break;
        default:
            cout << "Invalid Operation" << endl;
            break;
    }
    return 0;
}