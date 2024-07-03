#include <iostream>
using namespace std;

int main() {
    int vals[5];
    int inp;
    cout << "Type five Number to reverse" << endl;
    for (int i = 4; i > -1; i--)
    {
        cout << "Enter the " << i + 1 << " Number: ";
        cin >> inp;
        vals[i] = inp;
    }

    cout << "====================" << endl;
    cout << "==Reversed Numbers==" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << vals[i] << endl;
    }
    
    return 0;
}