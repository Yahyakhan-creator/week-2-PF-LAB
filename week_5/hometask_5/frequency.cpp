#include <iostream>
using namespace std;

int main() {
    int num, digit, count = 0, remainder;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Enter digit to check repetition: ";
    cin >> digit;

    int original = num;   // store original number

    while (num > 0) {
        remainder = num % 10;

        if (remainder == digit) {
            count++;
        }

        num = num / 10;
    }

    cout << "frequency of " << digit << " in " << original << " is " << count << " times.";

    return 0;
}