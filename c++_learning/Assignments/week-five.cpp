#include <iostream>
using namespace std;


// .1

/* int main() {
    int age;
    int points;
    float rate;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Points: ";
    cin >> points;
    cout << "Enter Rate: ";
    cin >> rate;
    if (age >= 18 && points >= 500 && rate >= 5) {
        cout << "Yes Age > 18 & Points > 500 & Rate > 5" << endl;
        cout << "Your Are Qualified" << endl;
    } else {
        cout << "No Age < 18 & Points < 500 & Rate < 5" << endl;
        cout << "Your Are Not Qualified" << endl;
    }
    return 0;
} */


// .2

/* int main() {
    int age;
    int points;
    cout << "Enter Your Age: ";
    cin >> age;
    cout << "Enter Your Points: ";
    cin >> points;
    if (age > 18) {
        cout << "Age Is Ok" << endl;
        if (points > 500) {
            cout << "Points Is Ok" << endl;
        } else {
            cout << "Points Is Not Ok" << endl;
        }
    } else {
        cout << "Age Is Not Ok" << endl;
        if (points > 500) {
            cout << "Points Is Ok" << endl;
        } else {
            cout << "Points Is Not Ok" << endl;
        }
    }
    return 0;
} */

// .3

/* int main() {
    int num;
    cout << "Please Enter A Number Between 0 And 150: ";
    cin >> num;
    if (num < 10) {
        cout << "Number Is Less Than 10" << endl;
        cout << "Number is: 00" << num << endl;
    } else if (num > 10) {
        cout << "Number Is Greater Than 10" << endl;
        cout << "Number is: 0" << num << endl;
    } else if (num > 100) {
        cout << "Number Is Greater Than 100" << endl;
        cout << "Number is: " << num << endl;
    } else if (num > 150) {
        cout << "Please Enter Number Between 0 And 150" << endl;
    }
    return 0;
} */
 
// .4
/* int main() {
    int num1 = 42;
    int num2 = 10;
    int num3 = 42;
    int num4 = 95;
    // Do Not Edit Any Condition

    // Condition 1
    if (num1 > num2)
      cout << "Condition 1 Is True\n";
    else
      cout << "Condition 1 Is False\n";
    
    // Condition 2
    if (num1 > num2 && num1 < num4)
      cout << "Condition 2 Is True\n";
    else
      cout << "Condition 2 Is False\n";
    
    // Condition 3
    if (num1 > num2 && num1 == num3)
      cout << "Condition 3 Is True\n";
    else
      cout << "Condition 3 Is False\n";
    
    // Condition 4
    if (num1 + num2 < num4)
      cout << "Condition 4 Is True\n";
    else
      cout << "Condition 4 Is False\n";
    
    // Condition 5
    if (num1 + num3 < num4)
      cout << "Condition 5 Is True\n";
    else
      cout << "Condition 5 Is False\n";
    
    // Condition 6
    if (num1 + num2 + num3 < num4)
      cout << "Condition 6 Is True\n";
    else
      cout << "Condition 6 Is False\n";
    
    // Condition 7
    if (num4 - (num1 + num3) + num2 == 21)
      cout << "Condition 7 Is True\n";
    else
      cout << "Condition 7 Is False\n";
        return 0;
} */


// .5

/* int main() {
    int by = 82; // by => Birth Year
    int s = 500; // s => Salary
    if (by > 80)
    {
      if (s < 600)
        cout << "Ok\n";
      else
        cout << "High\n";
    }
    else
    {
      cout << "Not Ok\n";
    }
    string msg = (by > 80 ? (s < 600 ? "Ok\n" : "High\n") : "Not Ok\n");
    cout << msg << endl;

    return 0;
} */

// .6

/* int main() {
    int age = 40;
    int points = 100;
    
    if (sizeof(age) == 4 && age > 18 && points > 50) {
      cout << "Age Is Ok\n";
      cout << "Points Is Ok\n";
      cout << "Age Data Is 4 Bytes\n";
    
    }
    return 0;
} */


// .7

/* int main() {
    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 5 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;
    if (num1 % 2 == 0 && num1 < 20) {
        result += num1;
    }
    if (num2 % 2 == 0 && num2 < 20) {
        result += num2;
    }
    if (num3 % 2 == 0 && num3 < 20) {
        result += num3;
    }
    if (num4 % 2 == 0 && num4 < 20) {
        result += num4;
    }
    cout << "Numbers => " << num1 << " , " << num2 << " , " << num3 << " , " << num4 << endl;
    cout << "Result Is => " << result << endl;
    return 0;
} */

// .8

/* int main() {
    int year;
    cout << "Please Enter A Year: ";
    cin >> year;
    switch (year)
    {
        case 2004:
        cout << "Its My Birth Day" << endl;
        break;
        case 1995:
        cout << "Windows 95" << endl;
        break;
        case 1999:
        cout << "Windows 98" << endl;
        break;
        case 2000:
        cout << "Windows 2000" << endl;
        break;
        case 2001:
        cout << "Windows XP" << endl;
        break;
        case 2002:
        cout << "Windows 2002" << endl;
        break;
        default:
        cout << "Unknown Year" << endl;
        break;
    }
    return 0;
}
 */

// .9

/* int main() {
      int day;
      cin >> day;
      switch(day) {
        case 1:
        case 2:
        case 3:
          cout << "Shop Is Open";
          break;
        case 4:
        case 5:
          cout << "Shop Is Closed";
          break;
        default:
          cout << "Day Is Not Valid";
      }

    return 0;
} */


// .10

/* int main() {
    int num;
    cout << "Please Enter A Number: ";
    cin >> num;
    switch (num) {
        case 10:
        cout << "case One" << endl;
        break;
        case 19:
        case 20:
        case 21:
        cout << "case Two" << endl;
        break;
        case 29:
        case 30:
        cout << "case Three" << endl;
        break;
    }

    return 0;
} */