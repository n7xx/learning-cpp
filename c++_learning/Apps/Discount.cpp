#include <iostream>
using namespace std;

int main() {
    int price;
    int discount;
    int years;
    int total;
    cout << "Enter the price: ";
    cin >> price;
    cout << "Enter the number of years: ";
    cin >> years;

    switch (years) {
        case 1:
        discount = 5;
        break;
        case 2:
        discount = 10;
        break;
        case 3:
        discount = 15;
        break;
        case 4:
        discount = 20;
        break;
        case 5:
        discount = 25;
        break;
        case 6:
        discount = 30;
        break;
        case 7:
        discount = 35;
        break;
        case 8:
        discount = 40;
        break;
        case 9:
        discount = 45;
        break;
        case 10:
        discount = 50;
        break;
        default:
        cout << "No discount";
        break;
    }
    cout << "Your discount is: " << discount << "%" << endl;
    total = price - (price * discount / 100);
    cout << "The total price is: " << total << endl;
    return 0;
}