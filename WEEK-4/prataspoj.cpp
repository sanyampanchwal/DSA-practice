#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossibleTime(vector<int>rank,int np,int mid)
{
  int pcnt=0;
  for(int i=0;i<rank.size();i++)
    {
      int r=rank[i],j=1;
      int time=0;
      while(true)
        {
          if(time+r*j<=mid)
          {
            pcnt++;
            time+=j*r;
            j++;
          }
          else
            break;
        }
      if(pcnt>=np)
        return true;
    }
  return false;
  
}

int minTime(vector<int>arr,int np)
{
  int ans=-1;
  int s=0;
  int e=*max_element(arr.begin(),arr.end())*np*(np+1)/2;
  while(s<=e)
    {
      int mid=s+(e-s)/2;
      if(isPossibleTime(arr,np,mid))
      {
        ans=mid;
        e=mid-1;
      }
      else
        s=mid+1;
    }
  return ans;
  
}







int main()
{
  int T;
  //cout<<"Test cases : ";
  cin>>T;
  vector<int>rank;
  while(T--)
    {
      int np,nc;
      cin>>np>>nc;
      vector<int>rank;
      
      while(nc--)
        {
          int x;
          cin>>x;
          rank.push_back(x);
        }
      cout<<minTime(rank, np)<<endl;
    }
  
  return 0;
}
/*
3
10
4 1 2 3 4
8
1 1
8
8 1 1 1 1 1 1 1 1
  */