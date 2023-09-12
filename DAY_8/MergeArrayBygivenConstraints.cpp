#include<bits/stdc++.h>
using namespace std;
void merge(int X[], int Y[], int m, int n)
{
        int k = m + n + 1;
        while (m >= 0 && n >= 0)
    {
        if (X[m] > Y[n]) {
            X[k--] = X[m--];
        }
        else {
            X[k--] = Y[n--];
        }
    } 
    while (n >= 0) {
        X[k--] = Y[n--];
    }
 
    for (int i = 0; i < n; i++) {
        Y[i] = 0;
    }
}
void rearrange(int X[], int Y[], int m, int n)
{
    if (m == 0) {
        return;
    }
 
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        if (X[i] != 0) {
            X[k++] = X[i];
        }
    }
 
    merge(X, Y, k - 1, n - 1);
}
 
int main()
{
    vector<int> A,B;
    int n,m;
    cin>>n>>m;
    cout<<"Array 1:";
    for(int i =0;i<n;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    cout<<"Array 2:";
    for(int i =0;i<n;i++)
    {
        int temp;
        cin>>temp;
        B.push_back(temp);
    }

return 0;
}