#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int helper(vector<int>&v, int start , int end)
{
        if (start==end) return v[start];
        int mid=start+((end-start)>>1);

        int lsum=helper(v,start,mid);
        int rsum=helper(v,mid+1,end);

        int maxBorderLsum = INT_MIN, maxBorderRsum = INT_MIN;
        int borderLsum = 0, borderRsum = 0 ;
        for(int i=mid; i>=start; i--)
        {
            borderLsum+=v[i];
            if(borderLsum > maxBorderLsum) maxBorderLsum = borderLsum ;
        }
        for(int i= mid+1 ; i<=end ;i++)
        {
            borderRsum+=v[i];
            if(borderRsum>maxBorderRsum) maxBorderRsum = borderRsum;
        }
        int crossBorderSum = maxBorderLsum + maxBorderRsum;
        return max(lsum, max(rsum , crossBorderSum));
}
int maxSubArray(vector<int>& nums) {
        return helper(nums,0,nums.size()-1);
}

int main()
{
    vector<int> arr;
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    int maxSum = maxSubArray(arr);
    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}


