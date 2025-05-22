/*#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>&nums, int s,int e,int target)
{
  int start=s,end=e;
  int mid =(start+end)/2;
  while(start<=end)
    {
      if(nums[mid]==target)
      {
        return mid;
      }
      else if(target>nums[mid])
        start=mid+1;
      else if(target<nums[mid])
        end=mid-1;
      mid =(start+end)/2;

    }
  return -1;

}






int pivot(vector<int>&nums)
{
  int n=nums.size();
  int s=0;
  int e=n-1;
  int mid =s+(e-s)/2;
  while(s<=e)
    {
      if(s==e)
        return s;
      if(mid+1<n && nums[mid]>nums[mid+1])
        return mid;
      else if(mid-1>=0 && nums[mid-1]>nums[mid])
        return mid-1;
      else if(nums[s]>nums[mid])    //on right line gotta go left
        e=mid-1;
      else
        s=mid+1;
      mid=s+(e-s)/2;
    }
  return -1;
}
int search(vector<int>& nums, int target) {
  int pivot1 =pivot(nums);
  int ans;
  if(target>=nums[0] && target<=nums[pivot1]) //line A '=' is must for single element arrray
    ans=binarySearch(nums,0,pivot1,target);
  else
    ans=binarySearch(nums, pivot1+1,nums.size()-1 , target);
  
  return ans;
}

int mysqrt(int x)
{
  int s=0,e=x;
  long long int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
    {
      if(mid*mid==x)
        return mid;
      else if(mid*mid<x)
      {
        ans=mid;
        s=mid+1;
      }
      else
        e=mid-1;
      mid=s+(e-s)/2;
    }
  return ans;
}
bool binSearch2D(vector<vector<int>>&a,int target)
{
  int s=0,e=a.size()*a[0].size()-1;
  int mid=s+(e-s)/2;
  int c=a[0].size();

  while(s<=e)
    {
      int i = mid/c;
      int j = mid%c;
      if(a[i][j]==target)
        return true;
      else if(a[i][j]<target)
        s=mid+1;
      else
        e=mid-1;
      mid=s+(e-s)/2;
      
    }
  return false;
  

  
}






int main()
{
  //vector<int>nums{12,14,2,4,6,8,10};
  //int target =6;
  //int ans=pivot(nums);
  //cout<<"Pivot element is at index "<<ans;
  //int ans=search(nums,target);
  //cout<<"Element found at index "<<ans;
  
  //int x=89;
  //int n =mysqrt(x);
  //cout<<"Square root of "<<x<<" is "<<n;

  vector<vector<int>>a{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int target=10;
  bool ans=binSearch2D(a,target);
  if(ans)
  cout<<"Element found";
  else
    cout<<"Element not found";
  

  return 0;
*/