#include<iostream>
#include<vector>
using namespace std;

//railfence
//0. recursion
int countWays(int n, int k) {
        // code here
        if(n==1) return k;
        if(n==2) return k+k*(k-1);
        int ans = (k-1)*(countWays(n-1,k)+countWays(n-2,k));
        return ans;
    }
//1. memoization
int mem(int n , int k , vector<int>&dp)
    {
        if(n==1) return k;
        if(n==2) return k+k*(k-1);
        
        if(dp[n]!=-1) return dp[n];
        
        dp[n]=(k-1)*(mem(n-1,k,dp)+mem(n-2,k,dp));
        return dp[n];
        
    }
    int countWays2(int n, int k) {
        // code here
        vector<int>dp(n+1,-1);
        int ans = mem(n,k,dp);
        return ans;
    }

// 2.tabulation 
int countWays(int n, int k) {
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=k;
        if(n==1)return k;
        dp[2]=k+k*(k-1);
        for(int i=3 ; i<=n ; i++)
        {
            dp[i]=(k-1)*(dp[i-1] + dp[i-2]);
        }
        return dp[n];
    }
// 3.space optimised
int countWays(int n, int k) { 
        if(n==1) return k;
        if(n==2) return k+k*(k-1);
        int one=k;
        int two=k+k*(k-1);
        int ans;
        for(int i=3;i<=n;i++)
        {
            ans=(k-1)*(one + two);
            one = two;
            two=ans;
        }
        return ans;
    }


                                                            // 2D DP :
//memo knapsack 0-1 gfg
int mem(int W, vector<int> &val, vector<int> &wt ,int i,int n ,vector<vector<int>>&dp)
    {
        if(i>=n) return 0;
        if(dp[W][i]!=-1) return dp[W][i];
        int inc =0;
        if(wt[i]<=W) inc = val[i] +mem(W-wt[i],val,wt,i+1,n,dp);
        int exc=0+mem(W,val,wt,i+1,n,dp);
        dp[W][i]=max(inc,exc);
        return dp[W][i];
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=wt.size();
        vector<vector<int>>dp(W+1 , vector<int>(n+1,-1));
        return mem(W,val,wt,0,n,dp);
        
    }
//tabulation knapsack
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n=wt.size();
        vector<vector<int>>dp(W+1 , vector<int>(n+1,0));
        for(int i=0 ; i<=W;i++)
        {
            for(int j=n-1;j>=0;j--)
            {
                int inc=0;
                if(wt[j]<=i)
                    inc=val[j]+dp[i-wt[j]][j+1];
                int exc=dp[i][j+1];
                dp[i][j]=max(inc,exc);
            }
        }
        return dp[W][0];
    }
// SO knapsack , 1 1D array
int knapsack(int W, vector<int> &val, vector<int> &wt) {
    int n = wt.size();
    
    // DP array 'next': Stores the max value for each capacity (index 0 to W).
    // It represents results for the "next" item set (j+1 onward).
    vector<int> next(W + 1, 0);

    // Outer loop: Iterate items from last (n-1) down to first (0).
    // j is the current item being considered.
    for (int j = n - 1; j >= 0; j--) {
        
        // Inner loop: Iterate capacities from max (W) down to 0.
        // i is the current capacity.
        // Reverse order (W to 0) is key for O(W) space optimization.
        for (int i = W; i >= 0; i--) {
            
            int inc = 0; // Value if item j is included
            
            // 1. Inclusion Choice: Check if item j fits.
            if (wt[j] <= i) {
                // value of item j + max value for remaining capacity (i - wt[j]) 
                // from the *next* item set (stored in 'next').
                inc = val[j] + next[i - wt[j]];
            }
            // 2. Exclusion Choice: Max value for capacity 'i' without item j.
            // This is simply the previously calculated best value for this capacity, next[i].
            int exc = next[i]; 
            // Update the array: Store the maximum of (Include, Exclude) for capacity 'i'.
            next[i] = max(inc, exc);
        }
    }
    // Final result is the max value for the full capacity W.
    return next[W];
}
int main()
{
    int n,k;
    cout<<"Enter n and k: ";
    cin>>n>>k;
    cout<<"Number of ways to paint the fence: ";
    cout<<countWays(n,k);
    return 0;
}