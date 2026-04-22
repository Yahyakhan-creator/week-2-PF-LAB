#include <iostream>
#include <string>

using namespace std;

// Function to convert 1-99 into text
string numberToText(int num)
 {
    if (num < 1 || num > 99)
     {
        return "Out of range";
    }

    // Arrays to store the words
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Logic for numbers 1-9
    if (num < 10) {
        return ones[num];
    }
    // Logic for numbers 10-19
    else if (num < 20) {
        return teens[num - 10];
    }
    // Logic for numbers 20-99
    else {
        int tensDigit = num / 10;
        int onesDigit = num % 10;
        return tens[tensDigit] + ones[onesDigit];
    }
}

int main() {
    int input;
    cout << "Enter a number (1-99): ";
    cin >> input;

    cout << numberToText(input) << endl;

    return 0;
}
