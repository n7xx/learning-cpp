
// Escape Sequenes Characters
/* 
---- Special non printing charcters
---- control printing behaviour
---- start with backslash "\"
---- can be inserted in any position.

1. \n
2. \\
3. \"
4. \'
5. \t
6. \a
7. \b
8. \r
*/
/* int main(){
    cout << "line 1\n";
    cout << "line2\\\n";
    cout << "line3\\\n";
    cout << "is\'nt\n";
    cout << "line\t5\n";
    cout << "line\b7\n";
    cout << "line 8 \a \n"; // 
    return 0;
} */

/*
 Data types:

what is data types ?
  - data examples from real life.
  --Integer >> 500
  --String >> "any thing here"
  --Float >> 2.1 // number with floating point number
  --Array >> [elemntone , elemetntwo]
  --boolean >> true or false values

Why we choose data?
 -size
 -Operation 

What the operand ?
- The part of an instruction represnting the data manipulated by the operator.
*/

/* int main() {
    int num = 8;
    string name = "nahsaat";
    bool status = true;
    cout << sizeof(num) << "\n";
    cout << sizeof(name) << "\n";
    cout << sizeof(status) << "\n";

    return 0;
} */


/*
  Data Types

  - Ram [R]andom [A]ccess [M]emory
  --- Computer Memory Has Locations

  - Data Sizes
  --- Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  --- Byte => A Group of 8 => Store Single Character
  --- Kilo Byte => 1024 Byte
  --- Mega Byte => 1024 Kilobytes
  --- Giga Byte => 1024 Megabytes
  --- Tera Byte => 1024 Gigabytes

  - Data Types With Size
  --- int => 2 Or 4 Bytes => Will Cover Later Why
  --- float => 4 Bytes [18.5656565656]
  --- double => 8 Bytes [18.5656565656]
  ------ Number . Fractional Component
  --- char => 1 Byte => "A" "x" "9"
  --- boolean => 1 Byte => true, false
  - Double vs Float

  - The Story Behind Creating A Variable
  --- Declare A Variable
  --- Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  --- Restrict Type Of Data To The Type We Choosed

  - Declare Variable Without Type
  - See Memory Address &

  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/
/* 
int main(){
    
    int number;
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
 */

/*
  Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
*/

/* 

int main(){
    int num = 20.5;
    cout << sizeof(num) << endl;
    cout << num << endl;
    float fl = 20.8f + 9.2f;
    cout << sizeof(fl) << endl;
    cout << fl << endl;
    auto mix = 20.0; // double
    auto mix_2 = 20.0f; // float

    return 0;
} */
/* 
int main() {
    char a = 'a';
    cout << sizeof(a) << endl;

    auto b = 'b';
    cout << sizeof(b) << endl; // char size 1 because single quote

    auto c = "c";
    cout << sizeof(c) << endl; // stirng size 8 because double quotes

    char d = 'd';
    cout << int(d) << endl; // ASCII value !! 

    cout << char(80) << endl;
    return 0;
}

// what is the ASCII value ?
// ASCII value : American standard code for information Intercharcters..
 */

/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;

*/


/* int main() {
    int age = 500;
    cout << sizeof(age) << endl; // -> 4 byets
    
    short int new_age = 300;
    cout << sizeof(new_age) << endl; // -> 2 byets

    short last_age = 300;
    cout << sizeof(new_age) << endl; // -> 2 byets

    cout << sizeof(short) << endl; // -> 2 bytes
    cout << sizeof(long) << endl; // -> 8 bytes
    cout << sizeof(long long) << endl; // -> 8 bytes

    int num_one = 100;
    cout << num_one << endl;

    signed int num_two = 100;
    cout << num_two << endl;

    unsigned int num_three = 100;
    cout << num_three << endl;

    unsigned int num_four = -10; // Probelm : becuase in "unsigned" function we cant put negative number
    cout << num_four << endl;

    long long int my_number = 6042586493672;
    cout << my_number << endl;

    // type Alias
  
    //-- using identifire = type
    //-- typedef unsigned long UL 
     

    // using identifire
    using big_INT = long long int;

    big_INT My_number = 6435748456;
    cout << My_number << endl;

    // typedef
    typedef long long int bignum;
    bignum big_num = 456789457623;
    cout << big_num << endl;
    return 0;
}
 */

/*
  Data Types
  - Type Conversion
  --- Convert Data of One Type To Another

  - Implicit Conversion
  --- Conversion Is Done Automatically By The Compiler

  - Explicit Conversion AKA Type Casting
  --- Conversion Is Done By The Programmer

  - Data Loss
  --- When Larger Type Is Converted To Smaller Type
*/


// -  what is the operand
// -- In the context of programming, operands are the entities on which operators act to perform computations. They are the values or variables involved in an operation. 

// -  what is the operator
// -- In programming, operators are symbols or keywords that tell the compiler or interpreter to perform specific mathematical, relational, or logical operations. 
//    They act on one or more operands to produce a result.
// - Operator Precedence

/* 
Control flow
-- If condition introductio
-Syntax
if(condition is true) {
    // do something
    }
 */

/* int main() {
  int age;
  cout << "How old are you: ";
  cin >> age;
  if (age < 18)
  {
    cout << "You are not allowed to vote" << endl;
  } else {
    cout << "You are allowed to vote" << endl;
  }
    return 0;
} */

/* 
int main() {
  int day;
  cout << "when we open ? ";
  cin >> day;
  switch (day) {
    case 1:
    cout << "open from 08:00 To 14:00" << endl;
    break;
    case 2:
    cout << "open from 08:00 To 14:00" << endl;
    break;
    case 3:
    cout << "open from 08:00 To 14:00" << endl;
    break;
    case 4:
    cout << "open from 08:00 To 14:00" << endl;
    break;
    case 5:
    cout << "open from 08:00 To 14:00" << endl;
    break;
    case 6:
    cout << "open from 08:00 To 12:00" << endl;
    break;
    case 7:
    cout << "open from 08:00 To 12:00" << endl;
    break;
    default:
    cout << "Invalid Day" << endl;
    break;
  }
} */

