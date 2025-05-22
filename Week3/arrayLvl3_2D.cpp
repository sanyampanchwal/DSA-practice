/*
#include<iostream>
#include<limits.h>
#include<vector>

using namespace std; 

// 2D ARRAY
void print(int arr[][3],int row,int col)
{
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
        cout<<arr[i][j]<<" ";
      cout<<endl;
    }
}
void print4col(int arr[][4],int row,int col)
{
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
        cout<<arr[i][j]<<" ";
      cout<<endl;
    }
}
void printColwise(int arr[][3],int row,int col)
{
  for(int i=0;i<col;i++)
    {
      for(int j=0;j<row;j++)
        cout<<arr[j][i]<<" ";
      cout<<endl;
    }
}

bool findTarget(int arr[][3],int row,int col,int target)
{
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
        {
          if(arr[i][j]==target)
            return true;
        }
    }
  return false;
}
void maxNo(int arr[][3],int row,int col)
{
  int max =INT_MIN;
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
        {
          if(arr[i][j]>max)
            max=arr[i][j];
        }
    }
  cout<<"Max number = "<<max;
}

void rowSum(int arr[][3],int row,int col)
{
  for(int i =0;i<row;i++)
    {
      int sum =0;
      for(int j=0;j<col;j++)
        {
          sum+=arr[i][j];
        }
      cout<<"Sum of row "<<i<<" = "<<sum<<endl;
    }
}


void col4Sum(int arr[][4],int row,int col)
{
  for(int i =0;i<col;i++)
    {
      int sum =0;
      for(int j=0;j<row;j++)
        {
          sum+=arr[j][i];
        }
      cout<<"Sum of col "<<i<<" = "<<sum<<endl;
    }
}

void diagonalSum(int arr[][3],int row,int col)
{
  int sum =0;
  for(int i=0;i<row;i++)
    {
      sum+=arr[i][i];
    }
  cout<<"Sum of diagonal = "<<sum<<endl;
}

void diagonal2print(int arr[][3],int row,int col)
{
  for(int i=0,j=col-1;i<row;i++,j--)
    cout<<arr[i][j]<<endl;
}

void transpose(int arr[][3],int row,int col)
{
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<i;j++)
        swap(arr[i][j],arr[j][i]);
        
    }
}



int main()
{
  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  int row=3,col=3;

  
  
  //input
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
        {
          cout<<"Enter element for row "<<i<<" and column "<<j<<":";
        cin>>arr[i][j];
        }  
    }
  
  cout<<endl;
  

  //output
 // print(arr,row,col);
  //cout<<endl;
  
  //printColwise(arr, row, col);
  //cout<<endl;
  
  //int target=5;
  //(findTarget(arr,row,col,target))?cout<<"Target found":cout<<"Target not found";

  //maxNo(arr,row,col);

  //rowSum(arr, row, col);


  //int arr4col[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  //print4col(arr4col, 3, 4);
  //col4Sum(arr4col, 3, 4);

 //diagonalSum(arr, row, col);

  //print(arr, row, col);
  //diagonal2print(arr, row, col);

  
  print(arr, row, col);
  cout<<endl;
  transpose(arr, row, col);
  print(arr,row,col);
    
  
        

  return 0;
  
}


// 2D vector 

int main()
{
  //vector<vector<int>>v;

  
  vector<vector<int> >arr(5,vector<int>(6,2));
  //5x6 vector with values 2  ^

  //printing
  for(int i=0;i<arr.size();i++)
    {
      for(int j=0;j<arr[i].size();j++)
        cout<<arr[i][j]<<" ";
      cout<<endl;
    }
  

  //jagged vector (diff col for diff rows)
  vector<vector<int>>brr;
  vector<int>vec1(5,1);
  vector<int>vec2(3,2);
  vector<int>vec3(7,3);
  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);
  for(int i=0;i<brr.size();i++)
    {
      for(int j=0;j<brr[i].size();j++)
        cout<<brr[i][j]<<" ";
      cout<<endl;
    }
  

  int drr[2][3]={{1,2,3},{4,5,6}};
  vector<vector<int>>crr(5,0); 
  // wont work as defined value type = vector and '0' aint no vector
  for(int i=0;i<crr.size();i++)
    {
      for(int j=0;j<crr[i].size();j++)
        cout<<crr[i][j]<<" ";
      cout<<endl;
    }



  return 0;
}
*/