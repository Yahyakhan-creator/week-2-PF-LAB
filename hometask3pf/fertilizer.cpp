#include <iostream>
using namespace std;
 int main()
{
int weight;
cout<<"Enter the size of fertilizer bag in pounds:";
cin>>weight;

int cost;
cout<<"enter the cost of bag :$";
cin>>cost;

int size;
cout<<"enter the area in square feet that can be covered by bag:";
cin>>size;

int pound;
pound=cost/weight;
cout<<"cost of fertilizer per pound is:"<< pound<<endl;

int area;
area=cost/size;
cout<<"cost of fertilizing per square feet is $"<< area;

return 0;
}

