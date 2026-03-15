#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>m;
    m.insert({10,200});
    m[5]=100;
    m.insert({3,300});
    for(auto &x:m)
        cout<<x.first<<" "<<x.second<<" ";
    m.erase(5);
    if(m.find(5)==m.end())
        cout<<"not found";
    else
        cout<<"found";
    return 0;
}