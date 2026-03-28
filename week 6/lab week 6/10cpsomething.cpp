#include <iostream>
using namespace std;

int main()
{
    char text[100];

    cout << "Enter the argument : ";
    cin.getline(text, 100);

    cout << "Result: something " << text << endl;

    return 0;
}