// #include <iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// bool checkSort(int arr[],int size ,int ind)
// {
//   if(ind>=size-1) return true;
//   if(arr[ind]>arr[ind-1])
//   {
//     return checkSort(arr,size,ind+1);
//   }
//   else return false;
// }

// int bin(int a[],int size,int search ,int s,int e)
// {
//   if(s>e) return -1;
//   int mid=s+(e-s)/2;
//   if(search > a[mid]) return bin(a,size,search,mid+1,e);
//   else if (search<a[mid]) return bin(a,size,search , s,mid -1);
//   else return mid;
// }

// void subseq(string s,string op,int i)
// {
//   if(i>=s.size())
//   {
//     cout<<op<<endl;
//     return;
//   }
//   subseq(s,op,i+1);
//   op.push_back(s[i]);
//   subseq(s,op,i+1);
// }

// //coin change
// int algo(vector<int>& coins, int amount) {
//   int ans=INT_MAX;
//   int mini=INT_MAX;
//   if(amount==0) return 0;
//   for(int coin : coins)
//   {
//       if(coin<=amount)
//       {
//           int recAns=algo(coins,amount-coin);
//           if(recAns!=INT_MAX) ans=1+recAns;
//       }
//   }
//   mini=min(mini,ans);
//   return mini;

// }
// int coinChange(vector<int>& coins, int amount) {
//   int ans = algo(coins,amount);
//   if(ans==INT_MAX) return -1;
//   return ans;

// }

// //robber
// int solve(vector<int>&nums , int i,int n)
// {
//     if(i>=n)return 0;
//     int max_ans=INT_MIN;
//     int ans1=nums[i]+solve(nums,i+2,n);
//     int ans2=0+solve(nums,i+1,n);
//     max_ans=max(ans1,ans2);
//     return max_ans;

// }
// int rob(vector<int>& nums) {
//     int ans=solve(nums,0,nums.size());
//     return ans;

// }


// int main()
// {
//   // int arr[5]={1,2,3,4,5};
//   // int size=5;
//   // int ind =1;
//   // cout<<checkSort(arr, size, ind);
//   // int targ=30;

//   // cout<<bin(arr,size,targ,0,size-1);
//   string s="abc", op;
//   subseq(s,op,0);
//   return 0;
// }