#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <string>
#include <vector>
#include <array>
using namespace std;


// .1
// Is about Multiplying a given number by eight if is an even number and by nine if otherwise.
int simpleMultiplying(int a ) {
    if (a % 2 == 0) {
        return a * 8;
    } else {
        return a * 9;
    }
    return 0;
}
int main() {
    cout << simpleMultiplying(2) << endl;
    cout << simpleMultiplying(3) << endl;
    cout << simpleMultiplying(4) << endl;
    cout << simpleMultiplying(5) << endl;
    cout << simpleMultiplying(6) << endl;
    return 0;
} 

// .2
// The first centery spans from the Year one up to and including the year 100, the second centery from the year 101 up to and including the year 200 etc.

int centeryYear(int year) {
    // return ceil(year / 100);
    if (year % 100 == 0) {
        return year / 100;
    } else {
        return year / 100 + 1;
    }
    return year;
}

int main() {
    cout << centeryYear(2000) << endl;
    cout << centeryYear(2001) << endl;
    cout << centeryYear(1900) << endl;
    cout << centeryYear(1999) << endl;
    cout << centeryYear(2002) << endl;
    cout << centeryYear(1705) << endl;
    cout << centeryYear(1990) << endl;
    cout << centeryYear(1601) << endl;
    return 0;
} 

// .3
// create funciton that checks if a number n is divisible by two number x and y. all inputs are positive non zero numbers.

bool checksNumbers(int n, int x, int y) {
    if (n % x == 0 && n % y == 0) {
        cout << "True Because " <<  n << " is divisible by " << x <<  " and " << y << "." << endl;
        return true;
    } else {
        cout << "False Because " <<  n << " is not divisible by " << x <<  " and " << y << "." << endl;
        return false;
    }
}

int main() {
    checksNumbers(3, 1, 3);
    checksNumbers(12, 2, 6);
    checksNumbers(100, 5, 3);
    checksNumbers(12, 7, 5);
    return 0;
} 

// .4
// even or odd !

 string checkNums(int n) {
    return n % 2 == 0 ? "Even" : "Odd"; // ternary operator
}

int main() {
    cout << checkNums(2) << endl;
    cout << checkNums(3) << endl;
    cout << checkNums(4) << endl;
    cout << checkNums(5) << endl;
    cout << checkNums(6) << endl;
    return 0;
} 

// .5
// reversed string
string reversedString(string word) {
    string reversed = "";
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }
    return reversed;
}

int main() {
    cout << reversedString("hello") << endl;
    cout << reversedString("world") << endl;
    cout << reversedString("edabit") << endl;
    cout << reversedString("abc") << endl;
    cout << reversedString("12345") << endl;
    return 0;
} 

// .6
// implement a function which convert the given boolean balue into string representation.
string booleanToString(bool val) {
    return val ? "true" : "false";
}

int main() {
    cout << booleanToString(true) << endl;
    cout << booleanToString(false) << endl;
    cout << booleanToString(1) << endl;
    cout << booleanToString(0) << endl;
    cout << booleanToString(-1) << endl;
    return 0;
}
// .7
// there is a "3 for 2 " (or "2+1" if you like) offer mangoes. for a given quantity and price (per mango), claculate the total cost of the mangoes.

double costMangoes(int quantity, int price) {
    int free = quantity / 3;
    quantity = quantity - free;
    return quantity * price;
}

int main() {
    cout << costMangoes(2, 3) << endl;
    cout << costMangoes(3, 3) << endl;
    cout << costMangoes(5, 3) << endl;
    cout << costMangoes(9, 5) << endl;
    cout << costMangoes(2, 8) << endl;
    return 0;
}

// .8
// quarter of the year;
int quarter_of(int month) {
    if (month < 4) {
        return 1;
    } else if(month < 7) {
        return 2;
    } else if (month < 10) {
        return 3;
    } else {
        return 4;
    }
}

int main() {
    cout << quarter_of(1) << endl;
    cout << quarter_of(6) << endl;
    cout << quarter_of(7) << endl;
    cout << quarter_of(8) << endl;
    cout << quarter_of(10) << endl;
    return 0;
}

