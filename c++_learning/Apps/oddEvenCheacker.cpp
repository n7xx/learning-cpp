#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "WRITE NUMBER HERE: ";
    cin >> num;
    if(num % 2 == 0) {
        cout << "The Number " << num << " Is Even" << endl;
    } else {
        cout << "The Number " << num << " Is Odd" << endl;
    }
    string msg = (num % 2 == 0) ? "EVEN NUMBER" : "ODD NUMBER";
    cout << msg << endl;
    cout << (num % 2 == 0 ? "even number" : "odd number") << endl;

}