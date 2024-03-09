/*Question 15: Take 8 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0 ?*/

#include <iostream>
using namespace std;
class array{
int pos = 0;
int neg = 0;
int odd = 0;
int even = 0;
int zero = 0;

public:
       void check(int nums[], int size) {
        for (int i = 0; i < size; i++) {
            if (nums[i] > 0)
                pos++;
            else if (nums[i] < 0)
                neg++;

            if (nums[i] % 2 == 0)
                even++;
            else
                odd++;

            if (nums[i] == 0)
                zero++;
        }
        }
        void display(){
        cout << "Number of positive numbers: " << pos << endl;
        cout << "Number of negative numbers: " << neg << endl;
        cout << "Number of odd numbers: " << odd << endl;
        cout << "Number of even numbers: " << even << endl;
        cout << "Number of zeros: " << zero << endl;
        }

};

int main(){
    int size = 8;
    int nums[size];
    cout<<"Enter 8 numbers "<<endl;
    for (int i = 0; i < size; i++) {
        cout<<"Enter integer "<<i+1<<endl;
        cin >> nums[i];
    }

    array a;
    a.check(nums,size);
    a.display();
    return 0;

}