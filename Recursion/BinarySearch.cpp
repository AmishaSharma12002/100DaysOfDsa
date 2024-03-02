#include<iostream>
using namespace std;
int binarySearch(int be,int n,int arr[],int ele)
{
    if(n>=be)
    {
    int m = (be+n)/2;
    if(arr[m] == ele)
    return m;
    else if(arr[m]>ele){
        return binarySearch(be,m-1,arr,ele);
    }
    else {
        return binarySearch(m+1,n,arr,ele);
    }

    }
    return -1;
     
}
int main()
{
    int n,ele;
    cout<<"Enter n for array: ";
    cin>>n;
    cout<<"\nEnter elements in array must be sorted: ";
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter element u want to search for: ";
    cin>>ele;

   int res = binarySearch(0,n,arr,ele);
   if(res == -1)
   {
    cout<<"\nElement do not exist!!!!";
   }
   else {
    cout<<"Element found at Index: "<<res;
   }
   return 0;

}