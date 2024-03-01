#include<bits/stdc++.h>
using namespace std;
bool consecutiveCheck(vector<int>arr,int i ,int j , int min ,int max)
{
    if(max-min!=j-i)
    {
        return false;
    }
}
void largestSubarray(vector<int>arr,int n)
{
    int len = 1;
    int srt = 0, end =0;
    for(int i = 0;i<n-1;i++)
    {
        int minval = arr[i],maxval = arr[i];
        for(int j = i+1;j<n;j++)
        {
            minval = min(minval,arr[j]);
            maxval = max(maxval,arr[j]);

            if(consecutiveCheck(arr,i,j,minval,maxval))
            {
                if(len<maxval-minval+1)
                {
                    len = maxval-minval+1;
                    srt = i , end = j;
                }
            }
        }
    }

}
int main()
{
    vector<int>arr;
    int n ;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);    
    }
    return 0;

}