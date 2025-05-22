// #include <iostream>
// using namespace std;

// int fact(int n)
// {
//   if(n==0 || n==1) return 1;
//   return n*(fact(n-1)); 
// }

// int pow2(int n)
// {
//   if(n==0) return 1;
//   return 2*pow2(n-1);
// }
// int fibbo(int n)
// {
//   if (n==0)return 0;
//   if(n==1) return 1;
//   return fibbo(n-1)+fibbo(n-2);
// }
// int bin(int a[],int size,int search ,int s,int e)
// {
//   if(s>e) return -1;
//   int mid=s+(e-s)/2;
//   if(search > a[mid]) return bin(a,size,search,mid+1,e);
//   else if (search<a[mid]) return bin(a,size,search , s,mid -1);
//   else return mid;
// }
// int main() {
//   //std::cout << "Hello World!\n";
//   int n;
//   cout<<"Enter number : ";
//   cin>>n;
//   int ans = fact(n);
//   int ans2 = pow2(n);
//   int ans3=fibbo(n);
//   cout<<"Fact of " << n << " = " <<ans<<endl;
//   cout<<"2 to the power " << n << " = " <<ans2<<endl;
//   cout<<"fibbonacci of " << n << " = " <<ans3<<endl;



//   return 0;
// }