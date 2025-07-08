//
// Created by Pranjal Jamuar on 08/07/25.
//

#include<iostream>
using namespace std;

void checkPrime()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is prime.\n";
    else
        cout << n << " is not prime.\n";
}