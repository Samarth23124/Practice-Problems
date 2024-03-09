/*Question 3 Write a program to check if a year is leap year or not.
If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.*/

#include <iostream>
using namespace std;

class leapyear{
int year;
public:
        void check(int year){
            if (year%4 == 0){
                if (year%100 == 0){
                    if(year%400 == 0){
                        cout<<"The year is a leap year"<<endl;
                    }
                    else{
                        cout<<"The year is not a leap year"<<endl;
                    }
                }
                else {
                   cout<<"The year is a leap year"<<endl;
                }
            }
            else{
                 cout<<"The year is not a leap year"<<endl;
            }
        }
};

int main(){

    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    leapyear y;
    y.check(year);
}