/*Question 18 Write a c++ program to ask the user their VITEE rank and then on the basis of the rank decide the campus they will get 
Use the default constructor to solve the problem?*/

#include <iostream>
using namespace std;

class VITEE{
    int r;
    public:
           VITEE(){
            cout<<"Enter your VITEE rank :"<<endl;
            cin>>r;
            if(r>=1 && r<= 10000){
                cout<<"Congratulations!! You get VIT VELLORE"<<endl;

            }
            else if (r>10000 && r<= 30000){
                 cout<<"Congratulations!! You get VIT Chennai"<<endl;
            }
            else if (r>30000 && r<= 50000){
                 cout<<"Congratulations!! You get VIT Bhopal"<<endl;
            }
            else if (r>50000 && r<= 100000){
                 cout<<"Congratulations!! You get VIT Amravati"<<endl;
            }
            else{
                 cout<<"Better luck next time "<<endl;
            }
            

           }
};

int main(){
    VITEE r;
    return 0;
}