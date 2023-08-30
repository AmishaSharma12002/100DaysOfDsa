/*
Task: Task is to find sum of a pair in the given unsorted array 
*/ 
#include<iostream>
#include<vector>
using namespace std;
pair<int,int> pairCheck(vector<int>arr,int size,int target)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main()
{
    int size,target;
    vector <int> arr;
    cout<<"Enter Size for vector:";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cout<<"Enter Element for ["<<i<<"]:";
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"\nEnter Target: ";
    cin>>target;
     pair<int, int> p=pairCheck(arr,size,target);
     if(p.first==-1 && p.second ==-1) 
     {
        cout<<"Pair Not found!!";
     }
    else{
        cout << "Pair with sum == target : ";
        cout<<arr[p.first]<<" "<<arr[p.second];
    }
    return 0;
}

/*Time Complexity = O(n^2)*/