#include <iostream>
using namespace std;

int main()
{
    int age;
    int moves;
    int average;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter moves: ";
    cin >> moves;

    average = age / (moves + 1);

    cout << "Average years = " << average << endl;

    return 0;
}