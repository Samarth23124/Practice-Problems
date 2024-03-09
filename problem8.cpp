/*Question 8. Write a C++ program to prompt the user for a password. 
Use a do-while loop to continue asking for the password until the user enters the correct one*/

#include<iostream>
#include<string>
using namespace std;

class Password {
    string userpassword;

public:
    void check() {
        const string correctpassword = "samarth";
        do {
            cout << "Enter the password: "<<endl;
            cin >> userpassword;

            if (userpassword != correctpassword) {
                cout << "Incorrect password. Try again." << endl;
            }

        } while (userpassword != correctpassword);

        cout << "Access granted. Welcome!" << endl;
    }
};

int main() {
    Password p;
    p.check();
    return 0;
}
