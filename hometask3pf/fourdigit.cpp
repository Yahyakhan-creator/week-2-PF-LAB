#include <iostream>
using namespace std;
int main()
{
int digit1;
int digit2;
int digit3;
int digit4;
 
int number;
int number2;
int number3;
int number4;
cout<<"Enter a 4 digit number:";
cin>> number;

number2=number/10;
number3=number2/10;
number4=number3/10;


digit1=number %10;
digit2=number2%10;
digit3=number3%10;
digit4=number4%10;

sum=digit1+digit2+digit3+digit4;

cout<<"sum of individual digits:"<<sum;

return 0;
}
