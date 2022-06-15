
void solve(string &s, int index, vector<string>& ans){
    //basecase
 if(index == s.size()){
   ans.push_back(s);
   return ;
 }
    for(int i=index ;i<s.size();i++){
        swap(s[i],s[index]);
        solve(s,index+1,ans);
        //backtracking
        swap(s[i],s[index]);
    }
}


vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    solve(s,0,ans);
    return ans;
}
