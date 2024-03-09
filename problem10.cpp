/*Question 10 Write a c++ program to print the pattern 
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
6 6 6 6 6 6 ? */


#include <iostream>
using namespace std;

class numberpattern {
private:
    int rows;

public:
    void Rows() {
        cout << "Enter the number of rows: "<<endl;
        cin >> rows;
    }

    void printPattern() {
        
        cout<<"The required pattern is "<<endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }
};

int main() {

    numberpattern n;
    n.Rows();
    n.printPattern();

    return 0;
}
