// #include<iostream>
// #include<vector>
// #include<unordered_map>
// #include<algorithm>
// #include<set>
// #include<limits.h>
// #include<numeric>
// using namespace std;

//   int findPairs(vector<int>& nums, int k) {
//       int i=0;
//       int j=1;
//       int c=0;
//       sort(nums.begin(),nums.end());
//       int n=nums.size();
//       while(i<n&&j<n)
//       {
//           if(i==j)j++;
//           if(j==n)break;
//           int diff=abs(nums[i]-nums[j]);
//           if(diff==k)
//           {
//               c++;
//               j++;
//               while(j<n&&nums[j]==nums[j-1])j++;
//           }
//           if(diff<k)
//           {
//               j++;
//           }
//           else
//           {
//               i++;
//           }
//       }
//       return c;
//   }
// int bs(vector<int>&nums,int start,int target)
// {
//     int end=nums.size()-1;
//     while(start<=end)
//         {
//             int mid =start+(end-start)/2;
//             if(nums[mid]==target)
//                 return mid;
//             else if(target>nums[mid])
//                 start=mid+1;
//             else
//                 end=mid-1;
//         }
//     return -1;
// }
// int findPairBS(vector<int>& nums, int k)
// {
//     sort(nums.begin(),nums.end());
//     set<pair<int,int>>ans;
//     for(int i=0;i<nums.size()-1;i++)
//         {
//             if(bs(nums,i+1,nums[i]+k)!=-1)
//                 ans.insert({nums[i],nums[i]+k});
//         }
//     return ans.size();
    
// }

// //your code
// vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//     int n=arr.size();
//     vector<int>ans;
//     int closesti=-1;
//     int diff=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(abs(arr[i]-x)<diff)
//         {
//             closesti=i;
//             diff=abs(arr[i]-x);
//         }
//     }
//     //cout<<arr[closesti];
//     ans.push_back(arr[closesti]);
//     int i=closesti-1,j=closesti+1;

//     while(ans.size()<k)
//     {
//         if(i<0)
//         {
//             ans.push_back(arr[j++]);
//         }
//         else if(j>n-1)
//         {
//             ans.push_back(arr[i--]);
//         }
//         else if(abs(arr[i]-x) == abs(arr[j]-x))
//             {
//                 ans.push_back(arr[i--]);
//             }
//         else if(abs(arr[i]-x) < abs(arr[j]-x))
//         {
//             ans.push_back(arr[i--]);
//         }
//         else
//         {
//             ans.push_back(arr[j]);
//             j++;
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;

// }

// int binarySearch(vector<int>&nums,int start,int end,int target)
// {
    
//     while(start<=end)
//         {
//             int mid =start+(end-start)/2;
//             if(nums[mid]==target)
//                 return mid;
//             else if(target>nums[mid])
//                 start=mid+1;
//             else
//                 end=mid-1;
//         }
//     return -1;
// }

// int expoSearch(vector<int>&a,int target)
// {
//     int n=a.size();
//     if(a[0]==target) return 0;
//     int i=1;
//     while(i<n && a[i]<=target)
//         i*=2;
//     return binarySearch(a,i/2,min(i,n-1),target);
// }

// int expoUnboundedArray(vector<int>a,int target)
// {
//     int i=0,j=1;
//     while(a[j]<target)
//         {
//             i=j;
//             j=j*2;
//         }
//     return (binarySearch(a, i, j, target));
// }
// //book allocation 
// bool isPossibleSol(int arr[],int n,int m, int mid)
// {
//     int c=1;
//     int pageSum =0;
//     for(int i=0;i<n;i++)
//         {
//             if(arr[i]>mid)
//                 return false;
//             if(pageSum+arr[i]>mid)
//             {
//                 pageSum = arr[i];
//                 c++;
//                 if(c>m)
//                     return false;
//             }
//             else
//                 pageSum+=arr[i];
            
