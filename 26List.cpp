#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(5);
    l.push_front(20);
    l.push_back(23);
    l.push_front(10);
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    l.pop_front();
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    l.pop_back();
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    auto it=l.begin();
    it++;
    it=l.insert(it,15);
    l.insert(it,2,7);
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    it =l.begin();
    it=l.erase(it);
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    l.remove(10);
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    list <int>l1={1,2,3,4,5,6,7,8,9,100};
    l.merge(l1);
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    l.sort();
    for(auto x:l)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}