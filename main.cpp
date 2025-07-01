#include <iostream>
using namespace std;

// Declare the pattern functions
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();

int main() {
    int choice;
    cout << "Choose a pattern to run:\n";
    cout << "Pattern 1\n";
    cout << "Pattern 2\n";
    cout << "Pattern 3\n";
    cout << "Pattern 4\n";
    cout << "Pattern 5\n";
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
    default:
        cout << "Invalid choice. Try again.\n";
    }

    return 0;
}
