#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
        int n = arr.size();
        int k = arr.size()/3;
        vector<int> ans;
        unordered_map<int,int> umap;
        for(int i =0 ; i<n ; i++){
            int key = arr[i];
            umap[key]++;
        }
        for(auto itr= umap.begin(); itr!= umap.end() ; itr++){
            if(itr->second > k)
                ans.push_back(itr->first);
        }
        return ans;
}