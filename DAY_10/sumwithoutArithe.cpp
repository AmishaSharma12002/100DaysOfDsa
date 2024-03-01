#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    while(y!=0)
    {
        int c = x & y;
        x = x ^ y;
        y = c << 1;
    }
    cout<<(x)<<" "<<endl;
    return 0;
}