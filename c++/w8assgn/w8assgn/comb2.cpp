#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


void helper(vector<int>& c, int target , vector<int>&v , vector<vector<int>>&ans,int index)
    {
        if(target==0)
        {
            ans.push_back(v);
            return;
        }
        if(target<0) return;
        for(int i=index ; i<c.size() ; i++)
        {   
            if(i>index && c[i] == c[i-1]) continue;
            v.push_back(c[i]);
            helper(c,target - c[i], v, ans, i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int>v;
        helper(candidates,target,v,ans,0);
        return ans;
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
    
    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int>> result = combinationSum2(arr, target);
    
    cout << "Combinations that sum to " << target << " are:\n";
    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}