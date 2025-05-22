// #include <iostream>
// #include<vector>
// #include<algorithm>
// #include<math.h>
// using namespace std;

// // SIEVE OF ERATOSTHENES (PRIME COUNT)
// int countPrimes(int n) {
//   ios_base::sync_with_stdio(false);
// cin.tie(NULL); 
//   if(n==0) return 0;
//   vector<bool>prime(n,true);
//   prime[0]=prime[1]=false;
//   int count=0;
//   for(int i=2;i<n;i++)
//   {
//       if(prime[i])
//       {
//           count++;
//           int j=2*i;
//           while(j<n)
//           {
//               prime[j]=false;
//               j+=i;
//           }
//       } 
//   }
//   return count;

// }

// //EUCLID GCD / HCF
// int gcd(int a, int b) {
//     // code here
//     if(a==0) return b;
//     if(b==0) return a;
//     while(a>0 && b>0)
//     {
//         if(a>b) a-=b;
//         else b-=a;
//     }
//     return a==0?b:a;
// }

// // GCD LCM
// vector<long long> lcmAndGcd(long long a , long long b) {
//     // code here
//     long long gcd=0;
//     long long a1=a,b1=b;
//     if(a==0) gcd=b;
//     if(b==0) gcd=a;
//     while(a>0 && b>0)
//     {
//         if(a>b) a-=b;
//         else b-=a;
//     }
//     gcd = a==0?b:a;
//     long long lcm;
//     if (a1 == 0 || b1 == 0) {
//         lcm = 0; // LCM is 0 if either a or b is zero
//     }
//     else {
//         lcm = (a1*b1)/gcd;
//     }
//     return {lcm,gcd};
// }
// // FAST EXPONENTIATION 
// long long int PowMod(long long int x,long long int n,long long int M)
// {
//     // Code here
//     long long int ans=1;
//     while(n>0)
//     {
//         if(n&1)
//         {
//             ans=(ans*x)%M;
//         }
//         x=(x*x)%M;
//         n=n>>1;
//     }
//     return ans%M;
// }


// //OPTIMISED SIEVE 
// vector<bool>Sieve(int n) {
//   vector<bool>prime(n,true);
//   prime[0]=prime[1]=false;
//   int count=0;
//   for(int i=2;i*i<n;i++)  //i*i
//   {
//       if(prime[i])
//       {
//           count++;
//           int j=i*i;    //i*i
//           while(j<n)
//           {
//               prime[j]=false;
//               j+=i;
//           }
//       } 
//   }
//   return prime;

// }
// //SEGMENTED SIEVE
// vector<bool>segSieve(int L , int R)
// {
//     vector<bool>sieve=Sieve(sqrt(R));
//     vector<int>basePrimes;
//     for(int i=0;i<sieve.size();i++)
//         {
//             if(sieve[i]) basePrimes.push_back(i);
//         }
    
//     vector<bool>segSieve(R-L+1,true);
//     if(L==1 || L==0) segSieve[L]=false;
//     for(auto prime:basePrimes)
//         {
//             int first_mul=(L/prime*prime);
//             if(first_mul<L) first_mul+=prime;
//             int j=max(first_mul,prime*prime);
//             while(j<=R)
//                 {
//                     segSieve[j-L]=false;
//                     j+=prime;
//                 }
//         }
//       if (L <= 2 && R >= 2) {
//         segSieve[2 - L] = true; // Mark 2 as prime if it's within the range
//       }

//     return segSieve;
// }
// int main()
// {
//     int L=1 ,R=20;
//     vector<bool>ss=segSieve(L,R);
//     for(int i=0;i<ss.size();i++)
//         {
//             if(ss[i]) cout<<i+L<<" ";
//         }
//     return 0;
// }