#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <string>
using namespace std;

// .1

/* void calcspecial(int first, int second) {
    if (first == second) {
        cout << "First = Second -> " << first << " + " << second << " = " << first + second << endl;
    } else if (first > second) {
        cout << "First > Second -> " << first << " - " << second << " = " << first - second << endl;
    } else if (first < second) {
        cout << "First < Second -> " << second << " - " << first << " = " << second - first << endl;
    }
}
int main() {
    calcspecial(40, 40);
    calcspecial(200, 50);
    calcspecial(100, 300);
    return 0;
} */

// .2

/* void MoneyNeededPerday(float money, int days) {
    int weeks = trunc(days / 7);
    int totalHolis = weeks * 2;
     cout << "You Have " << weeks << " And You Have " << totalHolis << endl;
     cout << "You need " << money / (days - totalHolis) << " Every day" << endl;

}

int main()
{
  /*
    Hints
    21 Days Has 3 "Weeks"
    Every "Week" You Have 2 Holidays.
    Total = 3 * 2 = 6 Holidays From 21 Days
  
  MoneyNeededPerday(2015, 21);         // 134.333
  MoneyNeededPerday(4500, 40); // 150
  return 0;
} */

// .3
/* 
int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);

// Do Not Edit Code Below This Line
int main()
{
  cout << plusnums(50, 60) << "\n"; // 110
  cout << minusnums(150, 50) << "\n"; // 100
  cout << divnums(100, 5) << "\n"; // 20
  return 0;
}

int plusnums(int numone, int numtwo)
{
  return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
  return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
  return numone / numtwo;
} */

// .4

// Your Function Here
/* int calculation(int numone = 100, int numtwo = 100, int numthree = 100) {
    return 300;
}
int main()
{
    cout << calculation(100,50,150) << endl;
    cout << calculation(100,50) << endl;
    cout << calculation(100) << endl;
  return 0;
} */

// .5

/* int thepower(int numone, int numtwo) {
    return pow(numone, numtwo);
}

int main() {
    cout << thepower(2, 5) << endl;
    return 0;
} */

// .6
/* string swapping(string msg) {
    int count = size(msg);
    for (int i = 0; i < count; i++) {
    if(msg[i] == 'h' || msg[i] == 'H') {
        continue;
    }
    if (islower(msg[i])) {
      msg[i] = toupper(msg[i]); 
    } else {
      msg[i] = tolower(msg[i]);
    }
    }
    return msg;
}
int main()
{
  cout << swapping("hero Of THe PROgramming") << endl; // hERO oF tHE proGRAMMING
  return 0;
} */

// .7

/* int beforeResult(int mainNum, int count) {
  int sum = 0; // Initialize sum to 0.
  for (int i = 0; i <= count; i++) {
    sum += mainNum - i; // Add the numbers from mainNum to mainNum - count
  }
  return sum;
  }

int main() {
  cout << beforeResult(100, 95) << endl;
  return 0;
} */

// .8

/* int plusandmultiply(int numbers[], int numsize) {
  int evenNumbers = 0;
  int oddNumbers = 1;
  for (int i = 0; i < numsize; i++) {
    if (numbers[i] % 2 == 0) {
      evenNumbers += numbers[i];

    } else {
      oddNumbers *= numbers[i];
    }
  }
  cout << endl;

  int total = evenNumbers + oddNumbers;
  cout << "Odd Numbers  -> " << oddNumbers << endl;
  cout << "Even Numbers -> " << evenNumbers << endl;
  cout << "Total        -> " << total << endl;
  return total;
  
}

int main()
{
  int nums[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(nums);
  cout << plusandmultiply(nums, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
} */

// .9

/* // Write Your Function Here
int sumall(int numbers[], int count, int noneed){
  int sum = 0;
  for (int i = 0; i < count; i++) {
    if (numbers[i] == noneed) {
      continue;
    }
    sum += numbers[i];
  }
  return sum;
}

int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
} */

// .10


