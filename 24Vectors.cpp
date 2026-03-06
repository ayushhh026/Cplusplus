#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v{10,20,30,40,50};
    v.push_back(60);
    v.push_back(70);
    for(int & r : v)
        cout<<r<<" ";
    v.pop_back();
    cout<<"\nAfter pop_back"<<endl;
    for(int i=0;i<v.size();i++)
        cout<<i<<" ";
    cout<<endl;
    cout<<(v.front())<<endl;
    cout<<(v.back())<<endl;
    auto it = v.insert(v.begin(),100);
    v.insert(v.begin()+2,2,200);
    for(int & x : v)
        cout<<x<<" ";
    cout<<endl;
    v.erase(v.begin());
    for(int & r : v)
        cout<<r<<" \n";
    return 0 ;
}