// #include<iostream>
// #include<string>
// #include<string.h>
// using namespace std;


// string removeDuplicate(string s)
// {
//   string ans;
//   int i=0;
//   while(i<s.length())
//     {  
//       if(ans.length()>0 && ans[ans.length()-1]==s[i])
//         ans.pop_back();
//       else
//         ans.push_back(s[i]);
//       i++;
//     }
//   return ans;
  
// }
// string remove2(string s , int k)
// {
//   int i=0;
//   if(k==0) return s;
//   if(k==1) return "";
//   while(i<s.length())
//     {
//       string s2= s.substr(i,k);
//       //cout<<s2<<endl;
//       int j=0,flag=0,cnt=1;
//       while(j<s2.length())
//         {
//           if(s2[j]!=s2[j+1])
//           {
//             //cout<<"h"<<j<<endl;
//             break;
//           }
            
//           if(cnt==k-1)
//             flag=1;
//           //cout<<j<<endl;
//           j++;
//           cnt++;
//         }
//       if(flag==1)
//       {
//         s.erase(i,k);
//         i=0;
//       }
//       else i++;
//       s2.clear();
//     }
//   return s;
// }
// //VALID PALINDROME 2
// bool checkPalindrome(string s , int i,int j)
// {
//     while(i<j)
//     {
//         if(s[i]!=s[j])
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
// bool validPalindrome(string s) {
//     int i=0;
//     int j=s.length()-1;
//     while(i<j)
//     {
//         if(s[i]==s[j])
//         {
//             i++;
//             j--;
//         }
//         else
//         {
//             bool ans1=checkPalindrome(s,i+1,j);
//             bool ans2=checkPalindrome(s,i,j-1);
//             return ans1 || ans2;
//         }

//     }
//     return true;

// }
// //PALINDROMIC SUBSTRING
// int expand(string s,int i,int j)
// {   
//     int count=0;
//     while(i>=0 && j<s.length() && s[i]==s[j])
//     {
//         count++;
//         i--;
//         j++;
//     }
//     return count;
// }
// int countSubstrings(string s) {
//     int totalCount=0;
//     for(int centre=0;centre<s.length();centre++)
//     {
//         int oddcount=expand(s,centre,centre);
//         int evencount=expand(s,centre,centre+1);
//         totalCount+=oddcount+evencount;
//     }
//     return totalCount;

// }

// int main()
// {
//   //cout<<removeDuplicate("cabbadde");
//   cout<<remove2("deeedbbcccbdaa", 3);
// }