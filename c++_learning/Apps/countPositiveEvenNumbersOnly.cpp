#include <iostream>
#include <array>
#include <string.h>
using namespace std;

int main() {
    int result = 0;
    int nums[]{10, 20, 30, -20, 13, -30, 40};
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++) {
        if (nums[i] > 0 && nums[i] % 2 == 0) {
        result += nums[i];
        }
    }
    cout << "Result Is: " << result << endl;
        return 0;
}