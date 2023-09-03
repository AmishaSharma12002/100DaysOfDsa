#include<bits/stdc++.h>
using namespace std;
void printAllSubarrays(vector<int>arr,int n)
{
    for(int i =0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0){
                cout<<"Subarray["<<i<<"..."<<j<<"]\n";
            }
        }

    }
}
int main()
{
    vector<int>arr;
    int size;
    cout<<"Enter the size of vector: ";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    printAllSubarrays(arr,size);
    
    return 0;
}