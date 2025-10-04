#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;


// //brute force : 
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>> ans;
//         sort(intervals.begin(), intervals.end());
//         for(int i=0; i<intervals.size(); i++) {
//             if(!ans.empty() && ans.back()[1] >= intervals[i][1])
//                 continue;

//             int start = intervals[i][0];
//             int end = intervals[i][1];

//             for(int j = i+1; j < intervals.size(); j++) {
//                 if(intervals[j][0] <= end)
//                     end = max(end, intervals[j][1]);
//                 else
//                     break;
//             }

//             ans.push_back({start, end});
//         }
//         return ans;
//     }
// };

// int main() {
//     vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
//     Solution sol;
//     vector<vector<int>> result = sol.merge(intervals);

//     for(const auto& interval : result) {
//         cout << "[" << interval[0] << "," << interval[1] << "] ";
//     }
//     return 0;
// }


// optimal :
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<intervals.size(); i++) {
            if(ans.empty() || ans.back()[1] < intervals[i][0])
                ans.push_back(intervals[i]);
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution sol;
    vector<vector<int>> result = sol.merge(intervals);

    for(const auto& interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    return 0;
}