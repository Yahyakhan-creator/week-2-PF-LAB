#include <iostream>
using namespace std;
int main()
{
    int days;
    int dollarperday;
cout<<"Enter the working days :";
cin>>days;
cout<<"enter the dollars u earn in a day:";
cin>>dollarperday;
int monthly;
monthly=days*dollarperday;
int bonus;
bonus=monthly*2.5;
int yearly;

yearly=bonus*12;
int yearlyaftertax;

yearlyaftertax=yearly/25;
int dintopkr;

dintopkr=290*yearlyaftertax;
cout<<"earing in $ is"<<yearlyaftertax<<endl;

cout<<"your earning in pkr is"<<dintopkr;
}