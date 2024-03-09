/*Question 11 Write a C++ program for binary search ? */

#include <iostream>
using namespace std;
class binarysearch{
public:
    int Search(int arr[], int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] > target)
                high = mid - 1;

            else
                low = mid + 1;
        }
        return -1;
    }
};

int main() {
    binarysearch b; 

    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target ;
    cout<<"Enter the element you want to search"<<endl;
    cin>>target;


    int result = b.Search(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}