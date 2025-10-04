#include<iostream>
#include<vector>
#include<string>
using namespace std;


//300. Longest Increasing Subsequence
// memo 
int mem(vector<int>& nums , int curr ,int prev,vector<vector<int>> &dp)
    {
        if(curr >= nums.size()) return 0;
        if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];

        int inc=0;
        if(prev==-1 || nums[curr]>nums[prev]) 
            inc =1+ mem(nums,curr+1,curr,dp);
        
        int exc=0 + mem(nums,curr+1,prev,dp);
        dp[curr][prev+1] = max(inc , exc);
        return dp[curr][prev+1];
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        // return rec(nums , 0 ,-1);   
        return mem(nums , 0 ,-1 ,dp);

    }

// tabulation
int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));

        for(int curr =n-1;curr >=0 ; curr--)
        {
            for(int prev = curr-1 ; prev>=-1 ;prev--)
            {
                int inc=0;
                if(prev==-1 || nums[curr]>nums[prev]) 
                    inc =1+ dp[curr+1][curr+1];
                int exc=0 + dp[curr+1][prev+1];
                dp[curr][prev+1] = max(inc , exc);
            }
        }
        return dp[0][0];
}
//so 1:
int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> currRow(n+1 ,0);
        vector<int> nextRow(n+1 ,0);
        for(int curr =n-1;curr >=0 ; curr--)
        {
            for(int prev = curr-1 ; prev>=-1 ;prev--)
            {
                int inc=0;
                if(prev==-1 || nums[curr]>nums[prev]) 
                    inc =1+ nextRow[curr+1];
                int exc=0 + nextRow[prev+1];
                currRow[prev+1] = max(inc , exc);
            }
            nextRow=currRow;
        }
        return nextRow[0];
}

//Binary search :
//binary search 
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        ans.push_back(nums[0]);
        for(int i=1 ; i<n ;i++)
        {
            if(nums[i]>ans.back()) ans.push_back(nums[i]);
            else{
                int index = lower_bound(ans.begin(),ans.end(),nums[i]) -ans.begin();
                ans[index]=nums[i];
            }
        }
        return ans.size();
    }
