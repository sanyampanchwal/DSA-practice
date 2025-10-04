
#include<iostream>
#include<vector>
using namespace std;


void helper(vector<int>&v,int&n, int&ans ,int currNum)
    {
        if(currNum == n+1)
        {
            // for(int i=1;i<=n;i++)
            //     cout<<v[i]<<" ";
            // cout<<endl;
            ++ans;
            return;
        }

        for(int i=1; i<=n ; i++)
        {
            if(v[i] == 0 && (currNum % i ==0 || i % currNum ==0))
            {
                v[i] = currNum;
                helper(v,n,ans,currNum+1);
                v[i]=0;
            }
            
        }
    }
    int countArrangement(int n) {
        int ans=0;
        vector<int>v(n+1 ,0);
        helper(v,n,ans,1);
        return ans;
    }
int main()
{
    int n;
    cout << "Enter the number of positions: ";
    cin >> n;

    int result = countArrangement(n);
    cout << "Number of beautiful arrangements for " << n << " positions is: " << result << endl;

    return 0;
}