// .9
// Given a set of Numbers, return the additive inverse of each Each positive becomes negative , and the negative become positive.

vector<int> invert(vector<int> values) {
    for (int i = 0; i < values.size(); i++) {
        values[i] = values[i] * -1;
    }
    return values;
}

int main() {
    // Your code here
    vector<int> values = {1, 2, 3, 4, -5};
    vector<int> result = invert(values);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
} 
// .10
// Write a function remove exlamation mark which remove all exclamation mark from given.string removeExclamationMark(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '!' ) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    cout << removeExclamationMark("Hello World!") << endl;
    cout << removeExclamationMark("Hello World!!!") << endl;
    cout << removeExclamationMark("!Hi! Hi!") << endl;
    cout << removeExclamationMark("!Hi! Hi!!") << endl;
    cout << removeExclamationMark("Hi!") << endl;
    return 0;
} 

// .11
// max and min values

vector<int> minMax(vector<int> lst) {
    int min = lst[0];
    int max = lst[0];
    for (int i = 0; i < lst.size(); i++){
        if (lst.at(i) < min)
        {
            min = lst.at(i);
        }
        if (lst.at(i) > max) {
            max = lst.at(i);
        }
    }
    vector<int> result = {min, max};
    return result;
}

int main() {
    vector<int> lst = {0, 2, 3, 4, 5};
    vector<int> result = minMax(lst);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
} 

// .12
// HE DRINKS 0.5 litres of water per hour of cycling.
// you get given the time in hours and you need return the numbers of litres he will drinkm, rounded to the smallest value.

int litres(double time) {
    return round(time * 0.5);
}
int main() {
    cout << litres(2) << endl;
    cout << litres(3) << endl;
    cout << litres(6.7) << endl;
    cout << litres(11.8) << endl;
    cout << litres(11.8) << endl;
    return 0;
}  

