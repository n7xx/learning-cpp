#include <iostream>
#include <string>
using namespace std;

// .1 
/* int main() {
    int nums[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << size << endl;
    // for loop
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << endl;
    }
    cout << "=================" << endl;
    // while loop
    int i = 0;
    while (i < size) {
        cout << nums[i] << endl;
        i++;
    }
    cout << "=================" << endl;
    // do while loop
    int j = 0;
    do {
        cout << nums[j] << endl;
        j++;
    } while (j < size);

    return 0;
} */

// .2
/* int main() {
    int i = 0;
    int nums[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (;;) // <= Do Not Edit This Line
    {
        cout << nums[i] << "\n"; // From 2 To 10
        i++;
        if (nums[i] == 9) {
            break;
        }

    }
    return 0;
} */


// .3

/* int main() {
    int num_one, num_two;
    cout << "Enter two numbers: " << endl;
    cout << "Number One: ";
    cin >> num_one;
    cout << "Number Two: ";
    cin >> num_two;

    int start = (num_one < num_two) ? num_one : num_two;
    int end = (num_one > num_two)? num_one : num_two;

    for (int i = start + 1; i < end; i++) 
    {
        if(i % 2 != 0) {
            cout << i << endl;
        }
    }
        return 0;
} */

// .4

/* int main() {
    int i = 0;
    // for (; i < 20; i += 2) {
    //     if (i == 10 || i == 12) {
    //         continue;
    //     }
    //     cout << i << endl;
    // }

    while (i < 20)
    {
        if(i == 10 || i == 12) {
            i += 2;
            continue;
        }
        cout << i << endl;
        i += 2;
    }
    
        return 0;
} */

// .5

/* int main() {
    int i = 0;
    for (; i < 30; i += 3) {
        if (i == 10 || i == 12) {
            continue;
        }
        cout << i << endl;
    }

    cout << "======================" << endl;
    int j = 0;
    while (j < 30)
    {
        cout << j << endl;
        j += 3;
    }
    
        return 0;
}  */


// .6

/* int main() {
    int i = 10;
    for (; i <= 100000000;) {
        cout << i << endl;
        i = i * i;
    }
    cout << "======================" << endl;
    int j = 10;
    while (j <= 100000000)
    {
        cout << j << endl;
        j = j * j;
    }
    return 0;
}
 */

// .7
/*  int main() {
    int i = 2;
    for (; i <= 1024;) {
        cout << i << endl;
        i *= 2;
    }
    cout << "======================" << endl;
    int j = 2;
    while (j <= 1024)
    {
        cout << j << endl;
        j *= 2;
    }
    return 0;
} */


// .8
/*  int main() {
    int i = 2;
    for (; i <= 5000;) {
        cout << i << endl;
        i = i + i + 2;
    }
    cout << "======================" << endl;
    int j = 2;
    while (j <= 5000)
    {
        cout << j << endl;
        j = j + j + 2;
    }
    return 0;
}
 */

// .9
/* int main() {
    // Friends Array
     string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
     for (int i = 1; i <= 2;)
     {
         cout << friends[i] << endl;
         i++;
     }
    return 0;
} */

// .10

/* int main() {
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    for (int i = 0; i < 5; i++) {
        if (friends[i][0] == 'A') {
            cout << friends[i] << endl;
        }
    }
    cout << "==================" << endl;
    int j = 0;
    while (j < 5) 
    {
        if (friends[j][0] == 'A') {
            cout << friends[j] << endl;
        }
        j++;
    }
    
    // Output Needed
    // "Ahmed"
    // "Ashraf"
    // "Amany"
    return 0;
}
 */

// .11

/* int main() {
    string friends[]{"nashaat", "fathy", "fakhry"};
    for (int i = 0; i < 3; i++) {
        cout << "=============" << endl;
        cout << "== " << friends[i] << " ==" << endl;
        cout << "============================" << endl;
        cout << "== ";
        for (int j = 0; j < friends[i].length(); j++) {
            cout  << friends[i][j] ;
            if (j < friends[i].length() - 1) {
                cout << ", ";
            }
        }
            cout << " ==" << endl;
        cout << "============================" << endl;
        cout << "\n";
        cout << "\n";
    }
    return 0;
} */



// .12

/* int main() {
    int nums[]{10, 20, 14, 28, 40, 80, 15, 30};
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++) {
        if (nums[i] + nums[i] == nums[i + 1]) {
            cout << nums[i] << endl;
        }
    }
        return 0;
} */

// .13
/* 
int main() {

    for (int i = 30; i > 1; i -= 3) {
        cout << i << endl;
    }
    cout << "============================" << endl;
    cout << "Numbers without even numbers" << endl;
    cout << "============================" << endl;
    for (int i = 30; i > 1; i -= 3) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
        return 0;
} */

// .14
/* 
int main() {
    int num = 2;
    while (num < 520)
    {
        if (num == 2) {
            num = num - 1;
        }
        cout << num << endl;
        num = 2 * num + 2;
    }
    
    return 0;
} */

// .15

/* int main() {
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++) {
    cout << nums[i] << " + " << nums[size - 1 - i] << " = " << nums[i] + nums[size - 1 - i] << endl;

    }
    return 0;
} */

// .16

/* int main() {
    int index = 10;
    int jump = 2;
    
    for (;;)
    {
      // Write Your Code Here
      cout << index << endl;
      index -= jump;
      if (index == jump) {
          break;
      }
    }
    return 0;
} */


// .17

/* int main() {
    for (int i = 0; i < 110; i++)
    {
        if (i < 10 ) {
            cout << "00" << i << endl;
        } else if (i >= 10 && i < 100) {
            cout << "0" << i << endl;
        } else if (i >= 100) {
            cout << i << endl;
        }
    }
    
    return 0;
} */

// .18
/* 
int main() {
    for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
    {
      // Edit What You Need And Add Your Code
      if (i == 0 || i == 1000) {
        continue;
      }
        cout << i << "\n";
    }
    return 0;
} */


// .19
/* int main() {
    for (int i = 100; i < 1200;) {
        cout << i << endl;
        if(i != 100 && i != 1100) {
            cout << i << endl;
        }
        i += 100;
    }
        return 0;
}
 */

// .20

/* int main() {
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    for (int i = 0; i < 6; i++) {
        if (names[i].length() == 5) {
            cout << names[i] << endl;
        }
    }
        return 0;
} */


// ===================================== THE END OF WEEK SEVEN =====================================
