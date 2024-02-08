#include<bits/stdc++.h>
using namespace std;

vector<int> printLeadersBruteForce(int arr[], int n) {

  vector<int> ans;
  
  for (int i = 0; i < n; i++) {
    bool leader = true;
    for (int j = i + 1; j < n; j++)
      if (arr[j] > arr[i]) {
 
        leader = false;
        break;
      }

    if (leader)
    ans.push_back(arr[i]);

  }
  
  return ans;
}

int main() {
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

  vector<int> ans = printLeadersBruteForce(arr,n);
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}