// .13
// Given a Non-empty array of integers, return the result of multiplying the values together in order.
int grow(vector<int> nums) {
    int result = 1;
    for (int i: nums) {
        result *= i;
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    cout << grow(nums) << endl;
    return 0;
}

// .14
// convert from string to numbers

 int string_to_int(const string& s) {
    return stoi(s);
}
int main() {
    cout << string_to_int("1234") << endl;
    cout << string_to_int("605") << endl;
    cout << string_to_int("1405") << endl;
    cout << string_to_int("1234") << endl;
    cout << string_to_int("605") << endl;
    cout << string_to_int("1405") << endl;
    return 0;
} 

// .15
// remove first and last chracter
 string sliceString (string str) {
    string result_of = "";
    for (int i = 1; i < str.length() - 1; i++) {
        result_of += str[i];
    }
    return result_of;
}

int main() {
    cout << sliceString("hello") << endl;
    cout << sliceString("edabit") << endl;
    cout << sliceString("codewars") << endl;
    return 0;
} 

// .16
// Repeat this string
 string repeat_str(string str, int repeat) {
    string result = "";
    for (int i = 0; i < repeat; i++) {
        result += str;
    }
    return result;
}

int main() {
    cout << repeat_str("edabit", 3) << endl;
    cout << repeat_str("hello", 2) << endl;
    cout << repeat_str("abc", 1) << endl;
    cout << repeat_str("abc", 50) << endl;
    return 0;
}

// .17
// Remove the spaces from string 
string remove_spaces(string str) {
    string result = "";
    for (char i : str) {
        if (i != ' ') {
            result += i;
        }
    }
    return result;
}

int main() {
    cout << remove_spaces("h ello- wo rld") << endl;
    cout << remove_spaces("e  da bi t") << endl;
    cout << remove_spaces("c ode w ars") << endl;
    return 0;
}

// .18

int strCount(const string& word, char letter) {
    int result = 0;
    for (char c : word) {
        if (tolower(c) == tolower(letter)) {
            result++;
        }
    }
    return result;
}

int main() {
    cout << strCount("Hellooo World", 'l') << endl;
    cout << strCount("Codewars", 'o') << endl;
    cout << strCount("Pppppppython", 'p') << endl;
    cout << strCount("JavaaaScript", 'S') << endl;
    cout << strCount("Javaa", 'a') << endl;
    return 0;
} 

// .19
string to_alteranating_case(const string& str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            result += tolower(str[i]);
        } else if (islower(str[i])) {
            result += toupper(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    cout << to_alteranating_case("He48llo W576orld") << endl;
    cout << to_alteranating_case("Cod876ewars") << endl;
    cout << to_alteranating_case("Python") << endl;
    cout << to_alteranating_case("Java") << endl;
    cout << to_alteranating_case("C#") << endl;
    return 0;
} 

// .20 
bool is_upperCase(const string& str){
    for (char c : str) {https://github.com/codewars/codewars.com/discussions
        if (islower(c)) {
            return false;
        }
    }
    return true; 
}

int main() {
    cout << is_upperCase("Hello World") << endl;
    cout << is_upperCase("Codewars") << endl;
    cout << is_upperCase("PYTHON") << endl;
    cout << is_upperCase("java") << endl;
    cout << is_upperCase("c#") << endl;
    return 0;
} 

// .21
string DNAStrand(const string& dna)
{

  //your code here
  string result = "";
  for (char s : dna ) {
    if (s == 'A') {
      result += 'T';
    } else if (s == 'T') {
      result += 'A';
    } else if (s == 'C') {
      result += 'G';
    } else if (s == 'G') {
      result += 'C';
    }
  }
  return result;
}
// .22
/* Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value. */
int sum(vector<int> numbers)
{
    if (numbers.empty() || numbers.size() < 2) {
        return 0;
    }
    int min_val = numbers[0];
    int max_val = numbers[0];
    int sum_val = 0;

    for (int num : numbers) {
        if (num < min_val) {
            min_val = num;
        }
        if (num > max_val) {
            max_val = num;
        }
        sum_val += num;
    }
    return sum_val - min_val - max_val;
}



// .23
/* Given an array of integers, return a new array with each value doubled.
For example:
[1, 2, 3] --> [2, 4, 6]
 */


vector<int> maps(const vector<int> &values) {
    vector<int> newValues;
    for (int number : values) {
        newValues.push_back(number * 2);
    }
    return newValues;
}

void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}


// .24


/* The task is to determine if a given integer is a perfect square. A perfect square is a number that can be expressed as the product of an integer with itself (e.g.,4=2×2, 9=3×3, etc.).
You need to write a function that checks if a given integer is a perfect square. */

bool is_square(int n)
{
  // TODO
  if (n < 0 ) {
    return false;
  }
  int root = 0;
  int square = 0;
  while (square < n) {
    root++;
    square = root * root;
  }
  return square == n;
}

// .25
/* 
each dragon takes 2 bullets to be defeated, our hero has no idea how many bullets he should carry.
 */

 bool hero(int bullets, int dragons) {
  return bullets >= dragons * 2;
}


// .26
/* If you can't sleep, just count sheep!!
Task:
Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers. */

 string countSheep(int number) {
    string result = "";
    for (int i = 1; i <= number; ++i) {
        result += to_string(i) + " sheep...";
    }
    return result.substr(0, result.length() - 3);
}

// .27
/* We need a function that can transform a number (integer) into a string.
What ways of achieving this do you know? */

 string number_to_string(int num) {
  // your code here
  return to_string(num);
} 

// .28

/* 
This time no story, no theory. The examples below show you how to write function accum:
Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
 */
 class Accumul
{
public:
    static std::string accum(const std::string &s);
};


std::string Accumul::accum(const std::string &s) {
    std::string result;

    for (size_t i = 0; i < s.length(); ++i) {
        result += std::toupper(s[i]); // Append uppercase letter

        for (size_t j = 0; j < i; ++j) {
            result += std::tolower(s[i]); // Append repeated lowercase letters
        }

        if (i != s.length() - 1) {
            result += '-'; // Append hyphen unless it's the last character
        }
    }

    return result;
} 

// .29
/* Write a function which converts the input string to uppercase. */
std::string makeUpperCase (const std::string& input_str)
{
    std::string result;
    for (char c : input_str) {
        result += toupper(c);
    }
    return result;
} 

// .30
/* Given a non-empty array of integers, return the result of multiplying the values together in order. Example: 
[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24*/
 int grow(std::vector<int> nums) {
  int result = 1;
  
  for(auto x : nums){
    result *= x;
  }
  
  return result;
} 

// .31
/* Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1] */
std::vector<int> reverse(int n) {
    std::vector<int> result;
    for (int i = n; i > 0; --i) {
        result.push_back(i);
    }
    return result;
}

// .32
/* Convert boolean values to strings 'Yes' or 'No'. */

 string bool_to_word(bool value)
{
  return value ? "Yes" : "No";
}  

 // .33 

bool checkForFactor(int base, int factor) {
  // your code here
  return base % factor == 0 ? true : false;
} 

// .34
/* 2 -> 3 (1 + 2)
8 -> 36 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8) */
 
int summation(int num){
 return num*(num+1)/2;
} 

// .35
// name equal owner
std::string greet(const std::string& name, const std::string& owner) {
  return name == owner ? "Hello boss" : "Hello guest";
} 

// .36
bool is_isogram(std::string str) {
    string lower = "";
    for (char x : str)
    {
       lower += tolower(x);
    }
    sort(lower.begin(), lower.end());
    for (int i = 1; i < lower.size(); i++){
        if (lower[i] == lower[i - 1])
            return false;
    }
    return true;
} 

// .37
// Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.
bool lovefunc(int f1, int f2) {
  return (f1 % 2 == 0 && f2 % 2 != 0) || (f2 % 2 == 0 && f1 % 2 != 0);
} 

// .38
/*  Given a random non-negative number, 
you have to return the digits of this number within an array in reverse order.*/
 std::vector<int> digitize(unsigned long n) 
{
  std::vector<int> x;
  do x.push_back(n % 10); while (n/=10);
  return x;
}


// .39

class Printer
{
public:
    static std::string printerError(const std::string &s);
};
std::string Printer::printerError(const std::string &s) {
    int total_errors = 0;
    int total_length = s.length();
    for (char c : s) {
        if (c < 'a' || c > 'm') {
            ++total_errors;
        }
    }
    return std::to_string(total_errors) + "/" + std::to_string(total_length);
} 

// .40
 std::string removeExclamationMarks(std::string str){
  //your code here
  string result = "";
  for (char x : str) {
    if (x == '!') {
      continue;
    }
    result += x;
  }
  return result;
} 
// .41 
// DNA to RNA Conversion
std::string DNAtoRNA(std::string dna){
  std::string rna;
  for (char d : dna) {
    if (d == 'T') {
      d = 'U';
    }
    rna += d;
  }
  return rna;
}

// .42
// Returning Strings

std::string greet(const std::string& n){
  //your code here
  return "Hello, " + n + " how are you doing today?";
}

// .43
// Can you find the needle in the haystack?
std::string findNeedle(const std::vector<std::string>& haystack)
{
    // You may use the function std::to_string to convert numbers to strings for easy concatenation. 
    // E.g., ("hi" + std::to_string(123)) ==> "hi123". Of course, that's only one of many approaches.
  for (int i = 0; i < haystack.size(); i++) {
    if (haystack[i] == "needle") {
      return "found the needle at position " + std::to_string(i);
    }
  }
  return "Needle not found in the haystack";
}
int main() {
    vector<std::string> haystack = {"hay", "haystack", "needle", "hay", "hay"};
    cout << findNeedle(haystack) << std::endl; // Output: found the needle at position 2
    return 0;
}

// .44
// Calculate BMI
std::string bmi(double w, double h) 
{
    double bmi_val = w / (h * h);
    if (bmi_val <= 18.5) {
        return "Underweight";
    } else if (bmi_val <= 25) {
        return "Normal";
    } else if (bmi_val <= 30) {
        return "Overweight";
    } else {
        return "Obese";
    }
}


// .45
// Calculate other Angle in triangle
class Triangle {
public:
  static int otherAngle(int a, int b);
};

int Triangle::otherAngle(int a, int b) {
  return 180 - (a + b );
}

// .46
// Given a year, return the century it is in.
int centuryFromYear(int year) 
{
  if (year % 100 == 0) {
    return year / 100;
  } else {
    return year / 100 + 1;
  }
return year ;
}

// .47
// ['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'


std::string smash(const std::vector<std::string>& words)
{
  std::string result = "";
  for (int i = 0; i < words.size(); i++) {
    if (i < words.size() -1) {
      result += words[i] + " ";
    } else {
        result += words[i];
    }
  }
   return result;
}

// .48
// Number of People in the Bus
unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  //your code here
  int result = 0;
  
  for (const auto& stop : busStops) {
    int getOn = stop.first;
    int getOut = stop.second;
    
    result = result + getOn - getOut;
  }
  return result;
}

