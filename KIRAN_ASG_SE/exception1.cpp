//number not divide by zero
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the number of x :";
    cin>>x;
    cout<<"enter the number of y :";
    cin>>y;
    cout<<"enter the number of z :";
    cin>>z;

    try
    {
        if((x-y)!=0)
        {
            int r=z/(x-y);
            cout<<"the result is :"<<r<<endl;
        }
    else
    {
        throw(x-y);
    }
    }
    catch(int r)
    {
        cout<<"infinite result of x-y :"<<r<<endl;
    }
}