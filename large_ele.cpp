
#include <iostream>
#include <vector>
using namespace std;

int findLargestElement(const vector<int>& arr) {
    
    int maxElement = arr[0];

    
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    vector<int> arr1 = {1, 8, 7, 56, 90};
    vector<int> arr2 = {5, 5, 5, 5};
    vector<int> arr3 = {10};

    cout << "Largest element in arr1: " << findLargestElement(arr1) << endl; 
    cout << "Largest element in arr2: " << findLargestElement(arr2) << endl; 
    cout << "Largest element in arr3: " << findLargestElement(arr3) << endl;

    return 0;
}
