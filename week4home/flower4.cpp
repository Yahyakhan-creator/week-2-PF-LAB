#include <iostream>
using namespace std;
int main()
{
    int rose;
    int white;
    int tulip;
    cout << "Enter the number of red roses:";
    cin >> rose;
    cout << "Enter the number of white roses:";
    cin >> white;
    cout << "Enter the number of tulip :";
    cin >> tulip;
    int roses;
    roses = rose * 2;
    int whites;
    whites = white * 4.10;
    int tulips;
    tulips = tulip * 2.50;
    int dollar;
    dollar = roses + whites + tulips;
    cout << "the original price is" << dollar << "$"<<endl;
    int discount;
    if (dollar > 200)
    {
        discount = dollar - (dollar * 0.20);
        cout << "PRICE AFTER  discount : $" << discount  << endl;
    }
    return 0;
}