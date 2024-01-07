#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char uname[50];
    char pass[20];
    cout << "\n Enter User Name  :  ";
    cin.getline(uname, 50);  // Use cin.getline to safely read input with spaces.
    cout << "\n Enter Password   :  ";
    cin.getline(pass, 20);   // Use cin.getline for password input.

    // Password length check.
    if (strlen(pass) < 6) {
        cout << "\n Password must be at least 6 characters long." << endl;
    } else {
        bool digit_yes = false;
        int len = strlen(pass);

        // Check for at least one digit in the password.
        for (int count = 0; count < len; count++) {
            if (isdigit(pass[count])) {
                digit_yes = true;
                break;  // Exit the loop as soon as a digit is found.
            }
        }

        if (digit_yes) {
            cout << "\n Password is Correct";
        } else {
            cout << "\n Password must contain at least one digit (0-9)" << endl;
        }
    }

    return 0;
}