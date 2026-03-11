#include <iostream>
using namespace std;
int main()
{

    string input;
    float inputs;
    float number;
    float length;
    float width;
    float radius;
    float base;
    float height;

    cout << "Enter Geomatric Figures(in small letter): ";
    cin >> input;
    if (input == "square")
    {
        cout << "Enter dimention: ";
        cin >> number;
        inputs = number * number;
        cout << inputs;
    }
    else if (input == "rectangle")
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter Width";
        cin >> width;
        number = length * width;
        cout << number;
    }
    else if (input == "circle")
    {
        cout << "Enter radius: ";
        cin >> radius;
        number = 3.14 * radius * radius;
        cout << number;
    }
    else if (input == "triangle")
    {
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter Height: ";
        cin >> height;
        number = 0.5 * (base * height);
        cout << number;
    }
    return 0;
}