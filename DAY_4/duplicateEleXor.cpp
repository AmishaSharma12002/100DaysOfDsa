#include<bits/stdc++.h>
using namespace std;
int findDupli(vector<int>num,int n)
{
    int res=0;
    for (int i = 0; i < n; i++) {
        res ^= num[i];
    }
    for (int i = num[i]; i <= num[n-1]; i++) {
        res ^= i;
    }
    return res;
}
int main()
{
    vector<int>num;
    int size;
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    cout << "The duplicate element is " << findDupli(num,size);
    return 0;
}