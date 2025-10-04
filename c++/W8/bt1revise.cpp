#include<stdio.h>
#include<iostream>
using namespace std;



void printPerm(string &s,int i)
{
    int n=s.length();
    if(i>=n)
    {
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<n;j++)
    {
        swap(s[i],s[j]);
        printPerm(s,i+1);
        swap(s[i],s[j]);   //backtracking
    }
}
int main()
{
    string s;
    cout << "Enter a string: ";
    cin>>s;
    printPerm(s,0);
}
