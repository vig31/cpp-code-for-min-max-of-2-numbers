#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<< "enter 2 numbers to find max and min" << endl;
    cin>>a>>b;
    if (a>b)
    {
        cout<< "max is"<< a<< endl; 
        cout<< "min is"<< b<< endl ;
    }
    else
    {
        cout<<"max is"<< b << endl;  
        cout<< "min is"<< a<< endl; 
    }
    return 0 ;
}