/*Kadane's Algorithm 
input: Array: {5,4,-1,7,8}
subarray: Contigeous Subarray
{5}             {4}
{5,4}           {4,-1}
{5,4,-1}......
{5,4,-1,7}.....
{5,4,-1,7,8}.....

find the largest subarry with the target sum

Approach 1: (BruteForce)
for(int i =0;i<n;i++)
{
    for(int j =0;j<n;j++)
    {
        for(int k= i;k<j;k++)
        sum+=arr[k]
    }
} 
TC: O(n^3)

Approach 2: {-2,1,-3,4,-2,3,1,-5,4}
initially sum =0 
maxi = -2 arr[0]
step 1: sum+=arr[i]
step 2: maxi = maximum(maxi,sum)
step 3: if(sum<0)
            sum = 0 
*/
#include<bits/stdc++.h>
using namespace std;
int maxSubarray(vector<int>&num)
{
    int sum =0;
    int maxi = num[0];
    for(int i =0;i<num.size();i++)
    {
        sum +=num[i];
        maxi = max(maxi,sum);
        if(sum<0)
        {
            sum = 0;
        }
       
    }
     return maxi;
}
int main()
{
    int size;
    vector<int>arraay;
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cin>>temp;
        arraay.push_back(temp);
    }
    cout<<"Max Contigous Array sum: "<<maxSubarray(arraay)<<endl;
    return 0;
}