#include <iostream>
using namespace std;
int main()
{

    string name;
    cout << "enter name :  "<< endl;
    cin >> name;
    while (name != "END")
    {
        cout << "Enter the name";
        cin>>name;
        cout << "hello   " <<  name << endl;
    }
    return 0;
}
