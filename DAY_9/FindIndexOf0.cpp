#include<bits/stdc++.h>
using namespace std;
int findIndexOfzero(vector<int>arr,int n)
{
    int mxcnt=0;
    int mxidx=-1;
    int prevZeroidx = -1;
    int cnt =0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
        }
        else{
            cnt=i-prevZeroidx;
            prevZeroidx = i;
        }
        if (cnt > mxcnt)
        {
            mxcnt = cnt;
            mxidx = prevZeroidx;
        }
    }
    return mxidx;
}
int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    for(int i= 0 ; i < n ; ++i){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int idx = findIndexOfzero(arr,n);
    if (idx != -1) {
        cout<<"Index to be replaced is " << idx;
    }
    else {
        cout<<"Invalid input";
    }
    return 0;
}