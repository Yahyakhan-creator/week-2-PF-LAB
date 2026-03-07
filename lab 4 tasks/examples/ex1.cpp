#include <iostream>
using namespace std;
int main()
{
int shopping;
cout<<"Enter The Bill Amount:";
cin>>shopping;
int discount;
if(shopping>=5000)

{
discount = (shopping/100) * 5;
}
else
{
discount = (shopping/100)* 10;
}
int bill;
bill = shopping - discount;
cout<<"the final price is :"<< bill;
return 0;
}