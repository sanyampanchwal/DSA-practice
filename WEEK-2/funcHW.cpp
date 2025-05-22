
// #include<iostream>
// #include<math.h>
// using namespace std;

// void circleArea()
// {
//   float r;
//   cout << "Enter radius : ";
//   cin>>r;
//   float area = 3.141592653589*r*r;
//   cout<<"Area = ";
//   printf("%0.12f",area);
// }

// void factorial(int n)
// {
//   int fact=1,i;
//   for(i=1;i<=n;i++)
//     fact*=i;
//   cout<<"Factorial of "<<n<<" is "<<fact<<endl;
// }

// void printPrimeTillN(int n)
// {
//   int i,j,flag,pflag=0;
//   cout<<"Prime numbers till "<<n<<" are : "<<endl;
//   for(i=1;i<=n;i++)
//     {
//       flag=0;
//       for(j=2;j<=i/2+1;j++)
//         {
//           if(i%j==0)
//           {
//             flag=1;
//              break;
//           }
//         }
//       if(flag==0)
//       {
//         cout<<i<<endl;
//         pflag=1;
//       }
//     }
//   if(pflag ==0)
//     cout<<"None"<<endl;
// }

// void printDigitsOfN(int n)
// {
//   int digit;
//   cout<<"Digits of "<<n<<" are : "<<endl;
//   while(n>0)
//     {
//       digit=n%10;
//       n=n/10;
//       cout<<digit<<endl;
//     }
// }

// void digitFromNum()
// {
//   int numberOfDigits,digit,num=0,i;
//   cout<<"Enter number of digits :";
//   cin>>numberOfDigits;

//   for(i=0;i<numberOfDigits;i++)
//     {
//       cout<<"Enter digit : ";
//       cin>>digit;
//       num=num*10+digit;
//       cout<<"Num = "<<num<<endl;
//     }
// }

// void binOfNbitwise(int n)
// {
//   //for normal method see notes week 1 number system class
//   int bit,bin=0,power=0;
//   int temp=n;
//   while(n>0)
//     {
//       bit=(n&1);
//       bin=bit*pow(10,power++)+bin;
//       n=n>>1;

//     }
//   cout<<"Binary of "<<temp<<" is "<<bin<<endl;
// }

// void kmToMiles()
// {
//   float km,mile;
//   cout<<"Enter km : ";
//   cin>>km;
//   mile=km*0.621371;
//   cout<<"Miles = "<<mile<<endl;
// }

// void fahrenheitToCelsius()
// {
//   float fah,cel;
//   cout<<"Enter fahrenheit : ";
//   cin>>fah;
//   cel=(fah-32)*5/9;
//   cout<<"Celsius = "<<cel<<endl;
// }

// void oddEvenBitwise(int n)
// {
//   if((n&1)==0)
//     cout<<n<<" is Even"<<endl;
//   else
//     cout<<n<<" is Odd"<<endl;
// }
// void setBits(int n)
// {
//   int cnt=0;
//   // while(n>0)
//     {
//       if((n&1)==1)
//         cnt++;
//       n=n>>1;
//     }
//   cout<<"Number of set bits in "<<n<<" is "<<cnt<<endl;
// }
// void setBitsDiffMethod(int n)
// {
//   int cnt=0;
//   while(n){
//     n&=(n-1);
//     cnt++;
//   }
//   cout<<cnt<<endl;
// }

// int main()
// {
//   circleArea();
//   cout<<endl;

//   factorial(5);
//   cout<<endl;

//   printPrimeTillN(0);
//   printPrimeTillN(15);
//   cout<<endl;

//   printDigitsOfN(1093);
//   cout<<endl;

//   digitFromNum();
//   cout<<endl;

//   binOfNbitwise(10);
//   cout<<endl;

//   kmToMiles();
//   cout<<endl;

//   fahrenheitToCelsius();
//   cout<<endl;

//   oddEvenBitwise(33);
//   oddEvenBitwise(44);
//   cout<<endl;

//   setBits(10);
//   setBits(15);
//   setBits(34);
//   cout<<endl;
// */

//  /* setBitsDiffMethod(2);
//   setBitsDiffMethod(3);
//   setBitsDiffMethod(4);
//   setBitsDiffMethod(5);
//   setBitsDiffMethod(7);

//    return 0;
// }