// .49
// return true if the array contains the value, false if not.
bool check(const std::vector<std::string>& seq, const std::string& elem) {
  for (std::string s : seq) {
    if (s == elem) {
      return true;
    }
  }
    return false;
}

// .50
// The Feast of Many Beasts
bool feast(std::string beast, std::string dish){
  //your code here
  return (beast[0] == dish[0] ) && (beast[beast.length() -1] == dish[dish.length() -1]);
}

// .51
// ["a", "b", "c"] --> ["1: a", "2: b", "3: c"]
std::vector<std::string> number(const std::vector<std::string> &lines)
{
  std::vector<std::string> result;
  
  for (int i = 0; i < lines.size(); i++ ) {
    result.push_back(std::to_string(i + 1) + ": " + lines[i] );
  }
    return result;
}

// .52
/* A child is playing with a ball on the nth floor of a tall building. The height of this floor above ground level, h, is known.
He drops the ball out of the window. The ball bounces (for example), to two-thirds of its height (a bounce of 0.66).
His mother looks out of a window 1.5 meters from the ground.
How many times will the mother see the ball pass in front of her window (including when it's falling and bouncing)?
Three conditions must be met for a valid experiment:
Float parameter "h" in meters must be greater than 0
Float parameter "bounce" must be greater than 0 and less than 1
Float parameter "window" must be less than h.
If all three conditions above are fulfilled, return a positive integer, otherwise return -1.
Note:
The ball can only be seen if the height of the rebounding ball is strictly greater than the window parameter.
Examples:
- h = 3, bounce = 0.66, window = 1.5, result is 3

- h = 3, bounce = 1, window = 1.5, result is -1 
(Condition 2) not fulfilled */
// VIP
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window) {
  int result = 1;
  if (h > 0 && bounce > 0 && bounce < 1 && window < h) {
    while (h * bounce > window) {
        h *= bounce;
        result += 2;
        }
    } else {
    result = -1;
  }
  return result;
}

