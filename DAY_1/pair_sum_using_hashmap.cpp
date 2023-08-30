/*
Task: Task is to find sum of a pair in the given unsorted array 
*/ 
#include<bits/stdc++.h>
using namespace std;
void pairCheck(vector<int>arr,int size,int target)
{
    unordered_map<int,int>map;
    for (int i = 0; i < size; i++)
    {
        if (map.find(target - arr[i]) != map.end())
        {
            cout << "Pair found (" << arr[map[target - arr[i]]] << ", " 
                 << arr[i] << ")\n"; // check whether arr[target - arr[i]] exist or not 
            return;
        }
        map[arr[i]] = i;
    }
    cout << "Pair not found";
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
    pairCheck(arr,size,target);   
}