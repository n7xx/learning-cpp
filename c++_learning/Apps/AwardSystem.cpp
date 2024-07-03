#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch(num) {
        case 1:
        cout << "Congratz for the car !";
        break;
        case 2:
        cout << "Congratz for the Iphone !";
        break;
        case 3:
        cout << "Congratz for the TV !";
        break;
        case 4:
        cout << "Congratz for the Ipad !";
        break;
        case 5:
        cout << "Congratz for the Keycahin !";
        break;
        case 6:
        cout << "Congratz for the Journey to Japan !";
        break;
        case 7:
        cout << "Congratz for the Journey to Egypt !";
        break;
        case 8:
        cout << "Congratz for the Pet 'Cat' !";
        break;
        case 9:
        cout << "Congratz for the Refrigerator !";
        break;
        case 10:
        cout << "Congratz for the Laptop !";
        break;
        default:
            cout << "Not a number between 1 and 10.\n sorry, No Award for you; Try again in next Competition";
            break;
    }
    return 0;
}