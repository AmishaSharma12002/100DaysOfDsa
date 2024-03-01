/*
Using multimap to print all subarrays with 0 sum
*/
#include<bits/stdc++.h>
using namespace std;
void printAllsubarray(vector<int>num,int n)
{
    unordered_multimap<int,int> map;
    map.insert(pair<int,int>(0,-1));
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum +=num[i];
        if(map.find(sum)!=map.end())
        {
            auto it = map.find(sum);
            while(it!=map.end()&&it->first==sum)
            {
               cout << "Subarray [" << it->second + 1 << "…" << i << "]\n";
                it++; 
            }
        }
                map.insert(pair<int, int>(sum, i));

    }
}
int main()
{
    
	int size;
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
     printAllsubarray(arr, size);
     for(int i =0;i<size;i++)
     {
        cout
     }

}
/*
Tc: O(n)
*/