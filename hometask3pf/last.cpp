#include <iostream>
using namespace std;
int main()
{
int num;
int add;

cout<<"enter 4 integer: ";
cin>>num;

add=num%10+num/10%10+num/100%10+num/1000%10;

cout<<"sum= "<<add;

return 0;
}
