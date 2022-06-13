#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int i = 0;
    int j =0;
    int k =0;
    vector<int>arr3;
    while(i<m && j<n){
      if(arr1[i]<arr2[j]){
       arr3.push_back(arr1[i]);
       i++;
       k++;
      }
       else{
           arr3.push_back(arr2[j]);
           j++;
           k++;
       }
    }
    while(i<m){
     arr3.push_back(arr1[i]);
       i++;
       k++;
    }
    while(j<n){
     arr3.push_back(arr2[j]);
       j++;
       k++;
    
    }
    return arr3;
    
}