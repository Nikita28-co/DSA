
#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;

class Solution {
public:
    int secondLargest(const vector<int>& arr) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        // Iterate through the array to find the largest and second largest elements
        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest; // Update second largest before updating largest
                largest = num;           // Update largest
            } else if (num > secondLargest && num < largest) {
                secondLargest = num;     // Update second largest if it's greater than the previous second largest and less than largest
            }
        }

        // If secondLargest was not updated, return -1
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};

int main() {
    Solution solution;
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    vector<int> arr2 = {10, 10};

    cout << solution.secondLargest(arr1) << endl; // Expected output: 34
    cout << solution.secondLargest(arr2) << endl; // Expected output: -1

    return 0;
}