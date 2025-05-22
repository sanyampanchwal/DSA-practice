/*#include<iostream>
using namespace std;

int Sumof3()
{
  int a,b,c;
  cout<<"Enter the three numbers : "<<endl;
  cin>>a>>b>>c;
  int sum;
  sum =a+b+c;
  cout<<"Sum = "<<sum<<endl;
  return 0;
}
void counting(int num)
{  
  cout<<"Counting till "<<num<<":"<<endl;
  for(int i=1;i<=num;i++)
    cout<<i<<endl;
}
bool checkPrime(int n)
{
  for(int i=2;i<=n/2+1;i++)
    {
      if(n%i==0)
      {
        cout<<n<<" is not prime"<<endl;
        return false;
      }
    }
  cout<<n<<" is Prime"<<endl;
  return true;
}
void checkEvenOdd(int n)
{
  if(n%2==0)
    cout<<n<<" is even"<<endl;
  else
    cout<<n<<" is odd"<<endl;
}
void sumOfN(int n)
{
  int sum=0;
  for(int i = 1;i<=2*n;i++)
    sum+=i;
  cout<<"Sum of "<<n<<" is "<<sum<<endl;
  
}

void sumOfEvenUptoN(int n)
{
  int sum =0;
  for(int i=2;i<=n;i+=2)
    sum+=i;

  cout<<"Sum of "<<n<<" even numbers is "<<sum<<endl;
}

int main()
{
  
  
  Sumof3();
  cout<<endl;
  
  counting(9);
  cout<<endl;
  
  checkPrime(4);
  checkPrime(7);
  checkPrime(9);
  cout<<endl;

  checkEvenOdd(8);
  checkEvenOdd(9);
  cout<<endl;

  sumOfN(10);
  cout<<endl;

  sumOfEvenUptoN(5);
  cout<<endl;

  
  
  

  
  

  return 0;
}
*/