// .53
// Growth of a Population
class Arge
{
  public:
  static int nbYear(int p0, double percent, int aug, int p) {
    int result = 0;
    int p1 = p0 + (percent / 100) * p0 + aug;
    while (p1 < p) {
      p0 = p1;
      p1 = p0 + (percent / 100) * p0 + aug;
      result++;
    }
  }
  
};

// .54
// Correct the mistakes of the character recognition software
std::string correct(std::string str){
  //your code here
  // solution by switch
  std::string result = "";
  for (auto s : str) {
    switch (s) {
        case '5':
            result += 'S';
            break;
        case '0': 
            result += 'O';
            break;
        case '1':
            result += 'I';
            break;
            
        default:
        result += s;
    }
  }
  return result;
}

// .55
int simpleMultiplication(int a){
    //Your code
  return a % 2 == 0 ? a * 8 : a * 9;
}

// .56
// Unique In Order
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  //your code here
      std::vector<T> result;
    
    for (const T& item : iterable) {
        if (result.empty() || item != result.back()) {
            result.push_back(item);
        }
    }
    
    return result;
}
std::vector<char> uniqueInOrder(const std::string& iterable){
  //your code here
      std::vector<char> result;
    
    for (char c : iterable) {
        if (result.empty() || c != result.back()) {
            result.push_back(c);
        }
    }
    
    return result;
}

