#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(100);
    pq.push(12);
    pq.push(19);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}