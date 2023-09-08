/*Applying Quick Sort....*/
#include<bits/stdc++.h>
using namespace std;
int compare(const void *a, const void *b)
{
    return *(int*)a-*(int*)b;
}
void findMaxProduct(vector<int>arr,int n)
{
    int max1 = arr[0], max2 = INT_MIN;
    int min1=arr[0],min2 = INT_MAX;
    for(int i =1;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]>max2)
        {
            max2=arr[i];
        }
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2) {
            min2 = arr[i];
        }
    
    }
    if (max1 * max2 > min1 * min2) {
        printf("Pair is (%d, %d)", max1, max2);
    }
    else {
        printf("Pair is (%d, %d)", min1, min2);
    }
}
int main()
{
    vector<int>arr;
    int size;
    cin>>size;
    for(int i = 0;i<size;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    findMaxProduct(arr,size);

    return 0;
}