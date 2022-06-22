#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    unordered_map<int,int>umap;
        int sum =0;
        int maxlen= 0;
    int n = arr.size();
        for(int i =0 ;i<n;i++){
            sum=sum+arr[i];
            if(sum==0){
                maxlen = i+1;
            }
            else if(umap.find(sum)!=umap.end()){
                maxlen = max(maxlen,i-umap[sum]);
            }
            else{
                umap[sum]=i;
            }
            
        }
        return  maxlen;
}