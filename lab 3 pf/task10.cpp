#include <iostream>
using namespace std;
main()
{
cout<<"Enter the number of wins:  ";
int wins;
cin>>wins;

cout<<"Enter the number of draws: ";
int draw;
cin>>draw;

cout<<"Enter the number of losses: ";
int loss;
cin>>loss;

int total;
total= (wins*3) + (draw*1);

cout<<"Pakistan has obtained "<< total << " points in Asia Cup Tournament" << endl;
return 0;
}