//         }
//     return true;
// }
// long long findPages(int n, int arr[], int m) {
//     int start=0;
//     int end=accumulate(arr,arr+n,0);
//     int ans=-1;
//     if(m>n) return -1;
//     while(start<=end)
//         {
//             int mid =start+(end-start)/2;
//             if(isPossibleSol(arr,n,m,mid))
//             {
//                 end=mid-1;
//                 ans=mid;
//             }
//             else
//                 start=mid+1;
//         }
//     return ans;
// }

// //painter 
// bool isPossible(int arr[],int n,int k,int mid)
// {
//     int sum=0;
//     int cnt=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>mid) return false;
//         if(arr[i]+sum>mid)
//         {
//             cnt++;
//             sum=arr[i];
//             if(cnt>k) return false;
//         }
//         else
//         sum+=arr[i];
//     }
//     return true;
// }
// long long minTime(int arr[], int n, int k)
// {
//     // code here
//     // return minimum time

//     int start=0;
//     int end=accumulate(arr,arr+n,0);
//     int ans=-1;
//     while(start<=end)
//     {
//         int mid =start+(end-start)/2;
//         cout<<mid<<'\t';
//         if(isPossible(arr,n,k,mid))
//         {

//             ans=mid;
//             //cout<<ans<<'\t';
//             end=mid-1;
//         }
//         else
//         start =mid+1;
//     }
//     return ans;

// }
// //agressive cow
// bool isPossibleCow(vector<int>&stalls,int n,int k ,int mid)
// {
//     int cnt=1;
//     int i=0;
//     int j=1;
//     while(cnt<=k && j<stalls.size())
//     {
//          if(stalls[j]-stalls[i]<mid)
//          {
//              j++;
//          }
//          else
//          {
//              i=j;
//              j++;
//              cnt++;
//              if(cnt==k) 
//              {
//                  //cout<<mid<<'\t';
//                  return true;
//              }
//          } 
//     }
//     return false;
// }

// int cowSolve(int n, int k, vector<int> &stalls) {

//     // Write your code here
//     sort(stalls.begin(),stalls.end());
//     int s=0;
//     int e=stalls.back();
//     int ans;
//     if(n==1) return -1;
//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         //cout<<"m= "<<mid<<'\t';
//         if(isPossibleCow(stalls,n,k,mid))
//         {
//             ans=mid;
//             s=mid+1;
//         }
//         else
//         {
//             e=mid-1;
//         }
//     }
//     return ans;
// }

// //EKO SPOJ (the code you submitted is in next file)
// bool isPossibleEKO(vector<long long int>&tree,long long int n,long long int m ,long long int mid)
// {
//     long long int i=0;
//     long long int sum=0;
//     for(i=0;i<n;i++)
//         {
//             if(tree[i]-mid>0)
//                 sum+=tree[i]-mid;
//         }
//     if(sum>=m){
//         return true;
//     }
        
//     return false; 
// }
// long long int ekospoj(long long int n,long long int m , vector<long long int>&tree)
// {
//     long long int ans=0;
//     long long int s=0;
//     long long int end=*max_element(tree.begin(),tree.end());
//     while(s<=end)
//         {
//             long long int mid=s+(end-s)/2;
            
//             if(isPossibleEKO(tree, n, m, mid))
//             {
//                 ans=mid;
//                 s=mid+1;
                
//             }
//             else
//             {
//                 end=mid-1;
//             }
//         }
//     return ans;
    
// }


// int main()
// {
//     // vector<int>a{1,4,5 , 8 ,19,32,34,43,68,79,192};
//     // int target=68;
//     // int ans=expoSearch(a,target);
//     // cout<<ans;

//     // int n = 4, arr[] = {12,34,67,90}, m = 2;
//     // cout << findPages(n, arr, m);
    
//     // vector<int>v{2 ,12, 11, 3, 26, 7};
//     // int n=6;
//     // int k=5;
//     // cout<<*max_element(v.begin(),v.end());
//     // int a= cowSolve(n, k, v);
//     // cout<<a;

//     // vector<long long int>tree={20,15,10,17};
//     // int n=4;
//     // int m=7;
//     // cout<<ekospoj(n,m,tree);

//   return 0;
// }