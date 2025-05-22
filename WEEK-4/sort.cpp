/*#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>&arr)
{
  int n=arr.size();
  for(int i=0;i<n-1;i++)
    {
      for(int j=0;j<n-1-i;j++)
        {
          if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
void selectionSort(vector<int>&arr)
{
  int n=arr.size();
  for(int i=0;i<n-1;i++)
    {
      int minIndex=i;
      for(int j=i+1;j<n;j++)
        {
          if(arr[minIndex]>arr[j])
            minIndex=j;
            
        }
      swap(arr[minIndex],arr[i]);
      
    }
}

void insertionSort(vector<int>&a)
{
  int n=a.size();
  for(int i=1;i<n;i++)
    {
      int key=a[i];
      int j=i-1;
      while(j>=0 && a[j]>key)
        {
          a[j+1]=a[j];
          j--;
        }
      a[j+1]=key;
    }
  
}

bool mycomp1stIndex(vector<int>&a , vector<int>&b)
{
  return a[1]>b[1];  //descending
}
void printvv(vector<vector<int>>&a)
{
  for(int i=0;i<a.size();i++)
    {
      for(int j=0;j<a[i].size();j++)
        cout<<a[i][j]<<'\t';
      cout<<endl;
    }
    
}




int main()
{
  // vector<int>arr{10,1,7,6,14,9};
  // for(int i=0;i<arr.size();i++)
  //   cout<<arr[i]<<'\t';
  // cout<<endl;
  // bubbleSort(arr);
  // selectionSort(arr);
  // insertionSort(arr);
  
  
  // for(int i=0;i<arr.size();i++)
  //   cout<<arr[i]<<'\t';
  vector<vector<int>>v;
  int n;
  cout<<"Enter the number of vectors : ";
  cin>>n;
  
  for(int i=0;i<n;i++)
    {
      cout<<"Enter element a,b : ";
    int a,b;
    vector<int>temp;
    cin>>a>>b;
    temp.push_back(a);
    temp.push_back(b);
    v.push_back(temp); 
    }
  printvv(v);
  cout<<endl<<endl;
  sort(v.begin(),v.end(),mycomp1stIndex);
  printvv(v);
  
  

  return 0;
}
*/