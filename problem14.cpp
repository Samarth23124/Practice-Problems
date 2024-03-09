/* Question 14 Write a C++ program for matrix multiplication? */


#include <iostream>
using namespace std;
class array{

public:
void multiply( int arr1[],  int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
};

int main() {
     int size = 5;

    int array1[size] = {1, 2, 3, 4, 5};
    int array2[size] = {6, 7, 8, 9, 10};
    int result[size];

    array a;
    cout << "Array 1: "<<endl;
    a.display(array1, size);
    cout<<endl;

    cout << "Array 2: "<<endl;
    a.display(array2, size);
    cout<<endl;

    a.multiply(array1, array2, result, size);

    cout << "Result of array multiplication: ";
    a.display(result, size);
    cout<<endl;

    return 0;
}
