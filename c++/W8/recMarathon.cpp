#include<iostream>
using namespace std;
int dearrangement(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    int ans=(n-1)*(dearrangement(n-1)+dearrangement(n-2));
    return ans;
}
int main(){
    cout<<"Enter number :";
    int n;
    cin>>n;
    cout<<dearrangement(n)<<endl;
    return 0;
}