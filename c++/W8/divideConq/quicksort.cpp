// #include <iostream>
// #include<algorithm>
// using namespace std;

// void quickSort(int a[], int s, int e)
// {
//     // code here
//     if(s>=e) return;
//     int pivot =e;
//     int i=s-1,j=s;
//     while(j<pivot)
//     {
//         if(a[j]<a[pivot])
//         {
//             i++;
//             swap(a[i],a[j]);
//         }
//         ++j;
//     }
//     swap(a[++i],a[pivot]);
//     quickSort(a,s,i-1);
//     quickSort(a,i+1,e);
// }
// int main()
// {
//     int a[]={10,80,30,90,40,50,70};
//     int n=7;
//     quickSort(a,0,n-1);
//     for(int i=0;i<n;i++)
//         cout<<a[i]<<" ";
//     exit(0);
// }