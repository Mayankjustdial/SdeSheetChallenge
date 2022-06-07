#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int ans=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            ans++;
        }
    }
    return ans+1;
}

// 2nd method using set 
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    set<int>s;
    for(int i =0 ;i<n;i++){
    s.insert(arr[i]);
        
    }
    return s.size();
}