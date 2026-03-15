#include <iostream>
using namespace std;
int main()
{
    char input = 'y';
    while (input== 'y')
    {
        cout << "tryin'n to learn the loops" << endl;
        cout << "Enter y in lower case to continuee" << endl;
        cin>>input;
    }
    return 0;
}