/* 
int main() {
  int nums[]{100, 200, 300, 400, 500, 600};
  int size = sizeof(nums) / sizeof(nums[0]);
  for (int i = 0; i < size; i += 2)
  {
    cout << nums[i] << endl;
  }

  cout << "===================" << endl;

  for (int i = (size - 1); i > 1; i-- ) {
    cout << nums[i] << endl;
  }

  cout << "===================" << endl;

  int i = (size - 1);
  for (;;)
  {
    cout << nums[i] << endl;
    i--;
    if (i == 1)
    {
      break;
    }
  }

    return 0;

} */

/* 
int main() {
    int index = 4;
    while (index < 6) {
      cout << index << endl;
      index++;
    }

    // Do while
    int index_2 = 4;
    do
    {
      cout << index_2 << endl;
      index_2++;
    } while (index_2 < 6);
    
    return 0;
} */
/* 
int main() {
  int nums[]{10, 20, 30, 40, 50};
  int size = sizeof(nums) / sizeof(nums[0]);
  for (int i = 0; i < size; i++) {
    if ( nums[i] == 20 ) {
      continue;
    }
    cout << nums[i] << endl;
    cout << "After" << endl;
  }
    return 0;
} */

// void calc(int numOne, int numTwo, int operation) {
//   cout << "Simple calc, Enter Your Numbers and Choose an Operation ." << endl;
//     cout << "1. +" << endl;
//     cout << "2. *" << endl;
//     cout << "3. /" << endl;
//     cout << "4. -" << endl;
//     cout << "Enter First Number: ";
//     cin >> numOne;
//     cout << "Enter Second Number: ";
//     cin >> numTwo;
//     cout << "Enter Operation: ";
//     cin >> operation;

//     if (operation == 1) {
//       cout << numOne << " + " << numTwo << " = " << numOne + numTwo << endl;
//     }
//     else if (operation == 2) {
//       cout << numOne << " * " << numTwo << " = " << numOne * numTwo << endl;
//     }
//     else if (operation == 3) {
//       cout << numOne << " / " << numTwo << " = " << numOne / numTwo << endl;
//     }
//     else if (operation == 4) {
//       cout << numOne << " - " << numTwo << " = " << numOne - numTwo << endl;
//     }
// }

// int main() {
//   calc(0,0,1);
//   return 0;
// }



/* 
using namespace std;
int main() {
  string nameOne = "nasHaAt"; // NAShAat
  int nameOneSize = size(nameOne);
  for (int i = 0; i < nameOneSize; i++)
  {
    if (islower(nameOne[i])) {
      cout << char(toupper(nameOne[i])); 
    } else {
      cout << char(tolower(nameOne[i]));
    }
  }
      cout << endl;

  string nameTwo = "Na sh aa t";
  int nameTwoSize = size(nameTwo);

  for (int i = 0; i < nameTwoSize; i++)
  {
    // if (nameTwo[i] == ' ') {
    //   continue;
    // };
    if(isspace(nameTwo[i])) { 
      continue;
    }
    cout << nameTwo[i] << endl;
  }
  cout << min(10,20) << endl;

  return 0;
}  */

/*
  Vector
  - Iterator

  --- Containers
  ------ Array
  ------ Vector
  ------ List

  --- What Is Iterators
  ------ Iterators Used To Point To Memory Address Of The Container

  --- Why We Use Iterators
  [1] Simplify The Code => No Need To See The Full Iteration On Containers
  [2] Support For Many Algorithms Like Sorting And Finding
  [3] Allow The Dealing With One Element Without The Need To Load The Full List
  [4] Work The Same Way With All Containers
  [5] It Reduce The Complexity And Execution Time Of The Application

  --- Syntax
  ------ Container<Type>::iterator IteratorName;

  --- Initialize
  ------ With Vector Syntax
  ------ With Auto Keyword

  --- Print
  ------ [*] Dereference => Dont Print The Iterator, Print What Its Point To

  --- Notes
  ------ This Is Not Pointer, We Will Talk About Pointer Later

  Search For
  - Iterators Type
  - C++ Containers
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums = { 10, 20, 30, 40 };
  vector<int>::iterator it = nums.begin();
  auto ite = nums.begin() + 1;

  cout << "First Element Is: " << *it << "\n";
  cout << "Second Element Is: " << *ite << "\n";
  cout << "First Element Is: " << *nums.begin() << "\n";

  nums.erase(nums.begin(), nums.begin() + 2);

  cout << "First Element After Delete Is: " << *nums.begin() << "\n";

  return 0;
}


/*
  Vector
  - Iterator
  --- Traversing
  ------ begin()
  ------ end()
  ------ advance()
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums = { 10, 20, 30, 40 };
  vector<int>::iterator first = nums.begin();
  vector<int>::iterator last = nums.end() - 1;

  cout << "First Element Is: " << *first << "\n"; // 10
  cout << "Second Element Is: " << first[1] << "\n"; // 20
  cout << "Third Element Is: " << first[2] << "\n"; // 30

  cout << "Last Element Is: " << *last << "\n"; // 40
  cout << "Before Last Element Is: " << *(last - 1) << "\n"; // 30

  advance(first, 3);

  cout << "First Element Is: " << *first << "\n"; // 40

  advance(first, -2);

  cout << "First Element Is: " << *first << "\n"; // 20
 
  return 0;
}


// vector
