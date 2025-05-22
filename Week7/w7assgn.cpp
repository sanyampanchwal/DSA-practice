// #include <algorithm>
// #include <iostream>
// #include <string.h>
// #include <string>
// #include <vector>
// using namespace std;
// int lastOcc(string &s, char ch, int i, int &ans) {
//   if (i >= s.length())
//     return ans;
//   if (s[i] == ch)
//     ans = i;
//   return lastOcc(s, ch, i + 1, ans);
// }

// void revStr(string &s, int left, int right) {
//   if (left >= right)
//     return;
//   swap(s[left], s[right]);
//   revStr(s, left + 1, right - 1);
// }

// void addn(string num1, string num2, string &ans, int i, int carry) {
//   int l1 = num1.size();
//   int l2 = num2.size();

//   if (i >= l1 && i >= l2 && carry == 0)
//     return;

//   int x = carry;
//   if (i < l1)
//     x += num1[l1 - 1 - i] - '0';
//   if (i < l2)
//     x += num2[l2 - 1 - i] - '0';

//   int dig = x % 10;
//   carry = x / 10;

//   ans.push_back(dig + '0');
//   addn(num1, num2, ans, i + 1, carry);
// }

// string addStrings(string num1, string num2) {
//   string ans = "";
//   addn(num1, num2, ans, 0, 0);
//   reverse(ans.begin(), ans.end());
//   return ans;
// }

// bool pal(string s, int l, int r) {
//   if (l >= r)
//     return true;
//   if (s[l] != s[r])
//     return false;
//   return pal(s, l + 1, r - 1);
// }

// void sub(vector<int> &nums, int start, int end) {
//   if (end >= nums.size())
//     return;
//   for (int i = start; i <= end; i++)
//     cout << nums[i] << " ";
//   cout << endl;
//   sub(nums, start, end + 1);
// }
// void printsub(vector<int> &nums) {
//   for (int i = 0; i < nums.size(); i++) {
//     sub(nums, i, i);
//     cout << endl;
//   }
// }
// // Remove occurence of a substring
// void removeOcc(string &s, string &part) {
//   int i = s.find(part);
//   if (i != string::npos) {
//     string left = s.substr(0, i);
//     string right = s.substr(i + part.size(), s.size());
//     s = left + right;
//     removeOcc(s, part);
//   } else
//     return;
// }
// string removeOccurrences(string s, string part) {
//   removeOcc(s, part);
//   return s;
// }

// // wildcard
// bool match(string s, int si, string p, int pi) {
//   if (si == s.size() && pi == p.size())
//     return true;
//   if (si == s.size() && pi < p.size()) {
//     while (pi < p.size()) {
//       if (p[pi] != '*')
//         return false;
//       pi++;
//     }
//     return true;
//   }
//   if (s[si] == p[pi] || p[pi] == '?')
//     return match(s, si + 1, p, pi + 1);
//   if (p[pi] == '*') {
//     bool caseX = match(s, si, p, pi + 1); // dont match
//     bool caseY = match(s, si + 1, p, pi); // match
//     return caseX || caseY;
//   }
//   return false;
// }
// bool isMatch(string s, string p) {
//   int si = 0;
//   int pi = 0;
//   return match(s, si, p, pi);
// }
// // dice
// int numRollsToTarget(int n, int k, int target) {
//   if (target < 0)
//     return 0;
//   if (n == 0 && target == 0)
//     return 1;
//   if (n != 0 && target == 0)
//     return 0;
//   if (n == 0 && target != 0)
//     return 0;
//   int ans = 0;
//   for (int i = 1; i <= k; i++) {
//     ans += numRollsToTarget(n - 1, k, target - i);
//   }
//   return ans;
// }

// // perfect square
// int solve(int n) {
//   if (n == 0)
//     return 1;
//   if (n < 0)
//     return 0;
//   int ans = INT_MAX;
//   int i = 1;
//   int end = sqrt(n);
//   while (i <= end) {
//     int perfectSq = i * i;
//     int cnt = 1 + solve(n - perfectSq);
//     if (cnt < ans)
//       ans = cnt;
//     ++i;
//   }
//   return ans;
// }
// int numSquares(int n) { return solve(n) - 1; }

// ticket last ques
//  int solve(vector<int>& days, vector<int>& costs , int i){
//    //base
//    if(i>=days.size()) return 0;

//   int x=costs[0]+solve(days,costs,i+1);
//   int maxday=days[i]+7-1;
//   int j=i;
//   while(j<days.size()&&days[j]<=maxday)j++;
//   int y=costs[1]+solve(days,costs,j);
//   maxday=days[i]+30-1;
//   j=i;
//   while(j<days.size()&&days[j]<=maxday)j++;
//   int z=costs[2]+solve(days,costs,j);
//   return min(z,min(x,y));
// }
// int mincostTickets(vector<int>& days, vector<int>& costs) {
//   int ans =solve(days,costs,0);
//   return ans;
// }

// int main() {
//   // q4
//   //  string s="racecar2";
//   //  int l=0,r=s.length()-1;
//   //  bool ans=pal(s,l,r);
//   //  cout<<ans;
//   vector<int> nums = {1, 2, 3, 4, 5};
//   printsub(nums);

//   // q2
//   //  string s="abcdefg";
//   //  int left=0;
//   //  int right=s.length()-1;
//   //  revStr(s,left,right);
//   //  cout<<s;

//   // q1
//   //  string s="abcdabcasna";
//   //  char ch='a';
//   //  int ans=-1;
//   //  ans=lastOcc(s,ch,0,ans);
//   //  if(ans==-1) cout<<"Not found";
//   //  else cout<<"Found at : "<<ans<<endl;
//   //  char s2[]="abcdabcasna";
//   //  char *pch = strrchr(s2, ch);
//   //  cout<<pch-s2;

//   return 0;
// }