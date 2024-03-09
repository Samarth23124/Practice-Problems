/*Question 19 Write a c++ program to find whether a number is armstrong or not using default constructor ? */

#include <iostream>
using namespace std;

class armstrong{
public:
    armstrong(){
        int num;
        cout<<"Enter the number"<<endl;
        cin>>num;
        int q = num;
        int sum = 0;
        while(num>0)
        {
           int m = num%10;
            sum = sum + (m*m*m);
            num = num/10;

        }
        if(sum == q)
        {
            cout<<"The number is armstrong number "<<endl;

        }
        else{
            cout<<"Not an Armstrong number"<<endl;
        }
        }

};

int main(){
    armstrong a;
    return 0;
}