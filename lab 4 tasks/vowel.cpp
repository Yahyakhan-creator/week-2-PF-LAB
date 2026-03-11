 #include <iostream>
using namespace std;
int main()
{
    char vowel;
    cout<<"enter any character in lower case:";
    cin>>vowel;

    if(vowel=='a') ||(vowel=='e') || (vowel=='i') || (vowel=='o') ||(vowel=='u')
{
    cout<<"it is a vowel";    
    }
else
{
cout<<"its a consonant";   
     }

return 0;

}