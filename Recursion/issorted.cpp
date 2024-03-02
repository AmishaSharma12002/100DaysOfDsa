#include<iostream>
using namespace std;
bool isorted(int arr[],int n)
{
    if(n == 0|| n == 1)
    {
        return true;
    }
    if(arr[0]>arr[1])
   {
     return false;
   }
    else 
    {
        bool res =   isorted(arr+1,n-1);
        return res;
    }
  
}
int main()
{
    int arr []= {1,2,3,4,5};
    bool res = isorted(arr,5);
    cout<<"Result: "<<res;
    return 0;
}