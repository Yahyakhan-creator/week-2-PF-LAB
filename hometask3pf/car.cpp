#include <iostream>
using namespace std;
 int main()
{
int initial;
cout<<"Enter initial velocity(m/s) :";
cin>>initial;

int acc;
cout<<"Enter acceleration (m/s*s) :";
cin>>acc;

int time;
cout<<"enter time(s) :";
cin>>time;

int final;
final=(acc*time)+initial;
cout<<"final velocity(m/s):"<<final;

return 0;
}

