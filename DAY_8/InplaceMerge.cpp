#include<bits/stdc++.h>
using namespace std;
void printVector(int arr[],int n)
{
    for (int i =0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inplaceMerge(int arr[],int arr2[],int n,int m)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i]>arr2[0])
        {
            swap(arr[i],arr2[0]);
            int first = arr2[0];
            
            int k ;
            for(k=1;k<m&&arr2[k]<first;k++)
            {
                arr2[k-1]=arr2[k];
            }
            arr2[k-1] = first;
        }
    }
}
int main()
{
    int arr[10],arr2[10];
    int size1,size2;
    cout<<"Enter size and data of Array 1:";
    cin>>size1;
    for(int i =0;i<size1;i++)
    {
       cin>>arr[i];
    }

    cout<<"Enter size and data of Array 2:";
    cin>>size2;
     for(int i =0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    printVector(arr,size1);
    printVector(arr2,size2);
    inplaceMerge(arr,arr2,size1,size2);
    printVector(arr,size1);
    printVector(arr2,size2);
    return 0;
}