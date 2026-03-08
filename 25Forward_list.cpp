#include<iostream>
#include<forward_list>
using namespace std;
int main()
//one sided list insert and delete from last
{
    forward_list <int> l ={20,30,40,10,50,10};
    l.push_front(5);
    l.push_front(10);
    l.pop_front();
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;
    l.remove(10);
    forward_list <int> l2;
    l2.assign(l.begin(),l.end());
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;
    auto it = l.insert_after(l.begin(),10);
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;
    it=l.insert_after(it,{2,3,5});
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;
    it=l.erase_after(it);
    for(int x:l)
        cout<<x<<" ";
    cout<<endl;
    l.sort();
    for(int x:l)
        cout<<x<<" ";
    return 0;
}