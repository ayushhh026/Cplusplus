#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to check : ";
    cin>>n;
    if(n%2==0)
        cout<<"It is an even number";
    else if(n%2!=0)
        cout<<"It is an odd number";
    else
        cout<<"Invalid number";
}
