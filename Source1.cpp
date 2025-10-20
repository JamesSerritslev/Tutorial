#include <iostream>
using namespace std;

//We are now adding to only the TestBranch since we are in it

// Testing merge conflict
// Example: factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

// Recursive function to calculate Fibonacci number
// Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21...
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case: fib(n) = fib(n-1) + fib(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to calculate sum of digits
// Example: sumDigits(1234) = 1 + 2 + 3 + 4 = 10
int sumDigits(int n) {
    // Base case: single digit
    if (n < 10) {
        return n;
    }
    // Recursive case: last digit + sum of remaining digits
    return (n % 10) + sumDigits(n / 10);
}

// Recursive function to reverse a number
// Example: reverseNumber(1234) = 4321
int reverseNumber(int n, int reversed = 0) {
    // Base case: no more digits
    if (n == 0) {
        return reversed;
    }
    // Recursive case: move last digit to reversed number
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main() {
    int choice, num;

    cout << "=== Recursive Functions Demo ===" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Fibonacci" << endl;
    cout << "3. Sum of Digits" << endl;
    cout << "4. Reverse Number" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter a number: ";
    cin >> num;

    switch (choice) {
    case 1:
        if (num < 0) {
            cout << "Factorial is not defined for negative numbers!" << endl;
        }
        else {
            cout << "Factorial of " << num << " = " << factorial(num) << endl;
        }
        break;

    case 2:
        if (num < 0) {
            cout << "Fibonacci is not defined for negative numbers!" << endl;
        }
        else {
            cout << "Fibonacci number at position " << num << " = " << fibonacci(num) << endl;
        }
        break;

    case 3:
        if (num < 0) {
            num = -num; // Make positive for digit sum
        }
        cout << "Sum of digits of " << num << " = " << sumDigits(num) << endl;
        break;

    case 4:
        if (num < 0) {
            cout << "Reversed number: -" << reverseNumber(-num) << endl;
        }
        else {
            cout << "Reversed number: " << reverseNumber(num) << endl;
        }
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
```
