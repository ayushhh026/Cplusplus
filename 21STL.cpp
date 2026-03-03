#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,33,2,334,34,4,56,5,4};
    sort(arr,arr+9);
    for (int i=0;i<9;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    if(binary_search(arr,arr+9,334))
        cout<<"Present"<<endl;
    else
        cout<<"Not present"<<endl;
    return 0;
}