#include<iostream>
using namespace std;
int main()
{
    string name;
    int x,y;
    cout<<"Enter your name : ";
    // cin>>name; gives output only till space for full line use getline
    getline(cin, name);
    cout<<"Enter your age and birth year";
    cin>>x>>y;
    cout<<"Hi : "<<name<<endl;
    cout<<"Welcome "<<name<<" your age is "<<x;
}