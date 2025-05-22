#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int solve(vector<int>& days, vector<int>& costs , int i){
  //base
  if(i>=days.size()) return 0;


  int x=costs[0]+solve(days,costs,i+1);
  int maxday=days[i]+7-1;
  int j=i;
  while(j<days.size()&&days[j]<=maxday)j++;
  int y=costs[1]+solve(days,costs,j);
  maxday=days[i]+30-1;
  j=i;
  while(j<days.size()&&days[j]<=maxday)j++;
  int z=costs[2]+solve(days,costs,j);
  return min(z,min(x,y));
}
int mincostTickets(vector<int>& days, vector<int>& costs) {
  int ans =solve(days,costs,0);
  return ans;
}