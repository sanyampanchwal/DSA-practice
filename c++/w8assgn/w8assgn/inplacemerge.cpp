#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;


void merge(vector<int>&v,int start , int mid,int end)
{
    int len=end-start+1;
    int gap = (len/2)+(len%2);
    while(gap>0)
    {
        int i=start , j=start + gap;
        while(j <= end)
        {
            if(v[i] > v[j])
            {
                swap(v[i], v[j]);
            }
            ++i,++j;
        }
        gap = gap<=1 ? 0 : (gap/2) + (gap%2);
    }
}
void mergesort(vector<int>&v,int start, int end)
{
    if(start >=end) return;
    int mid = start + (end - start) / 2;
    mergesort(v,start, mid);
    mergesort(v, mid + 1, end);
    merge(v,start,mid,end);
}
int main()
{
    vector<int> arr;
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    // vector<int>temp(n,0);
    mergesort(arr,0,n-1);
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

