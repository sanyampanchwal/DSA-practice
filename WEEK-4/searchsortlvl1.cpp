/*#include <iostream>
using namespace std;

void binarySearch(int arr[], int n,int target)
{
  int start=0,end=n-1;
  int mid =(start+end)/2;
  while(start<=end)
    {
      if(arr[mid]==target)
      {
        cout<<"Element found at index "<<mid<<endl;
        return;
      }
      else if(target>arr[mid])
        start=mid+1;
      else if(target<arr[mid])
        end=mid-1;
      mid =(start+end)/2;
        
    }
  cout<<"Element not found";
  
}

void firstOccurence(int arr[],int n,int target)
{
  int l=0,r=n-1;
  int mid=l+(r-l)/2,ans=-1;
  while(l<=r)
    {
      if(arr[mid]==target)
      {
        ans=mid;
        r=mid-1;
      }
      else if(target>arr[mid])
        l=mid+1;
      else if(target<arr[mid])
        r=mid-1;
      mid=l+(r-l)/2;
    }
  cout<<"First Occurence of "<<target<<" is at index : "<<ans;
  
}
int peakIndexInMountainArray(vector<int>& a) {
    int n=a.size();
    int s=0,e=n-1;
    int mid =s/2+e/2;
    while(s<=e)
    {
        if(a[mid]<a[mid+1])  //left side we on
        s=mid+1;
        else                //peak or right side we on
        {
            if(a[mid]>a[mid+1]&&a[mid]>a[mid-1])
            return mid;
            e=mid;
        }
        mid=s/2+e/2;


    }
    return 0;

}

int missing(int arr[],int n)
{
  int s=0,e=n-1;
  int miss=-1;
  int mid = s/2+e/2;
  while(s<=e)
    {
      if(arr[mid]==mid+2)
      {
        miss=mid+1;
        e=mid-1;
      }
      else if(arr[mid]==mid+1)
        s=mid+1;
      mid=s/2+e/2;
       
    }
  return miss;
}

int main() {
  //int n=7;
  //int arr[7]={1,2,3,4,4,4,4};
  //int target=4;
  //binarySearch(arr,n,target);
  //firstOccurence(arr, n, target);
  int arr2[]={1,2,4,5,6,7};
  int n2=7;

  int miss=missing(arr2, n2);
  if(miss!=-1)
    cout<<"Missing number = "<<miss;
  else
    cout<<"No number is missing";
  return 0;
}*/