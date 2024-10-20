
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkSortedRotated(const vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        // Check how many times the current element is greater than the next element
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        // If the count is 0 or 1, then the array is sorted and rotated
        return count <= 1;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};
    vector<int> nums3 = {1, 2, 3};

    cout << (solution.checkSortedRotated(nums1) ? "true" : "false") << endl; // Expected output: true
    cout << (solution.checkSortedRotated(nums2) ? "true" : "false") << endl; // Expected output: false
    cout << (solution.checkSortedRotated(nums3) ? "true" : "false") << endl; // Expected output: true

    return 0;
}