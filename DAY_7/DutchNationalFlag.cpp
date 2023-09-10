#include<bits/stdc++.h>
using namespace std;
void swap(vector<int>arr,int i,int j)
{
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void threeWayPartition(vector<int>arr,int n )
{
    
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low+=1;
            mid+=1;
        }
        else if(arr[mid]==1)
        {
            mid+=1;
        }
        else{
            swap(arr[mid],arr[high]);
            high-=1;
        }
    }
    for (auto x : arr){cout <<x<<" ";}
}
int main()
{
    vector<int>arr;
    int size;
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    threeWayPartition(arr, size);
    
    return 0;
}