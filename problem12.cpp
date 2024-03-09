/*Question 12 Write a c++ program to find the largest element of a given array ?*/

#include <iostream>
#include <climits>
using namespace std;

class Array{
public:
    int Largest(int nums[], int n) {
        if (n <= 0) {
            cerr << "Error: Empty array" << endl;
            return INT_MIN; 
        }

        int largest = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main() {
    Array a; 

    int nums[] = {5, 4, 9, 12, 8};
    int n = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array:"<<endl;
    for (int i = 0; i < n; i++)
        cout << " " << nums[i];
        cout<<endl;

    cout << "Largest element of the array: " << a.Largest(nums, n);

    return 0;
}

