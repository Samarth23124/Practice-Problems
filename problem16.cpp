/*Question 16 Write a c++ program to find the area of the triangle using the default constructor ?*/


#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    
    Rectangle() {

        cout<<"Enter the length and breadth of the rectangle"<<endl;
        cin>>length>>width;
        cout<< "Area = "<<length * width<<endl;
    }
    
};

int main() {
   
    Rectangle r;          
    return 0;
}
