
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int k = 1; // Initialize k to 1 as the first element is always unique

        // Iterate through the array to find unique elements
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) { // Check if the current element is different from the previous one
                nums[k] = nums[i]; // Place the unique element at the k-th position
                k++; // Increment k
            }
        }

        return k; // Return the number of unique elements
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k1 = solution.removeDuplicates(nums1);
    cout << "Number of unique elements: " << k1 << endl; // Expected output: 2
    cout << "Modified array: ";
    for (int i = 0; i < k1; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    int k2 = solution.removeDuplicates(nums2);
    cout << "Number of unique elements: " << k2 << endl; // Expected output: 5
    cout << "Modified array: ";
    for (int i = 0; i < k2; i++) {
        cout << nums2[i] << " ";
    }
    cout << endl;

    return 0;
}