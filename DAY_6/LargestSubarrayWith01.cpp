#include<bits/stdc++.h>
using namespace std;
void findLargestSubarray(vector<int>arr,int n)
{
    unordered_map<int,int> map;
    map[0]=-1;
    int len =0;
    int end=-1;
    int sum =0;
    for (int i=0; i<n ;++i){
        sum+=(arr[i]==0)?-1:1;
        if(map.find(sum)!=map.end())
        {
            if(len<i-map[sum])
            {
                len = i-map[sum];
                end = i;
            }
        }
        else{
            map[sum]=i;
        }
    }
    if(end!=-1)
    {
        cout << "[" << end - len + 1 << ", " << end << "]";

    }
    else{
        cout<<"No Subarray Exist";
    }

}
int main()
{
    vector<int>array;
    int size;
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }
    findLargestSubarray(array,size);
    return 0;
}