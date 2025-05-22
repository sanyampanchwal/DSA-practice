// #include <iostream>
// #include <string.h>
// #include <string>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // decode msg
// string decodeMessage(string key, string message) {
//   char start = 'a';
//   char mapping[260] = {0};
//   for (auto ch : key) {
//     if (ch != ' ' && mapping[ch] == 0)
//       mapping[ch] = start++;
//   }
//   string ans;
//   for (auto ch : message) {
//     if (ch == ' ')
//       ans.push_back(' ');
//     else
//       ans.push_back(mapping[ch]);
//   }
//   return ans;
// }


// int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//     int pickp=0,pickg=0,pickm=0;
//     int travelp=0,travelg=0,travelm=0;
//     int lastp=0,lastg=0,lastm=0;
//     for(int i=0;i<garbage.size();i++)
//     {
//         string s=garbage[i];
//         for(auto ch : s)
//         {
//             if(ch=='M')
//             {
//                 pickm++;
//                 lastm=i;
//             }
//             else if(ch=='G')
//             {
//                 pickg++;
//                 lastg=i;

//             }
//             else if(ch=='P')
//             {
//                 pickp++;
//                 lastp=i;
//             }
//         }
//     }
//     for(int i=0;i<lastp;i++)
//     travelp+=travel[i];
//     for(int i=0;i<lastg;i++)
//     travelg+=travel[i];
//     for(int i=0;i<lastm;i++)
//     travelm+=travel[i];
//     int ans=pickp+pickm+pickg+travelp+travelm+travelg;
//     return ans;

// }
// //best garbage sol 
// /*int garbageCollection(vector<string>& garbage, vector<int>& travel) {
//     int ans = reduce(travel.begin(), travel.end()) * 3;
//     for (auto& g : garbage) {
//         ans += g.length();
//     }
//     for (char c : {'M', 'P', 'G'}) {
//         for (int i = garbage.size() - 1; i && garbage[i].find(c) == string::npos; i--) {
//             ans -= travel[i - 1];
//         }
//     }
//     return ans;
// }
// */

// class Solution {
// public:
//     static string str;
//     static bool comp(char c1,char c2)
//     {
//         return(str.find(c1)<str.find(c2));
//     }

//     string customSortString(string order, string s) {
//         str=order;
//         sort(s.begin(),s.end(),comp);
//         return s;

//     }

// };
// string Solution::str;

// //find replace pattern 
// void mapping(string &s)
// {
//     //find mapping
//     char map[260]={0};
//     char start='a';
//     for(auto ch: s)
//     {
//         if(map[ch]==0)
//         map[ch]=start++;
//     }
//     //updating string
//     for(int i=0;i<s.length();i++)
//     {
//         s[i]=map[s[i]];
//     }
// }
// vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
//     vector<string>ans;
//     mapping(pattern);
//     for(string s: words)
//     {
//         string temp=s;
//         mapping(s);
//         if(s==pattern) ans.push_back(temp);
//     }
//     return ans;
// }
