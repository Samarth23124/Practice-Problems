/*Questiopn 2 If integer variable currentNumber is odd, change its value so that it is now 3
times currentNumber plus 1, otherwise change its value so that it is now half of
currentNumber ? */

#include <iostream>
using namespace std;
class number{
    int currentnumber;
public :
        void manipulation(int &currentnumber){
            if (currentnumber % 2 == 0){
                currentnumber = currentnumber/2;
                cout<<"The new number is "<<currentnumber<<endl;
            }
            else{
                currentnumber = 3*currentnumber + 1 ;
                cout<<"The new number is "<<currentnumber<<endl;
            }
        }
};

int main(){
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    number n;
    n.manipulation(num);
}