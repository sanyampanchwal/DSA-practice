#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
  int arr[5]={1,2,3,4,5};
  //int(*ptr)[5]=&arr;
  //cout<<(*ptr)[3];
  cout<<(&arr+1)<<endl;
  cout<<(*(&arr+1))<<endl;
  cout<<(*(&arr+1))-*(&arr);
  return 0;

  
}