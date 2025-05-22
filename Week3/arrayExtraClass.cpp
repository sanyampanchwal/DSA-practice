/*#include<iostream>
#include<vector>

using namespace std;


void negativeLeft(int arr[],int size)
{
  int left = 0,right = size-1;
  while(left<right)
    {
      if(arr[left]>=0 && arr[right]<0) //if left positive and right neg
      {
        swap(arr[left],arr[right]);
        left++;
        right--;
      }


      if(arr[left]<0)  //skip if left alr negative
        left++;
      if(arr[right]>=0)  //kip if right already positive
        right--;
    }
  //printing array
  cout<<"Modified array : ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}

void sortColor(int arr[],int size)
{
  int left=0,right=size-1,i=0;
  for(i=0;i<=right;i++)
    {
      if(arr[i]==0)
      {
        swap(arr[i],arr[left]);
        left++;
      }
      else if(arr[i]==2)
      {
        swap(arr[i],arr[right]);
          right--;
          i--;
      }
    }
  //printing array
  cout<<"Modified array : ";
  for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}
void rotate(vector<int>&nums,int shift)
{
  int n=nums.size();
  vector<int>ans(n);
  for(int i=0;i<n;i++)
    {
      int j=(i+shift)%n;
      ans[j]=nums[i];
    }
  nums=ans;
  cout<<"Modified array "<<endl;
  for(int i=0;i<n;i++)
    cout<<nums[i]<<" ";
  
}





int main()
{
  int arr[80];
  int size;
  cout<<"Enter number of elements : ";
  cin>>size;
  cout<<"Enter elements :"<<endl;
  for(int i=0;i<size;i++)
    cin>>arr[i];
  cout<<endl;
  cout<<"Array entered : ";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  
  //negativeLeft(arr, size);
  //sortColor(arr, size);

  vector<int>nums={1,2,3,4,5,6,7};
  int shift=3;
  rotate(nums,shift);
  




  return 0;
}
*/