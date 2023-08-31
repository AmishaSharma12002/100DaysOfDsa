#include <bits/stdc++.h>
using namespace std;
bool subArrayExists(vector <int> arr, int n)
{
	for (int i = 0; i < n; i++) {
		int sum = arr[i];
		if (sum == 0)
			return true;
		for (int j = i + 1; j < n; j++) {
			sum += arr[j];
			if (sum == 0)
				return true;
		}
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

	if (subArrayExists(arr, size))
		cout << "Found a subarray with 0 sum";
	else
		cout << "No Such Sub Array Exists!";
	return 0;
}

// Time Complexity: O(n^2)
