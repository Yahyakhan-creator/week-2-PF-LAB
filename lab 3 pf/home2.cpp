#include <iostream>
using namespace std;

int main()
{
    int two;
    int three;
    int total;

    cout << "Enter 2 pointers: ";
    cin >> two;

    cout << "Enter 3 pointers: ";
    cin >> three;

    total = (two * 2) + (three * 3);

    cout << "Total points = " << total << endl;

    return 0;
}