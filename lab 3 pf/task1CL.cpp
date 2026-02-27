#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float aggregate;
    char section;

    cout << "Enter your Name: ";
    cin >> name;

    cout << "Enter your Roll Number: ";
    cin >> rollNo;

    cout << "Enter your Aggregate: ";
    cin >> aggregate;

    cout << "Enter your Section: ";
    cin >> section;

    cout << endl;
    cout << "----- Student Info -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Aggregate: " << aggregate << endl;
    cout << "Section: " << section << endl;

    return 0;
}