/* Question Ask user to enter age, sex ( M or F )  and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then he may work in anywhere

if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

And any other input of age should print "ERROR"? */

#include <iostream>
using namespace std;
class employee {

    int age;
    char sex;

  public:
    void place(int age, char sex ){
        if(sex == 'M'){
           if(age >= 20 && age <= 40){
            cout<<"Can work anywhere"<<endl;
           }
           else if (age > 40 && age <= 60){
            cout<<"Can work only in urban areas"<<endl;
           }
           else{
            cout<<"ERROR"<<endl;
           }
        }
        else if (sex == 'F'){
            if (age>=20 && age <=60 ){
            cout<<"Can work only in urban areas"<<endl;
            }

        }
        else {
            cout<<"ERROR"<<endl;
        }

    }
};

int main(){
    int age;
    char sex;
    cout<<"enter age, sex ( M or F )"<<endl;
    cin>> age >> sex;
    employee E;
    E.place(age,sex);
    return 0; 
}