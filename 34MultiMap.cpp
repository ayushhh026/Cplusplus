#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,int>mp;
    mp.insert({10,200});
    mp.insert({5,233});
    mp.insert({3,300});
    mp.insert({5,312});
    for(auto &x:mp)
        cout<<x.first<<" "<<x.second<<" ";
    mp.erase(5);
    if(mp.find(5)==mp.end())
        cout<<"not found";
    else
        cout<<"found";
    return 0;
}