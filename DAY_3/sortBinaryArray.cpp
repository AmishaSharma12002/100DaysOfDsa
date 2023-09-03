#include<bits/stdc++.h>
using namespace std;
vector<int> sortO1(vector<int>arr,int n)
{
    int zero =0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
    }
    int k =0;
    while (zero--)
    {
        arr[k++]=0;
    }
    while(k<n){
        arr[k++]=1;
    }
    return arr;
}
int main()
{
    int size;
    vector <int> arr;
    cout<<"Enter Size for vector:";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cout<<"Enter Element for ["<<i<<"]:";
        cin>>temp;
        arr.push_back(temp);
    };
     arr=sortO1(arr, size);
     for(auto it=arr.begin();it!=arr.end();it++)
     {
        cout<<*it;
     }
}