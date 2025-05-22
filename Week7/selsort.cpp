// #include<iostream>
// #include<algorithm>
// #include<limits.h>
// using namespace std;
// int minJ(int arr[],int size,int j,int mini)
// {
//   if(j>=size) return mini;
//   if(arr[j]<arr[mini]) mini=j;
//   return minJ(arr,size,j+1,mini);
// }
// void selSort(int arr[],int size,int i)
// {
//   if(i>=size-1) return;
//   //int minInd=i;
//   int minInd=minJ(arr,size,i+1,i);
//   swap(arr[i],arr[minInd]);
//   selSort(arr,size,i+1);
// }
// int main()
// {
//   int arr[6]={9,3,7,1,3,45};
//   int n=6;
//   int i=0;
//   selSort(arr,n,i);
//   for(int a : arr) cout<<a<<" ";


//   return 0;
  
// }
