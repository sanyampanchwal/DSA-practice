// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;

// int solve(string &a,string &b,int i,int j){
//     int ans=0;
//     if(i>=a.length())
//         return b.length()-j;
//     if(j>=b.length())
//         return  a.length()-i;
//     if(a[i]==b[j])
//         ans=0+solve(a,b,i+1,j+1);
//     else{
//         int op1=1+solve(a,b,i,j+1);
//         int op2=1+solve(a,b,i+1,j);
//         int op3=1+solve(a,b,i+1,j+1);
//         ans=min(op1,min(op2,op3));
//     }
//     return ans;
// }
// int minDistance(string word1, string word2) {
//     int i=0,j=0;
//     int ans=solve(word1,word2,i,j);
//     return ans;
// }
// int main()
// {
//     cout<<minDistance("horse", "ros");//3-replace h , insert r,e
//     return 0;
// }