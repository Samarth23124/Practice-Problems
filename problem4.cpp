/*Create a program that asks the user to input the lengths of three sides of a triangle. 
The program should then determine and print whether the triangle is equilateral, isosceles, or scalene.
 Additionally, the program should check if it's a valid triangle (the sum of the lengths of any two sides must be greater than the length of the third side)?*/

 #include <iostream>
 using namespace std;

 class triangle{
    int a,b,c;
    public :
            void type(int a,int b,int c){
                if(a+b > c && b+c > a && a+c > b ){
                    cout<<"It is a valid triangle"<<endl;
                    if (a == b && b==c && c==a){
                       cout<<"The triangle is equilateral triangle"<<endl;
                    }
                    else if (a == b || b==c || c == a ){
                        cout<<"The triangle is isosceles triangle "<<endl;
                    }
                    else{
                        cout<<"The triangle is scalene triangle "<<endl;
                    }
                }
                else {
                    cout<<"The triangle is not a valid triangle "<<endl;
                }
            }
 };

 int main(){
    int a , b , c;
    cout<<"Enter the length of three sides of the triangles"<<endl;
    cin>>a>>b>>c;
    triangle t;
    t.type(a,b,c);
 }


 