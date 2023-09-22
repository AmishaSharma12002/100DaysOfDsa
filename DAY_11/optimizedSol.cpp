/*Here the time complexity is O(n)*/
#include<bits/stdc++.h>
using namespace std;
void findEquiIndex(vector<int>arr,int n)
{
    int leftsum=0,sum=0;
    for(int i =0;i<n;i++)
    sum+=arr[i];
    for(int i=0;i<n;i++)
    {
        sum-=arr[i];
        if(leftsum==sum)
        cout<<"FOUND INDEX: ["<<i<<"]"<<endl;
        leftsum+=arr[i];
    }

}
int main()
{ //size of array
    int n;
    cin>>n;
    vector<int> arr;
    for(int i =0;i<n ;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
   findEquiIndex(arr,n);
    return 0;
}