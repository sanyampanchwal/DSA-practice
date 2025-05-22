/*#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
  int l = 0, r = nums.size() - 1;
  while(l <= r){
    int mid = l + (r-l)/2;
    if(nums[mid] == target) return mid;
    else if(nums[l]>=nums[mid]){
      if(nums[r]<=target || target<nums[mid]) r = mid-1;
      else l = mid+1;
    }
    else{
      if(nums[mid]<target || target<nums[l]) l = mid+1;
      else r = mid-1;
    }
  }
  return -1; // No need to debug this line.
}

int mySqrt(int x) {
    if (x == 0)
        return x;
    int first = 1, last = x;
    while (first <= last) {
        int mid = first + (last - first) / 2;
        if (mid  == x / mid)
            return mid;
        else if (mid > x / mid) {
            last = mid-1;
        }
        else {
            first = mid+1;
        }
    }
    return first;
}

int findMin(vector<int>& nums) {
    int start = 0, end = nums.size()-1, ans = start;
    while(nums[start] > nums[end]) {
        int mid = (start + end) >> 1;
        if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) 
            end = mid;
        else if(nums[mid] >= nums[start] && nums[mid] >= nums[end])
            start = mid+1;          
        else return nums[mid];
        ans = start;
    }
    return nums[ans];
}

int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    int low = 0;
    int high = n-1;
    while(low < high){
        int mid = (low + high) >> 1;
        if(nums[mid] > nums[mid+1]){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int lengthOfLIS(vector<int>& nums) 
{
    vector<int> ans;
    ans.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i]>ans.back())
        {
            ans.push_back(nums[i]);
        }
        else
        {
            int index=lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin();
            ans[index]=nums[i];
        }
    }    
    return ans.size();
}
int binarySearch(vector<int>& nums, int target) {
    int left = 0, right = int(nums.size());

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    if (left > 0 && nums[left-1] == target) {
        return left-1;
    } else {
        return -1;
    }
}

int main()
{
  vector<int>v={12,14,16};
  int t=16;
  cout<<binarySearch(v, t);
  //int a =lengthOfLIS(v);
  //cout<<a;
  
  
  
  // int target=2;
  // int ans=search(v,target);
  // cout<<"Element found at index "<<ans;

  //int a=findMin(v);
  //cout<<a;

  // int x=89;
  // int n =mySqrt(x);
  // cout<<"Square root of "<<x<<" is "<<n;

  return 0;
}*/