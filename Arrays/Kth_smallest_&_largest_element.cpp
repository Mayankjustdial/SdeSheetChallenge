#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    vector<int>ans;
    sort(arr.begin(),arr.end());
    //kth smallest
    ans.push_back(arr[k-1]);
    //kth largest
    ans.push_back(arr[n-k]);
    
    return ans;
    
    
}