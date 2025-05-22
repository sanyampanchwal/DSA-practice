// #include <iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int climbStairs(int n) {
//     if(n==0||n==1) return 1;
//     return climbStairs(n-1)+climbStairs(n-2);
// }

// void printArray(int a[],int size , int ind)
// {
//   if(ind==size) return;
//   cout<<a[ind]<<" ";
//   printArray(a,size,ind+1);
// }
// void doubleEle(int arr[],int size,int ind)
// {
//   if(ind>=size)return;
//   arr[ind]=arr[ind]*2;
//   return doubleEle(arr,size,ind+1);
// }
// int maxEle(int arr[],int size , int i,int &maxi)
// {
//   if(i>=size) return maxi;
//   maxi=max(maxi,arr[i]);
//   return maxEle(arr,size,i+1,maxi);
// }

// vector <int> findocc(int arr[],int size,int i,int search,vector<int> &ans)
// {
//   if(i>=size)return ans;
//   if(arr[i]==search)
//   {
//     ans.push_back(i);
//   }
//   return findocc(arr,size,i+1,search,ans);
// }
// void printDigit(int num)
// {
//   if (num==0)return ;
//   int digit =num%10;
//   printDigit(num/10);
//   cout<<digit<<endl;
// }

// void digitise(vector<int>vec,int i)
// {
//   if(i>=vec.size()) return;
//   cout<<vec[i];
//   digitise(vec,i+1);
  
// }
// int main()
// {
//   // int a[5]={3,2,3,4,3};
//   // int size=5;
//   // int ind=0;
//   //int maxi = INT_MIN;
//   //doubleEle(a,size,ind);
//   //printArray(a,size,ind);
  
//   // maxi = maxEle(a,size,ind,maxi);
//   // cout<<maxi;

//   // int search=3;
//   // vector<int> ans;
//   // ans=findocc(a,size,ind,search,ans);
//   // for(int a : ans) cout<<a<<" ";

//   //printDigit(39120);
//   digitise({1,7,3,5,2},0);
  
//   return 0;
  
// }