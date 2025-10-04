// #include <iostream>
// using namespace std;

// void merge(int arr[], int s, int e)
// {
//   int mid=s+(e-s)/2;
//   //creating left and right arrays
//   int lenL=mid-s+1;
//   int lenR=e-mid;
//   int* left= new int[lenL];
//   int*right=new int[lenR];
//   //copying values
//   for(int i=0;i<lenL;i++)
//     left[i]=arr[s+i];
//   for(int i=0;i<lenR;i++)
//     right[i]=arr[mid+1+i];
//   //merging the arrays
//   int l=0,r=0,main=s;
//   while(l<lenL && r<lenR)
//     {
//       if(left[l]<right[r])
//         arr[main++]=left[l++];
//       else
//         arr[main++]=right[r++];
//     }
//   while(l<lenL)
//     arr[main++]=left[l++];
//   while(r<lenR)
//     arr[main++]=right[r++];
//   delete[] left;
//   delete[]right;
// }
// void mergeSort(int arr[],int s,int e)
// {
//   int mid=s+(e-s)/2;
//   if(s>=e) 
//     return;
//   mergeSort(arr,s,mid); //left part
//   mergeSort(arr,mid+1,e);  //right part
//   merge(arr,s,e); //merging
// }
// int main()
// {
  
//   int arr[]={20,10,24,92,14,9,12};
//   cout<<"Non sorted :";
//   for(int i=0;i<7;i++)
//     cout<<arr[i]<<" ";
//   cout<<endl;
//   mergeSort(arr,0,6);
//   cout<<"sorted :";
//   for(int i=0;i<7;i++)
//     cout<<arr[i]<<" ";
// }