//leap year
#include <iostream>
using namespace std;
int main()
{
    //method 1
    int q,n;
    cout<<"idenfied year:";
    cin>>n;
    (n%100==0)?((n%400==0)?(cout<<"leap year"):(cout<<"not a leap year")):((n%4==0)?(cout<<"leap year"):(cout<<"not a leap year"))<<endl;
//method 2
cout<<"identified year2:";    
cin>>q;

    if(q%400==0)
    {
        cout<<"leap year";
    }
    else if(q%100==0)
    {
        cout<<"not a leap year";
    }
    else if(q%4==0)
    {
       cout<<"leap year";
    }
    else
    {
        cout<<"not a leap year";
    }
    
}