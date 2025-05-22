// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool isPossibleEKO(vector<long long int>&tree,long long int n,long long int m ,long long int mid)
// {
//     long long int i=0;
//     long long int sum=0;
//     for(i=0;i<n;i++)
//         {
//             if(tree[i]-mid>0)
//                 sum+=tree[i]-mid;
//         }
//     if(sum>=m){
//         return true;
//     }

//     return false; 
// }
// long long int ekospoj(long long int n,long long int m , vector<long long int>&tree)
// {
//     long long int ans=0;
//     long long int s=0;
//     long long int end=*max_element(tree.begin(),tree.end());
//     while(s<=end)
//         {
//             long long int mid=s+(end-s)/2;

//             if(isPossibleEKO(tree, n, m, mid))
//             {
//                 ans=mid;
//                 s=mid+1;

//             }
//             else
//             {
//                 end=mid-1;
//             }
//         }
//     return ans;

// }
// int main() {

//   // your code here
//   long long int n , m;
//   cin >> n >> m;
//   vector<long long int> tree;
//   long long int c=n;
//   while(c--)
//   {
//     long long int hieght;
//     cin>>hieght;
//     tree.push_back(hieght);
//   }
//   cout<<ekospoj(n,m ,tree);

//   return 0;
// }