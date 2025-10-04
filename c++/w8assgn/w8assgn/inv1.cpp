#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;

long merge(vector<int> &arr,vector<int> &temp,int start,int mid , int end)
{
    int i=start;
    int j=mid+1;
    int k=start;
    long c=0;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
            temp[k++]=arr[i++];
        else{ //inversion
            temp[k++]=arr[j++];
            c+=mid-i+1;
        }
    }
    while(i<=mid)
        temp[k++]=arr[i++];
    while(j<=end)
        temp[k++]=arr[j++];
        
    while(start<=end)
    {
        arr[start]=temp[start];
        start++;
    }
    return c;
}

long mergesort(vector<int> &arr,vector<int> &temp,int start , int end)
{
    if(start>=end) return 0;
    long c=0;
    int mid= start+(end-start)/2;
    c+=mergesort(arr, temp, start, mid);
    c+=mergesort(arr, temp, mid+1, end);
    c+=merge(arr,temp,start,mid,end);
    return c;
}

long countInversions(vector<int> arr) {
    long c=0;
    vector<int>temp(arr.size(),0);
    c=mergesort(arr,temp,0,arr.size()-1);
    
    
    return c;
}
int main()
{

    vector<int>arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    cout<<"Inversions : "<<countInversions(arr)<<endl;

}
