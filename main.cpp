#include <iostream>
using namespace std;

// Declare the pattern functions
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
void pattern9();

int main() {
    int choice;
    cout << "Choose a pattern to run:\n";
    cout << "Pattern 1\n";
    cout << "Pattern 2\n";
    cout << "Pattern 3\n";
    cout << "Pattern 4\n";
    cout << "Pattern 5\n";
    cout << "Pattern 6\n";
    cout << "Pattern 7\n";
    cout << "Pattern 8\n";
    cout << "Pattern 9\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        pattern1();
        break;
    case 2:
        pattern2();
        break;
    case 3:
        pattern3();
        break;
    case 4:
        pattern4();
        break;
    case 5:
        pattern5();
        break;
    case 6:
        pattern6();
        break;
    case 7:
        pattern7();
        break;
    case 8:
        pattern8();
        break;
    case 9:
        pattern9();
        break;
    default:
        cout << "Invalid choice. Try again.\n";
    }

    return 0;
}
