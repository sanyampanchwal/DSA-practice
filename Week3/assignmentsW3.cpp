/*#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void print(vector<vector<int>>a)
{
  for(int i=0;i<a.size();i++)
    {
      for(int j=0;j<a[i].size();j++)
        cout<<a[i][j] << " ";
      cout<<endl;
    }
  
}




vector<int> twoSumSlow(vector<int>& nums, int target) {
  int n=nums.size();
  vector<int>ans;
  for(int i=0;i<n;i++)

    {
      for(int j=0;j<n;j++)
        {
          if(i==j)
            continue;
          if(nums[i]+nums[j]==target)
          {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
          }
        }
    }
  return ans;
}
//better one :
vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};

            }
        }
    }
    return {};
}
int pivotWrong(vector<int>& nums)
{
  int n=nums.size();
  int l=0,r=n-1,mid=(n-1)/2;
  int lsum=0,rsum=0;
  for(int i=0;i<mid;i++)
    lsum+=(nums[i]);
  for(int i=mid+1;i<n;i++)
    rsum+=(nums[i]);
  while(mid>l && mid < r)
    {
      if(lsum==rsum)
        return mid;
      else if(rsum>lsum)
      {
        lsum+=nums[mid];
        rsum-=nums[mid];
        mid+=1;
      }
      else if(rsum<lsum)
        {
          lsum-=nums[mid];
          rsum+=nums[mid];
          mid-=1;
        }
    }
  return -1;
    
//wrong cuz while loop never ends , mid will keep on getting + - + - , if no pivot    
}
int pivot(vector<int>&nums)
{
  int n=nums.size();
  int lsum=0,rsum=0;
  for(int i=0;i<n;i++)   //total sum
    rsum+=nums[i];
  for(int i=0;i<n;i++)  
    {
      if(lsum==rsum)
        return i;
      else
      {
        lsum+=nums[i];
        if(i<n-1)        //in[2,5] , i+1 doesnt exist 
        rsum-=nums[i+1];
      }
    }
  return -1;
  
}

//Common element in 3 sorted arrays
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    //code here.
    unordered_map<int,int>m;
    
    vector<int>ans;
    for(int i=0;i<n1;i++)
    {
        if(m[A[i]]==0)
        m[A[i]]++;
    }

    for(int i=0;i<n2;i++)
    {
        if(m[B[i]]==1)
        m[B[i]]++;
    }

    for(int i=0;i<n3;i++)
    {
        if(m[C[i]]==2)
        m[C[i]]++;
    }

    for(int i=0;i<n1;i++)
    {
        if(m[A[i]]==3)
        {
            ans.push_back(A[i]);
            m[A[i]]--;
        }

    }
    if(ans.size()==0)
    return {-1};
    return ans;

}

void wavePrint(vector<vector<int>>&v)
{
  int r=v.size();
  int c=v[0].size();
  for(int i=0;i<c;i++)
    {
      for(int j=0;j<r;j++)
        {
          if(i%2==0)
            cout<<v[j][i]<<" ";
          else
            cout<<v[r-j-1][i]<<" ";
        }
    }
  
}

vector<int> spiralOrder(vector<vector<int>>& a) {
  vector<int> ans;
  int row=a.size();
  int col=a[0].size();
  int i=0,j=0;
  int left=0,right=col-1,up=0,down=row-1;
  int rcnt=0,ccnt=0,cnt=0;
  while(left<=right && up<=down)
    {
      if(cnt==0){
        if(rcnt==0)  //right
        {
          for(j=left;j<=right;j++)
            ans.push_back(a[i][j]);
          up++;
          i++;
          j--;
          rcnt=1;
          cnt=1;
        }
        else if(rcnt==1)  //left
        {
          for(j=right;j>=left;j--)
            ans.push_back(a[i][j]);
            down--;
            i--;
            j++;
            rcnt=0;
            cnt=1;
        }
      }
      else if(cnt==1){
        if(ccnt==0)  //down
          {
            for(i=up;i<=down;i++)
              ans.push_back(a[i][j]);
            right--;
            j--;
            i--;
            ccnt=1;
            cnt=0;
          }
          else if(ccnt==1)       //up
          {
            for(i=down;i>=up;i--)
              ans.push_back(a[i][j]);
            left++;
            j++;
            i++;
            ccnt=0;
            cnt=0;
          }
      }
    }
  return ans;
  
}




int main()
{
  //vector<int>nums={2,7,11,15};
  //int target=9;
  //vector<int>ans=twoSum(nums,target);
  //for(int i=0;i<ans.size();i++)
  //  cout<<ans[i]<<" ";

  //vector<int>nums={1,7,3,6,5,6};
  //int ans=pivot(nums);
  //cout<<ans;

  
  vector<vector<int>>v;
  v={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  //wavePrint(v);
  
  print(v);
  cout<<endl;
  vector<int>ans;
  ans=spiralOrder(v);
  for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
  

  
  return 0;
  
}
*/