#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(5);
    ms.insert(2);
    ms.insert(5);
    ms.insert(10);
    for(int x:ms)
        cout<<x<<" ";

    cout<<"Count of 5 is : "<<ms.count(5);
    return 0;
}