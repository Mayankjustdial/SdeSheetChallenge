#include<bits/stdc++.h>
int romanToInt(string s) {
    // Write your code here
    map<char,int> mp;
    mp['I']=1;
    mp['V']=5;
    mp['X']=10;
    mp['L']=50;
    mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    
    vector<int> v;
    for(int i=0;i<s.length();i++){
     v.push_back(mp[s[i]]);
    }
    
    int sum = 0;
    int n = v.size();
    for(int j=0;j<n-1;j++){
        if(v[j] >= v[j+1])
            sum = sum + v[j];
        else
            sum = sum - v[j];
    }
    sum = sum + v[n-1];
    return sum;
}
