#include <iostream>
using namespace std;

int main(){
    
    int number;
    cout << "Write Number Of KiloBytes Here: ";
    cin >> number;
    int bytes = number * 1024;
    int bits = bytes * 8;
    double mega = number / 1024;
    double giga = mega / 1024;
    double tera = giga / 1024;
    cout << "Kilobytes to Kilobytes: " << number << "\n";
    cout << "Kilobytes to Bytes: " << bytes << "\n";
    cout << "Kilobytes to Bits: " << bits << "\n";
    cout << "Kilobytes to MegeBytes: " << mega << "\n";
    cout << "Kilobytes to GigaBytes: " << giga << "\n";
    cout << "Kilobytes to TeraBytes: " << tera << "\n";
    return 0;
}