/*#include<iostream>
#include<math.h>
#include<climits>
using namespace std;


void setBitsDiffMethod(int n)
{
  int cnt=0;
  while(n){
    n&=(n-1);
    cnt++;
  }
  cout<<cnt<<endl;
}

void sqBitwise(int n)
{
  int sq=0,i=0;
  int temp=n;
  while(temp)
    {
      if(temp&1)
        sq=sq+(n<<i);
      i++;
      temp=temp>>1;
    }
  cout<<"Squared number is "<<sq<<endl;

}

//debug


int main()
{
  setBitsDiffMethod(2);
  setBitsDiffMethod(3);
  setBitsDiffMethod(4);
  setBitsDiffMethod(5);
  setBitsDiffMethod(7);
  cout<<endl;

  sqBitwise(4);
  sqBitwise(11);
  cout<<(~0);
  int x=-5;
  x=x>>1;
  cout<<x;



  //debug
  int n;
  cout<<"Amount of numebrs";
  cin>>n;
  int arr[n];
  cout<<"Numbers :"<<endl;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int max = INT_MIN;
  for(int i=0;i<n;i++){
    if(max<arr[i]){
      max=arr[i];
    }
   }
   int second = INT_MIN;
   for(int i=0;i<n;i++){
     if(max>arr[i] && arr[i]>second){
       second = arr[i];
     }
   }
   cout<<second;
  return 0;
  }

*/