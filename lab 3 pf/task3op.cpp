#include <iostream>
using namespace std;

int main()
{
   int length;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    int width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
int area;

    area = length * width;

    cout << "The area of the rectangle is = " << area << endl;

    return 0;
}