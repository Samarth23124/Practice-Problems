/*Question 7 Write a c++ program to find whether the number is prime or not */

#include<iostream>
using namespace std;
class prime {
    int n;
    public:
        void check(int n){
         int j = 2;
         while(j<n){
            if(n%j==0){
                cout<<"The number is not prime"<<endl;
                break;
            }
            j++;
         }
         if (j == n)
         {
            cout<<"THe number is prime"<<endl;
         }
        }
};

int main(){
    int n;
    cout<<"Enter the number greater than or equal to 2"<<endl;
    cin>>n;
    prime p;
    p.check(n);
    return 0;
}