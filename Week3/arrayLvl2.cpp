/*#include <iostream>
#include <limits.h>
#include<stdio.h>
using namespace std;

int getUnique(int arr[],int size)
{
  int ans=arr[0];
  for(int i=1;i<size;i++)
    ans=ans^arr[i];
  return ans;
}

void printPairs(int arr[],int size)
{
  for(int i=0;i<size;i++)
    {
      for(int j=0;j<size;j++)
        cout<<"("<<arr[j]<<","<<arr[i]<<")\t";
      cout<<endl;
    }
}

void sort01(int arr[],int size)
{
  int zeroCount=0,oneCount=0;
  for(int i=0;i<size;i++)
    {
      if(arr[i]==0)
        zeroCount++;
      if(arr[i]==1)
        oneCount++;
    }
  for(int i=0;i<zeroCount;i++)
    arr[i]=0;
  for(int j = zeroCount;j<size;j++)
    arr[j]=1;
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
  
}

void shiftBy1(int arr[],int size)
{
  int temp=arr[size-1],i;
  for(i=size;i>0;i-- )
    {
      arr[i]=arr[i-1];
    }
  arr[0]=temp;

  for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
}

void shiftByk(int arr[],int size,int k)
{
  int brr[k];
  int i,j;
  for(i=size-k,j=0;i<size;i++,j++)
    brr[j]=arr[i];
  
  for(i=size;i>=k;i-- )
      arr[i]=arr[i-k];
  
  for(i=0;i<k;i++)
    arr[i]=brr[i];

  for(i=0;i<k;i++)
    cout<<brr[i]<<" ";
  
  for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
}


int main()
{

  int arr[6]={10,20,30,40,50,60};
  int size=6;
  //cout<<"Unique element is = "<<getUnique(arr,size)<<endl;
  //printPairs(arr,size);
  //sort01(arr,size);
  //shiftBy1(arr, size);
  int k=3;
  shiftByk(arr, size, k);

  return 0;
}
*/