// .57
// Grasshopper - Grade book 
char getGrade(int a, int b, int c) {
  // your code here
  int avg = (a + b + c) / 3;
  char result = ' ';
  if (avg >= 90 && avg <= 100) {
    result = 'A';
  } else if (avg >= 80 && avg < 90) {
    result = 'B';
  } else if (avg >= 70 && avg < 80) {
    result = 'C';
  } else if (avg >= 60 && avg < 70) {
    result = 'D';
  } else if (avg >= 0 && avg < 60) {
    result = 'F';
  }
  return result;
}

// .58
// Find Maximum and Minimum Values of a List
int min(vector<int> list){
    // find min number of list
    int min = list[0];
    for (int i = 1; i < list.size(); i++) {
        if (list[i] < min) {
            min = list[i];
        }
    }
    return min;
}


// .59
// Count the smiley faces!
int countSmileys(std::vector<std::string> arr) {
  int result = 0;
  for (auto &n : arr) {
    if (n.size() == 2) {
        if ((n[0] == ':' || n[0] == ';') &&
            (n[1] == ')' || n[1] == 'D')) {

            result++;
        }
        } else if (n.size() == 3) {
            if ((n[0] == ':' || n[0] == ';') &&
                (n[1] == '-' || n[1] == '~') &&
                (n[2] == ')' || n[2] == 'D')) {
                result++;
            }
    }
  }
  return result;
}
// .60
// Who likes it?
std::string likes(const std::vector<std::string> &names)
{
  std::string result = "";
  int size = names.size();
  if (names.empty()) {
    result = "no one likes this";
  } else if (size == 1) {
        result += names[0] + " likes this";
    } else if (size == 2) {
        result += names[0] + " and " + names[1] + " like this";
    } else if (size == 3) {
        result += names[0] + ", " + names[1] + " and " + names[2] + " like this";
    } else {
        result += names[0] + ", " + names[1] + " and " + std::to_string(size - 2) + " others like this";
    }
    return result; // Do your magic!
}

// .61
// Delete occurrences of an element if it occurs more than n times.
std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::map<int, int> countMap;
    std::vector<int> result;

    for (int num : arr) {
        if (countMap[num] <n) {
            result.push_back(num);
          countMap[num]++;
        }
    }
    return result;
}

// .62
// Sort the odd

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> odd;
        std::vector<int> oddIndices;
        for (int i = 0; i < array.size(); i++) {
            if (array[i] % 2 != 0) {
                odd.push_back(array[i]);
                oddIndices.push_back(i);
            }
        }
        std::sort(odd.begin(), odd.end());
        for (int i = 0; i < oddIndices.size(); i++) {
            array[oddIndices[i]] = odd[i];
        }
            return array;
    }
};

// .63
std::string switch_it_up(int number){
  
  switch(number) {
      case 0: "Zero" break;
      case 1: "One" break;
      case 2: "Two" break;
      case 3: "Three" break;
      case 4: "Four" break;
      case 5: "Five" break;
      case 6: "Six" break;
      case 7: "Seven" break;
      case 8: "Eight" break;
      case 9: "Nine" break;
      default:
      return "Invalid input";
  }
  return 
}

// .64
// Two Sum
std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  for (int i = 0; i < numbers.size(); ++i) {
    for (int j = i +1; j < numbers.size(); ++j) {
      if (numbers[i] + numbers[j] == target) {
        return std::make_pair(i,j);
      }
    }
  }
    return std::make_pair(-1, -1);
}

// .65
// Sum of positive
int positive_sum (const std::vector<int> &arr){
  int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] > 0) sum += arr[i];
    }
  return sum;
}

// .66
// Abbreviate a Two Word Name
std::string abbrevName(std::string name)
{
  std::string s = "";
  s += toupper(name[0]);
  s += '.';
  s += toupper(name[name.find(' ')+1]);
  return s;
}

// .67
// Quarter of the year
int quarter_of(int month){
    if (month < 4) {
        return 1;
    } else if(month < 7) {
        return 2;
    } else if (month < 10) {
        return 3;
    } else {
        return 4;
    }
}

// .68
// Count the divisors of a number
int divisors(int n){  
  int result = 0;
  for (int i = 1; i <= n; i++) {
    if(n % i == 0) {
      result += 1;
    }
  }
  return result;
}

// .69
// Counting sheep...

