#include<iostream>
using namespace std;

string alphacheck(char ch)
{
    if(ch>='A'&& ch<='Z')
   { 
    return "u entered capital letter";
    }
    else if(ch>='a' && ch>='z')
    {
        return"u enterred small letter ";
    }
}
    int main()
{
        char ch;
    cout<<"enter a character ";
    cin>>ch;
    cout<<alphacheck(ch)<<endl;
    return 0;
}