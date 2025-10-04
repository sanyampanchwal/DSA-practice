#include<iostream>
#include<vector>
#include<string>
using namespace std;


//LC 1143. Longest Common Subsequence
// Memoization :
int mem(string &a ,string &b, int i, int j, vector<vector<int>> &dp)
    {
        if(i>=a.length() || j>=b.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];

        int ans=0;
        if(a[i]==b[j]) ans = 1+mem(a,b,i+1,j+1,dp);
        else
            ans = 0+ max(mem(a,b,i,j+1,dp),mem(a,b,i+1,j,dp));
        dp[i][j]=ans;
        return dp[i][j];
}
int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length()+1 , vector<int>(text2.length()+1,-1));
        return mem(text1,text2,0,0,dp);
}

// Tabulation :
int longestCommonSubsequence(string a, string b) {
        int n=a.length();
        int m=b.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i = n-1 ; i>=0; i--){
            for(int j=m-1 ; j>=0 ; j--)
            {
                if(a[i]==b[j]) dp[i][j] = 1 + dp[i+1][j+1];
                else dp[i][j] = max(dp[i+1][j] , dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
// Space Optimised :
int longestCommonSubsequence(string a, string b) {
        vector<int>curr(a.length()+1,0);
        vector<int>next(a.length()+1,0);
        //switch loops
        for(int j=b.length()-1 ;j>=0 ; j--)
            {
            for(int i = a.length()-1 ; i>=0; i--)
                {
                if(a[i]==b[j]) curr[i] = 1+next[i+1];
                else curr[i] = max(next[i],curr[i+1]);
            }
            next=curr;
        }  
        return curr[0];
    }

//72. Edit Distance ************ imp *************
//memoization
    int mem(string &a,string &b,int i,int j ,vector<vector<int>>&dp){
        int ans=0;
        if(i>=a.length())
            return b.length()-j;
        if(j>=b.length())
            return  a.length()-i;
        if(dp[i][j] != -1) return dp[i][j];
        if(a[i]==b[j])
            ans=0+mem(a,b,i+1,j+1,dp);
        else{
            int op1=1+mem(a,b,i,j+1,dp);
            int op2=1+mem(a,b,i+1,j,dp);
            int op3=1+mem(a,b,i+1,j+1,dp);
            ans=min(op1,min(op2,op3));
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
    int minDistance(string word1, string word2) {
        int i=0,j=0;
        int n=word1.length(),m=word2.length();
        vector<vector<int>> dp(n+1 ,vector<int>(m+1,-1));
        int ans=mem(word1,word2,i,j,dp);
        return ans;
    }

//tabulation 
int minDistance(string word1, string word2) {
    int n = word1.length(), m = word2.length();
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

    // Base cases
    for(int col = 0; col <= m; col++)
        dp[n][col] = m - col;
    for(int row = 0; row <= n; row++)
        dp[row][m] = n - row;
    
    // Fill DP bottom-up
    for(int i = n-1; i >= 0; i--) {
        for(int j = m-1; j >= 0; j--) {
            if(word1[i] == word2[j]) {
                dp[i][j] = dp[i+1][j+1];
            } else {
                int replaceOp = 1 + dp[i+1][j+1];
                int insertOp  = 1 + dp[i][j+1];
                int deleteOp  = 1 + dp[i+1][j];
                dp[i][j] = min({replaceOp, insertOp, deleteOp});
            }
        }
    }

    return dp[0][0];
}

//SO
int minDistance(string a, string b) {
    int n = a.length(), m = b.length();
    vector<int> next(n+1, 0), curr(n+1, 0);

    // Base case: when b is exhausted
    for (int i = 0; i <= n; i++)
        next[i] = n - i;

    // Iterate b backwards
    for (int j = m-1; j >= 0; j--) {
        curr[n] = m - j; // when a is exhausted, only insertions left
        for (int i = n-1; i >= 0; i--) {
            if (a[i] == b[j]) curr[i] = next[i+1];
            else {
                int replaceOp = 1 + next[i+1];
                int insertOp  = 1 + next[i];
                int deleteOp  = 1 + curr[i+1];
                curr[i] = min({replaceOp, insertOp, deleteOp});
            }
        }
        next = curr;
    }

    return next[0];
}

