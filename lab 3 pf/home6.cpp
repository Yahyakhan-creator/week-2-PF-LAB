#include <iostream>
using namespace std;

int main()
{
    int paint;
    int width;
    int height;
    int walls;

    cout << "Enter paint area: ";
    cin >> paint;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    walls = paint / (width * height);

    cout << "Walls painted = " << walls << endl;

    return 0;
}