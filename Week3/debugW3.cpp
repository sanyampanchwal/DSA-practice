/*#include<iostream>
#include<vector>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
  int arr[10];
  int n=10;
  populate(arr,n);

  return 0;
}

*/