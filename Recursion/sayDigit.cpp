#include<iostream>
using namespace std;
void sayDigi(int n , string arr[])
{
    if(n == 0)
    return;
    int digi = n %10;
    n = n/10;
    sayDigi(n,arr);
    cout<<arr[digi]<<" ";
}
int main()
{
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    sayDigi(n,arr);
    return 0;
}