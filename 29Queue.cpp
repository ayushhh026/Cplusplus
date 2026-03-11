#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(5);
    q.push(10);
    q.push(33);
    cout<<q.size()<<endl;
    cout<<q.front()<<" "<<q.back()<<endl;
    while(q.empty()==false)
     {
        cout<<q.front()<<" ";
        q.pop();
     }
    return 0;
}