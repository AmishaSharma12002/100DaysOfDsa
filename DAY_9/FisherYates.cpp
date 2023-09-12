#include<bits/stdc++.h>
using namespace std;
void swap(int *i, int *j)
{
   *i = *i ^ *j;
   *j = *i ^ *j;
   *i = *i ^ *j;

}
void shuffle(vector<int>&arr,int n )
{
    for(int i =arr.size()-1;i>=1;i--)
    {
        int j = rand()%(i);
        swap(&arr[i],&arr[j]);
    }
    
}
int main(){
   vector<int> arr;
   int n;
   cin>>n;
   for(int i=0 ;i < n;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
   }
   srand(time(NULL));
   shuffle(arr,n);
   for(int i =0;i<arr.size();i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;

}