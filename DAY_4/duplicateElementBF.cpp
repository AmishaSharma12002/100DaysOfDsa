#include<bits/stdc++.h>
using namespace std;
int findDupli(vector<int> const &num)
{
    int n = num.size();
    vector<bool>visited(n+1);
    for(int i : num)
    {
        if(visited[i])
        {
            return i;
        }
        visited[i]=true;
    }
    return -1;
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
    cout << "The duplicate element is " << findDupli(num);
    return 0;
}