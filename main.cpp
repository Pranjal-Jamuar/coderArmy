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
void pattern10();
void pattern11();
void pattern12();
void pattern13();
void pattern14();
void pattern15();
void pattern16();
void pattern17();
void pattern18();
void pattern19();
void pattern20();
void pattern21();
void pattern22();
void pattern23();
void pattern24();
void pattern25();
void pattern26();
void pattern27();
void tableUsingWhile();
void printNumbersInRange();
void printCharactersInRange();
void printNumbersBackwardInRange();
void printNumbersInRangeWithFixedIncrement();
void powerOfANumber();
void printSumOfNaturalNumbers();
void sumOfNaturalNumbersSquared();
void factorial();

int main() {
    int choice;
    cout << "Choose a number to run:\n";
    cout << "01. Pattern 1\n";
    cout << "02. Pattern 2\n";
    cout << "03. Pattern 3\n";
    cout << "04. Pattern 4\n";
    cout << "05. Pattern 5\n";
    cout << "06. Pattern 6\n";
    cout << "07. Pattern 7\n";
    cout << "08. Pattern 8\n";
    cout << "09. Pattern 9\n";
    cout << "10. Pattern 10\n";
    cout << "11. Pattern 11\n";
    cout << "12. Pattern 12\n";
    cout << "13. Pattern 13\n";
    cout << "14. Pattern 14\n";
    cout << "15. Pattern 15\n";
    cout << "16. Pattern 16\n";
    cout << "17. Pattern 17\n";
    cout << "18. Pattern 18\n";
    cout << "19. Pattern 19\n";
    cout << "20. Pattern 20\n";
    cout << "21. Pattern 21\n";
    cout << "22. Pattern 22\n";
    cout << "23. Pattern 23\n";
    cout << "24. Pattern 24\n";
    cout << "25. Pattern 25\n";
    cout << "26. Pattern 26\n";
    cout << "27. Pattern 27\n";
    cout << "28. Table of a number using while loop\n";
    cout << "29. Print numbers in range\n";
    cout << "30. Print characters in range\n";
    cout << "31. Print numbers backward in range\n";
    cout << "32. Print numbers in range with a fixed increment value\n";
    cout << "33. Print result of any number to its power value\n";
    cout << "34. Print sum of N natural numbers\n";
    cout << "35. Print sum of N natural numbers squared\n";
    cout << "36. Calculate factorial of a number\n";
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
    case 10:
        pattern10();
        break;
    case 11:
        pattern11();
        break;
    case 12:
        pattern12();
        break;
    case 13:
        pattern13();
        break;
    case 14:
        pattern14();
        break;
    case 15:
        pattern15();
        break;
    case 16:
        pattern16();
        break;
    case 17:
        pattern17();
        break;
    case 18:
        pattern18();
        break;
    case 19:
        pattern19();
        break;
    case 20:
        pattern20();
        break;
    case 21:
        pattern21();
        break;
    case 22:
        pattern22();
        break;
    case 23:
        pattern23();
        break;
    case 24:
        pattern24();
        break;
    case 25:
        pattern25();
        break;
    case 26:
        pattern26();
        break;
    case 27:
        pattern27();
        break;
    case 28:
        tableUsingWhile();
        break;
    case 29:
        printNumbersInRange();
        break;
    case 30:
        printCharactersInRange();
        break;
    case 31:
        printNumbersBackwardInRange();
        break;
    case 32:
        printNumbersInRangeWithFixedIncrement();
        break;
    case 33:
        powerOfANumber();
        break;
    case 34:
        printSumOfNaturalNumbers();
        break;
    case 35:
        sumOfNaturalNumbersSquared();
        break;
    case 36:
        factorial();
        break;
    default:
        cout << "Invalid choice. Try again.\n";
    }

    return 0;
}
