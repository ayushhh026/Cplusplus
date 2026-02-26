#include<iostream>
using namespace std;
template<typename T,int limit>
T arrMax(T arr[],int n)
{
    if(n>limit)
    {
        return 0;
    }
    T res=arr[0];
    for(int i=1;i<n;i++)
    {
        if (arr[i]>res)
            res=arr[i];
    }
    return res;
}
int main()
{
    int arr1[]={1,2,3,44,5,34,3,4};
    cout<<arrMax<int,50>(arr1,8)<<endl;
    cout<<arrMax<int,5>(arr1,8)<<endl;
    float arr2[]={2.3,4.5,1.1,34.4,344.6};
    cout<<arrMax<float,100>(arr2,5)<<endl;
    return 0;
}