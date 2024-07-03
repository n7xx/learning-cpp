#include <iostream>
using namespace std;



// .1
// Example
/* 
false // bool => Boolean

'a' // char => string
'9' // char => string
9 // int => number
true // bool
100 // int => number
-10 // int => number
0 // int => number
false // bool 
10.9  // float or duoble

*/


// .2
/* int main() {
    double salary = 5000.98;
    cout << sizeof(salary) << endl;
    cout << sizeof(salary) * 8 << endl;
    return 0;
} */

// .3

/* int main() {
    cout << "Maximum Integer Number Is => " << INT_MAX << endl;
    cout << "Minimum Integer Number Is => " << INT_MIN << endl;
    cout << "Maximum short Integer Number Is => " << SHRT_MAX << endl;    
    cout << "Minimum short Integer Number Is => " << SHRT_MIN << endl;    
    return 0;
} */


// .4
/* int main() {
    // Edit Line To Make 8 Become 4
    cout << sizeof(10.5 + 5 + 20.5 + 10) << "\n"; // 8
    cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 4
    return 0;
} */

// .5

/* int main() {
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';

    cout << "ASCII value of ~ Is " << int(a) << endl;
    cout << "ASCII value of & Is " << int(b) << endl;
    cout << "ASCII value of % Is " << int(c) << endl;
    cout << "ASCII value of A Is " << int(d) << endl;
    return 0;
} */

// .6
/*     int main() {
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;
    cout << "Character Of This ASCII Value 69 " << char(a) << endl;
    cout << "Character Of This ASCII Value 108 " << char(b) << endl;
    cout << "Character Of This ASCII Value 122 " << char(c) << endl;
    cout << "Character Of This ASCII Value 101 " << char(d) << endl;
    cout << "Character Of This ASCII Value 114 " << char(e) << endl;
    cout << "Character Of This ASCII Value 111 " << char(f) << endl;

    cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) << endl;
    return 0;
} */

// .7

/* int main() {
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;


    cout << char(d - a) << char(d + c) << char(b + d) << endl;
    return 0;
}
 */


// .8

/* int main() {
    // int a = 100;
    // int b = 15001500;
    // double c = 100.54565746; 
    short a = 100;
    long long b = 15001500;
    long double c = 100.54565746;

    cout << sizeof(a) << " Bytes" << endl;
    cout << sizeof(b) << " Bytes" << endl;
    cout << sizeof(c) <<" Bytes" << endl;
    return 0;
} */

// .9
/* int main() {
    unsigned int a = 100;
    int b = -100;
    short c = 100;
    float d = 500.55;


    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
} */

// .10
/* int main() {
    // Add Type Alias Here
    // using lli = long long int;
    typedef long long int lli;
    // Do Not Edit
    lli num = 150050005; // This Is Long Long Int
    cout << num << "\n"; // 150050005
    return 0;
} */

// .11
/* int main() {
    // Do Not Edit Here
    short int a = 100;
    float b = 98.5f;
    double c = 1.7;

    // Edit This Line And Use Type Casting To Get The Output
    cout << int(a + b + c) << "\n"; // 200
    return 0;
} */


// .12

int main() {
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;
    
    // Change ??? To Something Else To Get The Output
    // cout << ??? - ??? << "\n"; // 12
    // cout << ??? + ??? << "\n"; // 20
    // cout << ??? * ??? << "\n"; // 32
    // cout << ??? * ??? << "\n"; // 5000
    // cout << char(??? * ???) << "\n"; // P
    cout << sizeof(c) - sizeof(b) << "\n"; // 12
    cout << sizeof(c) + sizeof(b) << "\n"; // 20
    cout << sizeof(c) * sizeof(a) << "\n"; // 32
    cout << a * int(c) << "\n"; // 5000
    cout << char(sizeof(b) * ( sizeof(c) + sizeof(b) )) << "\n"; // P

    return 0;
}



// THE END
