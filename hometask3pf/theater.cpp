#include <iostream>
using namespace std;
int main()
{
string name;
cout<<"Enter the movie name:";
cin>>name;

int adultprice;
cout<<"Enter the adult ticket price:";
cin>>adultprice;

int childprice;
cout<<"enter the child ticket price:";
cin>>childprice;

int adultsold;
cout<<"Enter the adult ticket sold:";
cin>>adultsold;

int childsold;
cout<<"enter the child ticket sold:";
cin>>childsold;

int donation;
cout<<"Enter the percentage of amount to be donated:";
cin>>donation;

cout<<"----------------------------------------"<<endl;
cout<<"movie:"<< name<<endl;

int total;
total=(adultprice*adultsold)+(childprice*childsold);
cout<<"total amount generated from ticket sales:"<<total<<endl;

int charity;
charity=(total/100)*(donation);
cout<<"donation to charity:"<< charity<<endl;

int remaining;
remaining=total-charity;
cout<<"remaining amount after donation  "<< remaining<<endl;

return 0;
}
