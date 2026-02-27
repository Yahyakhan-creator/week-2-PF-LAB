#include <iostream>
using namespace std;
main()
{
cout<<"Enter the current world population:  ";
int pop;
cin>>pop;

cout<<"Enter the monthly birth rate (Number of births per month) : ";
int birth;
cin>>birth;

int decade;
decade = birth * 360 +pop;

  cout<<"population in three decades will be:" << decade;
return 0;
}
