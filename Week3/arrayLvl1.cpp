/*#include <iostream>
#include <limits.h>
using namespace std;

void countZeroOne(int arr[],int size)
{
  int zeroCount=0,oneCount=0;
  for(int i=0;i<size;i++)
    {
      if(arr[i]==0)
        zeroCount++;
      if(arr[i]==1)
        oneCount++;
      
    }
  cout<<"Number of zeroes = "<<zeroCount<<endl;
  cout<<"Number of ones = "<<oneCount<<endl;
}
int minNumber(int arr[],int size)
{
  int min=INT_MAX;
  for(int i=0;i<size;i++)
    {
      if(arr[i]<min)
        min = arr[i];
    }
  return min;
}


void reverseArray(int arr[],int size)
{
  for(int left=0,right=size-1;left<right;left++,right--)
      swap(arr[left],arr[right]);
  cout<<"Reversed array :"<<endl;
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}


void extremePrints(int arr[],int size)
{
  cout<<"Extreme prints :"<<endl;
  for(int left=0,right=size-1;left<=right;left++,right--){
    if(left==right)
      cout<<arr[left]<<" ";
    else
      cout<<arr[left]<<" "<<arr[right]<<" "; 
  }
      

}







int main() {
  int arr[9]={2,7,4,9,231,2,4,6,4};
  int size=9;
  //int min=minNumber(arr, size);
  cout<<"Minimum number in array = "<<min<<endl;

  //reverseArray(arr,size);
  extremePrints(arr, size);
  
  return 0;
}*/