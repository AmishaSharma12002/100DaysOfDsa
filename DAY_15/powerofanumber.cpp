#include<iostream>
using namespace std;
int power(int n,int p)
{
   return;
}
int main()
{
    startagain:
    int n,p;
    cin>>n>>p;
    if(n==0&& p==0)
    {
        cout<<"Not defined try again!!\n";
        goto startagain;
    }
    cout<<power(n,p);
    return 0;
}