/*Question 6 : Write a c++ program to find the factorial of a given number ?*/

#include <iostream>
using namespace std;

class factorial{
    int a , c;
    public:
           void find(int a){
        
            int c;
             c = 1;
            
            for(int i = a; i>0; i--)
            {
            c = i*c;
            }
            cout<<"The factorial of the number is : "<<c<<endl;
        
            }
};

int main(){
    int a;
    cout<<"Enter the number to find the factorial"<<endl;
    cin>>a;
    factorial f;
    f.find(a);
    return 0;

}