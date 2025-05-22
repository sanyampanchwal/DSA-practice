#include <iostream>
#include <string.h>
#include <string>
#include<vector>
#include<algorithm>
#include<cstring>
#include<limits.h>
using namespace std;


//Q1 
bool isAnagram(string s, string t) {
    int freq[256]={0};
    for(int i=0;i<s.size();i++)
    freq[s[i]]++;
    for(int i=0;i<t.size();i++)
    freq[t[i]]--;

    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0) return false;
    }
    return true;
}

//Q2
string reverseOnlyLetters(string s) {
    int i=0;
    int j=s.length()-1;
    while(i<j)
    {
        if(isalpha(s[i]) && isalpha(s[j]) )
        {
            swap(s[i],s[j]);
            i++,j--;
        }
        else if(isalpha(s[i]))
        j--;

        else if(isalpha(s[j]))
        i++;

        else
        {
            i++,j--;
        }

    }
    return s;

}

//Q3
string longestCommonPrefix(vector<string>& strs) {
    string ans;
    int i=0;
    while(true)
    {
        char curr=0;
        for(auto s:strs)
        {
            if(i>=s.size())
            {
                curr=0;
                break;
            }
            if(curr==0) curr=s[i];
            else if(s[i]!=curr)
            {
                curr=0;
                break;
            }
        }
        if(curr==0) break;
        ans.push_back(curr);
        i++;

    }
    return ans;
}

//8
int myAtoi(string s) {
    int i=0;
    double ans=0;
    while(s[i]==' ' && i<s.size()) i++;
    bool negative = false;
    if(s[i]=='-') negative =true,i++;
    if(i>0 &&s[i-1]=='-' && !isdigit(s[i])) return 0;
    if(s[i]=='+') i++;
    if(i>0 && s[i-1]=='+' && !isdigit(s[i])) return 0;




    while(i<s.size() && s[i]>='0'&&s[i]<='9')
    {
        ans=ans*10+s[i]-'0';
        i++;
    }
    if(negative) ans=-ans;
    if(ans>=INT_MAX) ans=INT_MAX;
    if(ans<=INT_MIN) ans=INT_MIN;
    return ans;

}
//Q12
static bool comp(string a , string b)
{
    return a+b>b+a;
}
string largestNumber(vector<int>& nums) {
    vector<string>s;
    for(auto n:nums)
    s.push_back(to_string(n));
    sort(s.begin(),s.end(),comp);
    if(s[0]=="0") return "0";
    string ans="";
    for(auto st : s)
    ans+=st;
    return ans;
}

//q13
string reorganizeString(string s) {
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    int max_freq=INT_MIN;
    char most_occ;
    for(int i=0;i<26;i++)
    {
        if(hash[i]>max_freq)
        {
            max_freq=hash[i];
            most_occ=i+'a';
        }
    }
    int ind=0;
    while(max_freq>0 && ind<s.size())
    {
        s[ind]=most_occ;
        max_freq--;
        ind+=2;

    }
    if(max_freq!=0) return "";
    hash[most_occ-'a']=0;

    //rest elements
    for(int i=0;i<26;i++)
    {
        while(hash[i])
        {
            ind=ind>=s.size()?1:ind;
            s[ind]=i+'a';
            ind+=2;
            hash[i]--;
        }
    }
    return s;
}
//Q15 your code ( time limit exceeded)
    // string removeDuplicates(string s, int k) {
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
    //     }

//15 bekaar TC 
// bool last2same(string &ans,int k_1,char ch )
// {
//     for(int it=ans.size()-1,i=0;i<k_1;i++,it--)
//     {
//         if(ans[it]!=ch) return false;
//     }
//     return true;
// }
// string removeDuplicates(string s, int k) {
//     string ans;
//     for(int i=0;i<s.size();i++)
//     {
//         char ch= s[i];
//         if(ans.size()<k-1) ans.push_back(ch);
//         else
//         {
//             if(last2same(ans,k-1,ch))
//             {
//                 for(int j=0;j<k-1;j++) ans.pop_back();
//             }
//             else ans.push_back(ch);
//         }

//     }
//     return ans;
// }

//16 your try
        int hourtomin(string s)
            {
                int hr=atoi(s.substr(0,2).c_str());
                return hr*60;
            }
            int mintostring(string s)
            {
                return atoi(s.substr(3).c_str());
            }
            int findMinDifference(vector<string>& s) {
                sort(s.begin(),s.end());

                int min_diff=INT_MAX;
                for(int i=0;i<s.size();i++)
                {
                    int j=i+1,k=i;
                    if(i==s.size()-1)k=0,j=i;
                    int h1 =hourtomin(s[k]),m1=mintostring(s[k]);
                    int h2 =hourtomin(s[j]),m2=mintostring(s[j]);
                    int total1=h1+m1,total2=h2+m2;
                    int diff=total2-total1;
                    if(24*60-diff<diff){
                        diff=24*60-diff;
                    }
        if(diff<min_diff)
        {
        min_diff=diff;
        }

                }
                return min_diff;


            }