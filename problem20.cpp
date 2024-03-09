/*Question 20 Write a c++ program to find fabonacii series using default constructor ? */


#include <iostream>
using namespace std;

class fabonacii{

public:
       fabonacii(){
        int f;
        cout<<"Enter the number till where you want the fibonacii series"<<endl;    
        cin>>f;
        int a = 0 ;
        int b = 1;
        if(f >2)
        {
            cout<<a<<","<<b<<",";
            for(int i=3;i<=f;i++){
                int c = a + b;
                cout<<c<<",";
                a = b;
                b = c;

            }
            
        }
        else if (f==2){
            cout<<a<<b;
        }
        else{
            cout<<a<<endl;
            
        }
}
};

int main(){
    fabonacii f;
    return 0;
}