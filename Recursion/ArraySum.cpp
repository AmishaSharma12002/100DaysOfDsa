#include<iostream>
using namespace std;

int findSum(int arr[],int n)
{
    if(n==0)
    { return 0;}
    if(n==1)
    {return arr[0];}
    int sum = arr[0] +  findSum(arr+1, n-1);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res = findSum(arr,n);
    cout<<"Result: "<<res;
    return 0;
}