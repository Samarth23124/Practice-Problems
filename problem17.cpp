/*Question 17 : Write a c++ program to enter the marks of the students of 5 subjects.
calculate the prcentage using the constructor ?*/

#include <iostream>
using namespace std;

class student{
  float a,b,c,d,e;
  public :
          student(){
            cout<< "Enter the marks of subjects "<<endl;
            cout<<"Physics"<<endl;
            cin>>a;
            cout<<"Chemistry"<<endl;
            cin>>b;
            cout<<"Maths"<<endl;
            cin>>c;
            cout<<"English"<<endl;
            cin>>d;
            cout<<"Physical Education"<<endl;
            cin>>e; 
            float percent = ((a+b+c+d+e)/500)*100;
            cout<<"Your percentage is "<<percent<<endl;        
          }

};

int main(){
    student s;
    return 0 ;
}