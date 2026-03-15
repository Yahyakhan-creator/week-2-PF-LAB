#include <iostream>
using namespace std;
int main()
{
    int pin = 1234;
    int atmpin;
    int balance = 1000;
    int option;
    int amount;
    int login = 0;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter the pin:";
        cin >> atmpin;
        if (pin == atmpin)
        {
            cout << "successful" << endl;
            login = 1;
            break;
        }
        else
        {
            cout << "incoreect pina" << endl;
        }
    }
    if (login == 1)
    {
        cout << "1.check balance" << endl;
        cout << "2.deposit money" << endl;
        cout << "3.withdraw money" << endl;
        cout << "4.Exit" << endl;
        cin >> option;
        if (option == 1)
        {
            cout << "current balance=" << balance;
        }
        else if (option == 2)
        {
            cout << "Enter amount;";
             cin >> amount;
            balance = balance + amount;
            cout << "new balance =" << balance;
        }
        else if (option == 3)
        {
            cout << "Enter amount";
            cin >> amount;
            if (amount <= balance)
            {
                balance = balance - amount;
                cout << "new balance =" << balance;
            }
            else
            {
                cout << "insufficient balance";
            }
        }
        else
        {
            cout << "exit";
        }
    }
    return 0;
}