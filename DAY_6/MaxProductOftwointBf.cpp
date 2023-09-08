#include<bits/stdc++.h>
using namespace std;
pair<int,int> findMaxProduct(vector<int>arr,int n )
{
    if(n<2)
    {
         return {0,1};
    }
   
    int maxproduct = INT_MIN;
    int max_i,max_j;
    for (int i=0 ; i < n-1; i++){
        for(int j =i+1;j<n;j++)
        {
            if(maxproduct<arr[i]*arr[j])
            {
                maxproduct=arr[i]*arr[j];
                max_i=i;max_j=j;
            }
        }
    }
    return{max_i,max_j};
}
int main()
{
    vector<int> arr;
    int size;
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    pair<int,int>p = findMaxProduct(arr,size);
    cout<<"("<<arr[p.first]<<" "<<arr[p.second]<<")";
    return 0;
}