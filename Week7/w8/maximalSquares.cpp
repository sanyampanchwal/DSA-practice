#include<iostream>
#include<vector>
#include<string>
using namespace std;


int solve(vector<vector<char>>& matrix,int row,int col,int i,int j,int &maxi)
{
    if(i>=row || j>=col)
        return 0;
    int right=solve(matrix,row,col,i,j+1,maxi);
    int down=solve(matrix,row,col,i+1,j,maxi);
    int diagonal=solve(matrix,row,col,i+1,j+1,maxi);
    if(matrix[i][j]=='1')
    {
        int ans = 1+min(right,min(down,diagonal));
        maxi=max(maxi,ans);
        return ans;
    }
    else return 0;
}
int maximalSquare(vector<vector<char>>& matrix) {
    int maxi=0;
    int row=matrix.size();
    int col=matrix[0].size();
    solve(matrix,row,col,0,0,maxi);
    return maxi*maxi;
}
int main()
{
    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };
    cout<<maximalSquare(matrix);//3-replace h , insert r,e
    return 0;
}