#include <iostream>
using namespace std;

// This function returns an 'int' (1 for Oddish, 0 for Evenish)
int checkOddish(int num) {
    int sum = 0;
    
    // Peel off the digits
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }

    // Return 1 if sum is odd, return 0 if sum is even
    if (sum % 2 != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int input;
    cout << "Enter a five-digit number: ";
    cin >> input;

    // Call the function and store the result in a variable
    int result = checkOddish(input);

    // Interpret the result
    if (result == 1) {
        cout << "Oddish" << endl;
    } else {
        cout << "Evenish" << endl;
    }

    return 0;
}