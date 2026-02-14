#include<iostream>
using namespace std;
int main()
{
    int arr[4]={10,20};
    cout<<arr[1]<<" "<<arr[2]<<"\n";
    arr[2]=50;
    cout<<arr<<" "<<arr[2]<<endl;
    cout<<"Size of the array is "<<sizeof(arr);
    cout<<"Number of elements in array is "<<(sizeof(arr)/sizeof(arr[0]))<<"\n";
    cout<<"Array traversal  "<<endl;
    for(int x: arr)
        cout<<x<<endl;
}