#include <bits/stdc++.h>
using namespace std;

    int findpath(int m,int n, vector<vector<int>>& dp){
        
         if(m==0&&n==0)
         return 1;
         if(m<0||n<0)
         return 0;
         if(dp[m][n]!=-1)
         return dp[m][n];
         int up=findpath(m-1,n,dp);
         int left=findpath(m,n-1,dp);
         dp[m][n]= up+left;
         return dp[m][n];

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return findpath(m-1,n-1,dp);
    }
int main() {
  int m=3,n=7;
  cout<<uniquePaths(m,n);
    return 0;
}