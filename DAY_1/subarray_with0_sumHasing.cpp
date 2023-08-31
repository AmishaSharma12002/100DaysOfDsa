#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
bool subArrayExist(vector<int>arr, int size)
{
    unordered_set<int> set;
    set.insert(0);
    int sum = 0;
    for(int i = 0;i<size;i++)
    {
        sum+=arr[i];
        if(set.find(sum)!=set.end())
        return true;
        else
        set.insert(sum);
    }
    return false;
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
    };

	if (subArrayExist(arr, size))
		cout << "Found a subarray with 0 sum";
	else
		cout << "No Such Sub Array Exists!";
	return 0;
}