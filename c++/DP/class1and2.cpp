#include <iostream>
#include <vector>

using namespace std;


int solveByMem(int n,vector<int>dp)
    {
        if(n==1 || n==0) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n]=solveByMem(n-1,dp) + solveByMem(n-2,dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return solveByMem(n,dp);
    }
int tabFib(int n) {
        if(n==0 || n==1)return n;
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
int fibSpaceOpt(int n) {
        if(n==0 || n==1)return n;
        int a=0,b=1,c;
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }

//house robber 1 : memoization
int solveMem(vector<int>&nums , int i,int n ,vector<int> &dp)
    {
        if(i>=n)return 0;
        if(dp[i]!=-1) return dp[i];

        int inc=nums[i]+solveMem(nums,i+2,n,dp);
        int exc=0+solveMem(nums,i+1,n,dp);
        dp[i]=max(inc , exc);
        return dp[i];

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int ans=solveMem(nums,0,n,dp);

        return ans;
        
    }
//house robber 1 : tabulation
    int rob(vector<int>& nums) {
        //Tabulation :
        int n =nums.size();
        vector<int>dp(n,-1);
        dp[n-1]=nums[n-1];   // base to build upon
        for(int i=n-2;i>=0;i--)
        {
            int temp=0;
            if(i+2<n) temp =dp[i+2];
            int inc = nums[i] +temp;
            int exc = dp[i+1];
            dp[i]=max(inc,exc);
        }
        return dp[0];
        
    }
// space optimised house robber : 
int rob(vector<int>& nums) {
        // Space opt:
        int n=nums.size();
        int prev=nums[n-1]; //last ele
        int next=0;
        int curr;
        for(int i=n-2;i>=0;i--)
        {
            int inc = nums[i] + next;
            int exc = prev;
            curr = max(inc , exc);
            next=prev;
            prev=curr;
        }
        return prev;
}

// coin change : memoization
int algo(vector<int>& coins, int amount , vector<int>&dp) {
        int mini=INT_MAX;
        if(amount==0) return 0;
        //if already exists
        if(dp[amount]!=-1) return dp[amount]; 
        for(int coin : coins)
        {
            if(coin<=amount)
            {
                int recAns=algo(coins,amount-coin,dp);
                if(recAns!=INT_MAX){
                    int ans=1+recAns;
                    mini=min(mini,ans);
                }
            }
        }
        dp[amount] =mini;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=amount;
        vector<int>dp(n+1,-1);
        int ans = algo(coins,amount,dp);
        if(ans==INT_MAX) return -1;
        return ans;
        
    }
// coin change : tabulation
int coinChangeTab(vector<int>& coins, int amount) {
    int n = amount;
    // Initialize dp with a value representing impossibility (INT_MAX)
    vector<int> dp(n + 1, INT_MAX); 
    // Base case: 0 coins needed to make 0 amount.
    dp[0] = 0; 
    // Outer loop: Iterate through all target amounts from 1 to 'amount'
    for (int value = 1; value <= amount; value++) {
        // Fix: Reset 'mini' for every new 'value'
        int mini = INT_MAX;        
        // Inner loop: Try every coin to see if it can form the current 'value'
        for (int coin : coins) {           
            if (coin <= value) {
                // Number of coins needed for the remaining amount (value - coin)
                int recAns = dp[value - coin];           
                // Only consider it if the subproblem was solvable
                if (recAns != INT_MAX) {
                    int ans = 1 + recAns;
                    mini = min(mini, ans);
                }
            }
        }      
        // Assign the found minimum to dp[value]
        dp[value] = mini;
    }
    // If dp[n] is still INT_MAX, it's impossible to make the amount.
    if (dp[n] == INT_MAX) {
        return -1;
    }
    return dp[n];
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is " << fib(n) << endl;
    return 0;
}
