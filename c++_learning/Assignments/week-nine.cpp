#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <string>
#include <vector>
#include <array>
using namespace std;


 int main() {
    vector<int> nums = {100, 200, 300, 400};
    for (int i = 0; i < nums.size(); i++) {
        cout << nums.at(i) << endl;
    }
    cout << endl;
    nums.push_back(500);
    cout << nums.size() << endl;
    cout << "First Element Is: " << *nums.begin() << endl;
    cout << "Last Element Is: " << *(nums.end() - 1) << endl;
    return 0;
} 


// .2

int main() {
    vector<int> nums = { 10, 20, 30, 40 };

    cout << nums[0] << endl;
    cout << nums.at(0) << endl;
    cout << *nums.begin() << endl;
    cout << nums.front() << endl;
    cout << nums[nums.size() - 1] << endl;
    cout << nums.at(nums.size() - 1) << endl;
    cout << *(nums.end() - 1) << endl;
    cout << nums.back() << endl;
    return 0;
} 
// .3

 int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };

  // Write Your Code Here
  auto fir = numbers.begin();
  auto last = numbers.end() - 1;
  // Do Not Edit Below
  cout << *fir << "\n"; // 10
  cout << *last << "\n"; // 80

  return 0;
}

// .4
 int main()
{
  vector <float> floats = { 1.5, 3.5, 5.5 };
  vector <int> numbers{ 10, 20, 30, 40, 50, 60, 70, 80 };
  vector <double> doubles;
  vector <float>::iterator it;

  it = floats.begin() + 2;
  auto last = numbers.end() - 1;
  doubles.push_back(10);

  cout << * it << "\n"; // 5.5
  cout << * last << "\n"; // 80
  cout << doubles.at(0) << "\n"; // 10

  return 0;
} 

// .5  I Don't solve it.
 int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  vector<int>::iterator it = numbers.begin();

  // Write Method One
  // advance(it, (distance(numbers.begin(), numbers.end()) + 1) / -1);
  // Write Method Two
  it = next(numbers.begin(), (distance(numbers.begin(), numbers.end()) + 1) / -1);
  // Write Method Three
  // advance(it, (distance(numbers.end(), numbers.begin()) - 1) / -1);
  cout << *it << "\n"; // 50
  return 0;
} 
 
// .6

int main()
{
  vector <int> numbers = { 10, 20, 10, 40, 50, 60, 10, 80 };
  int check = 10;
  int countone = 0;
  int counttwo = 0;

  // Write Method One
  countone = count(numbers.begin(), numbers.end(), check);

  // Write Method Two
  for (int n : numbers) {
    if( n == check) {
      counttwo++;
    }
  }

  cout << countone << "\n"; // 3
  cout << counttwo << "\n"; // 3
  return 0;
}

// .7

int main()
{
  vector<int> numbers = { 10, 20, 10, 40, 50 };
  vector<int>::iterator iter = numbers.begin();

  for (;;)
  {
    // Your Code Here
    if(iter == numbers.end()) {
      break;
    }
    cout << *iter << "\n";
    iter++;


  }

  return 0;
}