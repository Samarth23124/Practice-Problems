/*Write a program to print  
    * 
   * * 
  * * * 
 * * * * 
* * * * *  ?   */

#include <iostream>
using namespace std;
class StarPattern {
private:
    int size;

public:
    
    void setsize(int n) {
        size = n;
    }

    
    void create() {
        
        int i, j, k = size;
        for (i = 1; i <= size; i++) {
            for (j = 1; j <= size; j++) {
                if (j >= k)
                    cout << "* ";
                else
                    cout << " ";
            }
            k--;
            cout << "\n";
        }
    }
};


int main() {
    int n;
    cout<<"Enter the value of the row of the star"<<endl;
    cin>>n;
    StarPattern s;
    s.setsize(n);
    s.create();

    return 0;
}
