#include <iostream>
#include <array>
#include <string.h>
using namespace std;


// .1
/* int main() {
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};

    cout << "Number " << nums[0] << " Award Is: " << awards[0] << endl;
    cout << "Number " << nums[1] << " Award Is: " << awards[1] << endl;
    cout << "Number " << nums[2] << " Award Is: " << awards[2] << endl;
    cout << "Number " << nums[3] << " Award Is: " << awards[3] << endl;
    return 0;
} */

// .2

/* int main() {
    int check = 25;
    int nums[] = {40, 20, 30, 70, 100};

    if (nums[0] > check) {
        cout << nums[0] + nums[3] << endl;
    }
    if (nums[1] > check) {
        cout << nums[1] + nums[3] << endl;
    }
    if (nums[2] > check) {
        cout << nums[2] + nums[3] << endl;
    }

    return 0;
} */

// .3
/* int main() {
    int filling = 10;
    int vals[]{100, 200, 300, 400};

    vals[0] = 10, vals[1] = 10, vals[2] = 10, vals[3] = 10;
    cout << vals[0] << endl;
    cout << vals[1] << endl;
    cout << vals[2] << endl;
    cout << vals[3] << endl;
    cout << endl;
    return 0;
} */


// .4

/* int main() {
    // int vals[]{100, 200, 250, 400, 200};
    // int vals[]{100, 200, 500, 400, 200};
    int vals[]{100, 200, 600, 400, 200};

    if (vals[0] + vals[4] > vals[2])
    {
        cout << "First Number + Last Number Is Larger Than Middle Number" << endl;
        cout << vals[0] << " + " << vals[4] << " = " << vals[0] + vals[4] << endl;
        cout << vals[0] + vals[4] << " > " << vals[2]  << endl;
    } else if (vals[1] + vals[3] > vals[2]) 
    {
        cout << "Second Number + Third Number Is Larger Than Middle Number" << endl;
        cout << vals[1] << " + " << vals[3] << " = " << vals[1] + vals[3] << endl;
        cout << vals[1] + vals[3] << " > " << vals[2]  << endl;
    } else {
        cout << "Middle Number Is The Largest" << endl;
        cout <<  vals[2]  << endl;
    }
    return 0;
} */

// .5

/* int main() {
    // int vals[] = {100, 200, 600, 200, 200};
    int vals[] = {100, 200, 600, 200, 100};

    if (vals[0] == vals[4]) 
    {
        cout << "First Number Is Equal To Last Number" << endl;
        cout << vals[0] << " = " << vals[4] << endl;
        cout << "Array Is Palindrome" << endl;
    } else {
        cout << "First Number Is Not Equal To Last Number" << endl;
        cout << vals[0] << " != " << vals[4] << endl;
        cout << "Array Is Not Palindrome" << endl;
    }
    return 0;
} */

// .6

/* int main() {
    int vals[] = {10, 20, 30};
    
    // Write Your Code Here
    vals[0] = 100;
    vals[1] = 200;
    vals[2] = 300;
    
    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
    return 0;
} */

// .7
/* int main() {
    string names[3][3] = {
        {"Ahmed", "Mahdy", "Majed"},
        {"Sayed", "Sameh", "Mohamed"},
        {"Adel", "Gamal", "Mahmoud"}};
    cout << "First Collection Of Names:\n";
    cout << names[0][0] << "\n"; // Ahmed
    cout << names[1][1] << "\n"; // Mahdy
    cout << names[2][2] << "\n"; // Majed
    
    cout << "Second Collection Of Names:\n";
    cout << names[2][1] << "\n"; // Adel
    cout << names[1][2] << "\n"; // Gamal
    cout << names[0][2] << "\n"; // Mahmoud
    
    cout << "Third Collection Of Names:\n";
    cout << names[0][1] << "\n"; // Sayed
    cout << names[1][0] << "\n"; // Sameh
    cout << names[2][0] << "\n"; // Mohamed
    return 0;
} */

// .8
/* int main()
{
  // Your Code Here
  array<int, 3> nums {100, 200, 300};
  // Do Not Edit
  nums.fill(100);
  cout << nums[0] << "\n"; // 100
  cout << nums[1] << "\n"; // 100
  cout << nums[2] << "\n"; // 100

  return 0;
} */

// .9
/* int main() {
    // int nums[] {10, 20, 30, 40, 20, 50};
    array<int, 6> nums {10, 20, 30, 40, 20, 50};
    // Method one
    cout << "Method One:\n";
    cout << sizeof(nums) / sizeof(nums[0]) << endl;

    // Method two
    cout << "Method Two:\n";
    cout << "Elements count: " << nums.size() << endl;

    return 0;
} */

// .10

/* int main() {
    array<int, 6> nums{10, 20, 30, 40, 50, 60};

    // Method one
    cout << "Method One:\n";
    cout << "First: " << nums[0] << endl;
    cout << "Last: " << nums[5] << endl;

    // Method two
    cout << "Method Two:\n";
    cout << "First: " << nums.front() << endl;
    cout << "Last: " << nums.back() << endl;

    // Method three
    cout << "Method Three:\n";
    cout << "First: " << nums.at(0) << endl;
    cout << "Last: " << nums.at(5) << endl;
    return 0;
} */


// .11
/* 
int main() {
      // Do Not Edit The Next 3 Lines

      array<int, 3> oldNums = {10, 20, 30};
      array<int, 3> newNums;

      // Write Your Code Here
      //   newNums[0] = oldNums[2];
      //   newNums[1] = oldNums[1];
      //   newNums[2] = oldNums[0];
    //   newNums = oldNums;
    //   newNums.at(0) = oldNums.at(2);
    //   newNums.at(1) = oldNums.at(1);
    //   newNums.at(2) = oldNums.at(0);

      // Do Not Edit The Next 3 Lines
      cout << newNums[0] << "\n"; // 30
      cout << newNums[1] << "\n"; // 20
      cout << newNums[2] << "\n"; // 10
    return 0;
} */


// .12

/* int main() {
    int nums[] = {1, 2, 3, 5};
    int vals[] = {10, 20, 40, 30, 10, 60};
    int i1 = nums[3];
    int i2 = nums[0];
    int i3 = nums[1];
    int i4 = nums[2];

    // need to get ouput 150
    // You Can Use Plus Operator Only
    // Your Code Here
    i1 = vals[5];
    i2 = vals[2];
    i3 = vals[3];
    i4 = vals[1];
    cout << i1 + i2 + i3 + i4 << endl; // 150

    return 0;
} */

// .13

int main() {
    string fname = "Nashaat ";
    string mname = "Fathy ";
    string Lname = "`N7X`";
    // Method one
    string fullname = fname + mname + Lname;
    cout << fullname << endl; // Nashaat Fathy `N7X`
    // Method two
    string fullName_append = fname.append(mname).append(Lname);
    cout << fullName_append << endl; // Nashaat Fathy  `N7X`
    // Method three
    // char fullname_strcat = strcat(fname, mname, Lname);
    // cout << fullname_strcat << endl; // Nashaat Fathy `N7x`
    return 0;
}