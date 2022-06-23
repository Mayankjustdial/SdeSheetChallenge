#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
     long ans = 1;
        for(int i = m+n-2, j = 1; i >= max(m, n); i--, j++) 
            ans = (ans * i) / j;
        return ans;
}