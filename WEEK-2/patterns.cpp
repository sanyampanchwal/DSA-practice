/*#include <iostream>
using namespace std;

int main() {
  int n, i, j;
  cout << "Enter rows : ";
  cin >> n;

pyramid :
  for(i=0;i<n;i++)
    {
      for(j=1;j<=n-1-i;j++)
        cout<<" ";
      for(j=1;j<=i+1;j++)
        cout<<"*"<<" ";
      cout<<endl;
    }
*/

  /* inverted pyramid
  for(i=0;i<n;i++)
    {
      for(j=1;j<=i;j++)
        cout<<" ";
      for(j=1;j<=n-i;j++)
        cout<<"*"<<" ";
      cout<<endl;
    }
*/

  /* diamond
    n=n/2;
    for(i=0;i<n;i++)
      {
        for(j=1;j<=n-1-i;j++)
          cout<<" ";
        for(j=1;j<=i+1;j++)
          cout<<"*"<<" ";
        cout<<endl;
      }
    for(i=0;i<n;i++)
      {
        for(j=1;j<=i;j++)
          cout<<" ";
        for(j=1;j<=n-i;j++)
          cout<<"*"<<" ";
        cout<<endl;
      }
  */

  /* hollow pyramid
    for(i=0;i<n;i++)
      {
        for(j=1;j<=n-1-i;j++)
          cout<<" ";
        for(j=1;j<=i+1;j++)
          {
            if(j==1||j==i+1)
              cout<<"* ";
            else
              cout<<"  ";
          }
        cout<<endl ;
      }
    */
  /* hollow inverted pyramid
  for(i=0;i<n;i++)
    {
      for(j=1;j<=i;j++)
        cout<<" ";
      for(j=1;j<=n-i;j++)
        {
          if(j==1||j==n-i)
            cout<<"* ";
          else
            cout<<"  ";
        }
      cout<<endl;
    }*/

  /* diamond but with spaces in middle (choot)
  int k=n/2;
  for(i=0;i<n;i++)
    {
      for(j=0;j<=n;j++)   //8x9 matrix
        {
          if(i<k)
          {
            if(i+j<=k-1 || j-i>= k+1)
              cout<<"*";
            else
              cout<<" ";
          }
          else
          {
            if(i-j>=k || i+j>=n+k)
              cout<<"*";
            else
              cout<<" ";
          }

        }


    cout<<endl;
    }
*/
  /* hollow quadrant 4 triangle
    for(i=0;i<n;i++)
      {
        for(j=0;j<=n-1-i;j++)
          {
            if(i==0 || j==0 || i+j==n-1)
              cout<<"* ";
            else
              cout<<"  ";
          }
        cout<<endl;
      }
  */

  /* ABCD triangle + reverse ABCD
  for(i=0;i<n;i++)
    {
      char ch='A';
      for(j=0;j<=i;j++)
        {
          cout<<ch++;
          ch++;
        }
      ch--;
      for(j=0;j<i;j++)
        {
          ch--;
          cout<<ch;
        }


      cout<<endl;
    }
  */

  /* Numeric hollow inverted triangle
  for(i=1;i<=n;i++)
    {
      for(j=i;j<=n;j++)
        {
          if(i==1 ||j==i||j==n)cout<<j;
          else cout<<" ";
        }
      cout<<endl;
    }*/
  /* Numer palindrome equilateral triangle
  for(i=0;i<n;i++)
    {
      for(j=0;j<n-1-i;j++)
        cout<<" ";
      for(j=0;j<=i;j++)
        cout<<j+1;
      int p=i;
      for(j=0;j<i;j++)
        cout<<p--;





      cout<<endl;
    }
  */
  /* star and no. within star
  for(i=0;i<n;i++)
    {
      for(j=0;j<2*n-2-i;j++)
        cout<<"*";
      for(j=0;j<2*i+1;j++)
        {
          if(j%2==0)
            cout<<i+1;
          else
            cout<<"*";
        }
      for(j=0;j<2*n-2-i;j++)
        cout<<"*";
      cout<<endl;

    }
  */

  /* BOW / BUTTERFLY YAYAYYAYAYAYAYAYAYAY
  int k = n / 2;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i < k) {
        if (j <= i || i + j >= n - 1)
          cout << "* ";
        else
          cout << "  ";
      } else {
        if (i + j <= n - 1 || j >= i)
          cout << "* ";
        else
          cout << "  ";
      }
    }
    cout << endl;
  }
  */
/*
  return 0;
}
*/