#include<bits/stdc++.h>
using namespace std;
void findEquiIndex(vector<int>arr,int n)
{
    int left,right;
    for(int i =0;i<n;i++)
    {
        //finding left sum
        left = 0;
        for(int j =0;j<i;j++)
        {
            left +=arr[j];
        }
        right = 0;
        for(int j = i+1;j<n;j++)
        {
            right += arr[j]; 
        }
        if(left == right)
        {
            cout<<"Found at index:["<<i<<"]"<<endl;
        }

    }
}
int main()
{
    //size of array
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