int count_sheep(vector<bool> arr) 
{
  int sum = 0;
  for (auto booll : arr) {
    if (booll == true) {
      sum += 1;
    }
  }
  return sum;
}


// .70
 // Keep Hydrated!
 int litres(double time) {
    return time*0.5;
} 

// .71
// Return Negative
int makeNegative(int num)
{
  return num > 0 ? -num : num;
}

// .72
// Take a Number And Sum Its Digits Raised To The Consecutive Powers And ....¡Eureka!! 

bool isEurekaNumber(unsigned int n) {
  string digits = to_string(n);
  unsigned int total = 0;
  
  for (unsigned int i = 0; i < digits.size(); ++i) {
    unsigned int digit = digits[i] - '0';
    unsigned int power = pow(digit, i+1);
    total += power;
  }
  return total == n;
}

vector<unsigned int> sumDigPow(unsigned int a, unsigned int b) {
  vector<unsigned int> eurekaNumbers;
  
  for (unsigned int num = a; num <= b; ++num) {
    if(isEurekaNumber(num)) {
      eurekaNumbers.push_back(num);
    }
  }
  return eurekaNumbers;
}

// .73
// Highest Scoring Word
// Function to calculate the score of a word
int calculateScore(const string &word) {
    int score = 0;
    for (char c : word) {
        score += c - 'a' + 1; // Assuming lowercase English letters only
    }
    return score;
}

string highestScoringWord(const string &str) {
    // Initialize alphabet
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                             'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    // Split the string into words
    vector<string> words;
    string word;
    for (char c : str) {
        if (isalpha(c)) {
            word += tolower(c); // Convert to lowercase
        } else if (!word.empty()) {
            words.push_back(word);
            word.clear();
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    
    // Find the word with the maximum score
    int maxScore = 0;
    string maxWord;
    for (const string &w : words) {
        int score = calculateScore(w);
        if (score > maxScore) {
            maxScore = score;
            maxWord = w;
        }
    }
    
    return maxWord;
}

// .74
// parse nice int from char problem
int get_age(const std::string& she_said) {

    return she_said[0] - '0';
}

// .75
//Opposite number
int opposite(int number) {
    return -number;
}

// .76
// Build tower by stars and spaces
vector<std::string> towerBuilder(unsigned nFloors) {
  vector<string> pyramid;
  // max width for latest floor.
  int max_width = 2 * nFloors - 1;
  
  for (int i = 0; i < nFloors; ++i) {
    int num_stars = 2 * i +1;
    int num_spaces = (max_width  - num_stars) / 2;
    
    string floor = string(num_spaces, ' ') + string(num_stars, '*') + string(num_spaces, ' ');
    
    pyramid.push_back(floor);
  }
  return pyramid;
}

// .77
// Mixico wave >> Wave wAve waVe wavE << 
std::vector<std::string> wave(std::string y){ 
     //Code Here...
    std::vector<std::string> v;
    for (int i = 0; i < y.size(); i++) {
        if(isalpha(y[i])) {
            std::string s = y;
            s[i] = std::toupper(s[i]);
            for (int j = 0; j < s.size(); ++j) {
                if (i != j) {
                    s[j] = std::tolower(s[j]);
                }
            }
            v.push_back(s);
        }
    }
    return v;
}
// .78
// Area or Perimeter
int area_or_perimeter(int l , int w) {
  return l == w ? l * w : (l + w) * 2;
} 
// .79
/* Check to see if a string has the same amount of 'x's and 'o's.
The method must return a boolean and be case insensitive. 
The string can contain any char. */
bool XO(const std::string& str)
{
  // your code here
  int a , b;
  a = count_if(str.begin(), str.end(), [](char c) {
    return tolower(c) == 'x';
  });
  b = count_if(str.begin(), str.end(), [](char c) {
    return tolower(c) == 'o';
  });
  // if string not contain any 'x' and 'o' return true
  if(a == 0 && b == 0) return true;
  
  return a == b;
}

// .80
//  
std::vector<uint64_t> powers_of_two(int n) {
  std::vector<uint64_t> vec;
  for(int i = 0; i<=n; i++){
    vec.push_back(pow(2,i));
  }
  return vec;
}