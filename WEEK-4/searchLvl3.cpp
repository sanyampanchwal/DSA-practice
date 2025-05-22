/*#include<iostream>
#include<vector>
using namespace std;

int quotient(int dividend,int divisor)
{
  int s=0;
  int e=dividend;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
    {
      if(mid*divisor==dividend)
          return mid;
      else if(mid*divisor<dividend)
      {
        ans=mid;
        s=mid+1;
      }
      else
        e=mid-1;
      mid=s+(e-s)/2;
        
      
    }
  if(dividend*divisor<0)
  {
    ans=ans*(-1);
    return ans;
  }
  else
    return ans;

}
int nearlySorted(vector<int>&arr,int target)
{
  int s=0;
  int e=arr.size()-1;
  int mid =s+(e-s)/2;
  while(s<=e)
    {
      if(arr[mid]==target)
        return mid;
      else if(arr[mid-1]==target)
          return mid-1;
      else if(arr[mid+1]==target)
        return mid+1;
      else if(target>arr[mid])
        s=mid+2;
      else
        e=mid-2;
      mid=s+(e-s)/2;
    }
  return -1;
}
int oddOccuringElement(vector<int>a)
{
  int s=0;
  int e=a.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e)
    {
      if(s==e)
        return s;
      if(mid&1)      //odd
      {
        if(a[mid-1]==a[mid] && mid-1>=0)
          s=mid+1;
        else
          e=mid-1;
      }
      else{    //even
        if(a[mid+1]==a[mid] && mid+1<a.size())
          s=mid+2;
        else e=mid;
      }
      mid=s+(e-s)/2;
    }
  return ans;
}

int main()
{
  //int dividend=22;
  //int divisor=-11;
  //int ans=quotient(abs(dividend),abs(divisor));
  //if(dividend*divisor>=0)
  //cout<<"Quotient is "<<ans;
  //else
  //  cout<<"Quotient is "<<ans*(-1);

  // vector<int>arr{10,30,20,50,40,70,60};
  // int target=10;
  // int ans=nearlySorted(arr,target);
  // if(ans!=-1)
  // cout<<"Element found at index "<<ans;
  // else cout<<"Not found";

  vector<int>a{1,1,2,2,3,3,4,4,3};
  int ans=oddOccuringElement(a);
  cout<<a[ans]<<'\t'<<ans;
  

  return 0;
}
*/