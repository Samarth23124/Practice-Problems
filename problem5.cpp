/*Question 5 check the greatest of three number using if and else condition ?*/

#include <iostream> 
using namespace std;
 class greatest {
    int a ,  b ,  c;
    public:
           void threenumber(int a, int b, int c){
            if(a>b){
                if (a>c){
                    cout<<a <<" is greatest "<<endl;
                }
                else {
                    cout<<c<<" is the greatest"<<endl;
                }
            }
            else if (b>c){
                if (b>a){
                    cout<<b<<" is the greatest "<<endl;
                }
                else{
                    cout<<a<<" is the greatest "<<endl;
                }
            }
            else{
                cout<<c<<" is the greatest "<<endl;
            }
           }
 };

 int main(){
    int a,  b,  c;
    cout<<"Enter the three numbers to compare "<<endl;
    cin>>a>>b>>c;
    greatest g;
    g.threenumber(a,b,c);
 }