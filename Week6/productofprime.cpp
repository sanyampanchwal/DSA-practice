// #include <iostream>
// #include<vector>
// #include<algorithm>
// #include<math.h>
// vector<bool>Sieve(int n)
// {
//     vector<bool>s(n+1,true);
//     s[0]=s[1]=false;

//     for(long long int i=2;i*i<=n;i++)
//     {
//         if(s[i])
//         {
//             long long int j=i*i;
//             while(j<=n)
//             {
//                 s[j]=false;
//                 j+=i;
//             }
//         }
//     }
//     /*for(long long int i=0;i<s.size();i++)
//     {
//         if(s[i])
//         {
//             cout<<i<<endl;
//         }
//     }*/
//     return s;
// }
// vector<bool> segSieve(long long int l,long long int r)
// {
//     vector<bool>sieve=Sieve(sqrt(r));
//     vector<long long int>bases;

//     for(long long int i=0;i<sieve.size();i++)
//     {
//         if(sieve[i]) bases.push_back(i);
//     }
//     //for(auto n : bases) cout<<n<<endl;
//     vector<bool>seg(r-l+1,true);

//     if(l==0||l==1)seg[l]=false;
//     //if(seg[l]) cout<<"b";
//     for(long long prime : bases)
//     {
//         long long int first = (l/prime)*prime;
//         if(first<l) first+=prime;
//         long long int j=max(first,prime*prime);
//         //cout<<prime<<":"<<j<<endl;
//         while(j<=r)
//         {
//             seg[j-l]=false;
//             j+=prime;
//         }
//     }
//     if (l <= 2 && r >= 2) seg[2 - l] = true; 
//     /*for(long long int i=0;i<seg.size();i++)
//     {
//         if(seg[i])
//         {
//             cout<<i+l<<endl;
//         }
//     }*/
//     return seg;

// }
// long long primeProduct(long long L, long long R){
//     // code here
//     vector<bool>sui = segSieve(L,R);
//     long long int ans=1;
//     long long int M=pow(10,9)+7;
//     /*for(long long int i=0;i<sui.size();i++)
//     {
//         if(sui[i])
//         {
//             cout<<i+L<<endl;
//         }
//     }*/
//     for(long long int i=0;i<sui.size();i++)
//     {
//         if(sui[i])
//         {
//             ans=(ans*(i+L))%M;
//         }
//     }
//     return ans;
// }