/* // Function to find the smallest positive number in the array
int minpositive(int numbers[], int numsize) {
    // Start with a very large number for comparison
    int minPositive = -1; // Initialize to -1 to indicate no positive number found initially
    
    for (int i = 0; i < numsize; ++i) {
        // Check if the current number is positive
        if (numbers[i] > 0) {
            // If minPositive is -1 (no positive number found yet) or current number is smaller
            if (minPositive == -1 || numbers[i] < minPositive) {
                minPositive = numbers[i]; // Update minPositive
            }
        }
    }

    return minPositive; // Return the smallest positive number found
}

int main() {
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0};
    int numssize = size(numbers); // Get the size of the array
    cout << minpositive(numbers, numssize) << "\n"; // Output the smallest positive number
    // Expected output: 5
    return 0;
}
 */

// .11
/* 
int firstnegative(int numbers[], int numsize) {
    // Start with a very large number for comparison
    int minnegative = 0; // Initialize to 0 to indicate no positive number found initially
    
    for (int i = 0; i < numsize; ++i) {
        // Check if the current number is negative
        if (numbers[i] < 0) {
            // If minnegative is 0 (no positive number found yet) or current number is smaller
            if (numbers[i] < minnegative) {
                minnegative = numbers[i]; // Update minnegative
            }
        }
    }

    return minnegative; // Return the smallest negative number found
}

int main() {
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
    int numssize = size(numbers); // Get the size of the array
    cout << firstnegative(numbers, numssize) << "\n"; // Output the smallest positive number
    // Expected output: 5
    return 0;
}
 */
 

//  .12

/* string createurl(string wordone, string wordtwo, string wordthree, bool threeWcase = true){
  string url;
  if (threeWcase == true) {
    url = wordone + "://www." + wordtwo + "." + wordthree;
  } else {
    url = wordone + "://" + wordtwo + "." + wordthree;
  }
  return url;
}
int main()
{
  cout << createurl("https", "elzero", "org") << "\n"; // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n"; // http://www.learn.net
  return 0;
} */

// .13


/* 
string greeting(string name, string gender = "") {
  string greeting;
  if(gender == "Male") {
    greeting = "Hello Mr " + name;
  } else if(gender == "Female") {
    greeting = "Hello Miss " + name;
  } else {
    greeting = "Hello " + name;
  }
  return greeting;
}
//  Overloaded function for greeting without gender

int main()
{
  cout << greeting("Osama", "Male") << "\n"; // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n"; // Hello Sameh
  return 0;
}
 */

// .14

/* int calculate(int numone, int numtwo, string operation = "+") {
  int result;
  if(operation == "+" || operation == "add" || operation == "a" || operation == "A") {
    result = numone + numtwo;
  } else if (operation == "-" || operation == "subtract" || operation == "s" || operation == "S") {
    result = numone - numtwo;
  } else if (operation == "*" || operation == "multiply" || operation == "m" || operation == "M") {
    result = numone * numtwo;
  } else {
    result = 0;
  }
  return result;
}

int main()
{
  cout << calculate(10, 20) << "\n"; // 30
  cout << calculate(10, 20, "a") << "\n"; // 30
  cout << calculate(10, 20, "s") << "\n"; // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n"; // 200
  cout << calculate(10, 20, "Invalid") << "\n"; // 0
  return 0;
} */

// .15

/* double avg(int money[], double days) {
  double sum = 0;
  for (int i = 0; i < days; i++)
  {
    sum += money[i];
  }
  return sum / days;

}


int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
} */

// .16

/* int books(int smallBooks, int medbooks, int bigbooks, int shelves) {
  int total = 0;
  total += smallBooks * 2;
  total += medbooks * 4;
  total += bigbooks * 6;
  int spaces = shelves * 20;
  int voidSpaces = spaces - total;
  if (total > spaces) {
    return 0;
  }
  return voidSpaces;
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
} */


// .17

/* // Write Your Function Here
int pricing(int phonesCount, int usedPhones, int NewPrice, double tax) {
  int total = 0;
  int usedPrice = NewPrice - 200;
  int newPhones = phonesCount - usedPhones;
  total += newPhones * NewPrice;
  total += usedPhones * usedPrice;
  tax = (tax / 100) * total;
  total -= tax;
  return total;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
} */

// =================================================================================== //
// =============================  THE END OF WEEK EIGHT ==============================  //
// =================================================================================== //

