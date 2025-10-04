#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string>
#include<vector>
using namespace std;
void printPerm(string &s,int i)
{
    int n=s.length();
    //base case
    if(i>=n)
    {
        cout<<s<<" ";
        return;
    } 
    for(int j=i;j<n;j++)
    {
        swap(s[i],s[j]);
        printPerm(s,i+1);
        swap(s[i],s[j]);   //backtracking
    }
}
bool check(int x,int y,int row,int col,int maze[][4],vector<vector<bool> >&visited){
    if(
        (x>=0 && x<row)&&
        (y>=0 && y<col)&&
        maze[x][y]==1&&
        visited[x][y]==false)
        {
            return true;
        }
        return false;
    
}
void rat(int maze[][4],int row,int col,int srcx,int srcy,string &ans,vector<vector<bool> >&visited){
    if(srcx==row-1 && srcy==col-1)
    {
        cout<<ans<<endl;
        return;
    }
    //up
    int newx=srcx-1;
    int newy=srcy;
    if(check(newx,newy,row,col,maze,visited)){
        visited[newx][newy]=true;
        ans.push_back('U');
        rat(maze,row,col,newx,newy,ans,visited);
        ans.pop_back();
        visited[newx][newy]=false;
    }
    //down
    newx=srcx+1;
    newy=srcy;
    if(check(newx,newy,row,col,maze,visited)){
        visited[newx][newy]=true;
        ans.push_back('D');
        rat(maze,row,col,newx,newy,ans,visited);
        ans.pop_back();
        visited[newx][newy]=false;
    }

    //left
    newx=srcx;
    newy=srcy-1;
    if(check(newx,newy,row,col,maze,visited)){
        visited[newx][newy]=true;
        ans.push_back('L');
        rat(maze,row,col,newx,newy,ans,visited);
        ans.pop_back();
        visited[newx][newy]=false;
    }

    //right
    newx=srcx;
    newy=srcy+1;
    if(check(newx,newy,row,col,maze,visited)){
        visited[newx][newy]=true;
        ans.push_back('R');
        rat(maze,row,col,newx,newy,ans,visited);
        ans.pop_back();
        visited[newx][newy]=false;
    }

}
int main()
{
    string s="abc";   //q1
    int i=0;
    printPerm(s,i);

    // int arr[4][4]={
    //     {1,0,0,0},
    //     {1,1,0,0},
    //     {1,1,1,0},
    //     {1,1,1,1}
    // };
    // int row=4,col=4;
    // int srcx=0,srcy=0;
    // vector<vector<bool> >visited(row,vector<bool>(col,false));
    // string ans="";
    // if(arr[0][0]==0) cout<<"No path exists";
    // else{
    //     rat(arr,row,col,srcx,srcy,ans,visited);
    // }
    return 0;
}