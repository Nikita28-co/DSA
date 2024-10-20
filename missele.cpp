
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(const vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2; // Calculate the sum of numbers from 0 to n
        int actualSum = 0;

        // Calculate the sum of elements in the given array
        for (int num : nums) {
            actualSum += num;
        }

        // The missing number is the difference between the expected sum and the actual sum
        return expectedSum - actualSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    cout << "Missing number in nums1: " << solution.missingNumber(nums1) << endl; // Expected output: 2
    cout << "Missing number in nums2: " << solution.missingNumber(nums2) << endl; // Expected output: 2
    cout << "Missing number in nums3: " << solution.missingNumber(nums3) << endl; // Expected output: 8

    return 0;
}