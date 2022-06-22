#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int missing=0;
    int repeat=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            repeat=arr[i];
        }
        if(arr[i+1]==arr[i]+2){
            missing=arr[i]+1;
        }
    }
    if(arr[0] !=1){
        missing=1;
    }
    if(arr[n-1]!=n){
        missing=n;
    }
    return {missing,repeat};
     
    
}
