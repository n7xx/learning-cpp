#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && a > c) {
        cout << a << " The Greatest Number" << endl;
    } else if (b > a && b > c) {
        cout << b << " The Greatest Number" << endl;
    } else if (c > a && c > b) {
        cout << c << " The Greatest Number" << endl;
    }
    return 0;
}