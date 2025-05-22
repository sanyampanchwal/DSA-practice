// #include <iostream>
// #include<string.h>
// #include <algorithm>
// #include<cstring>
// using namespace std;

// int length(char ch[],int size){
//   int length=0;
//   for(int i=0;i<size;i++)
//     {
//       if(ch[i]=='\0')
//         break;
//       else
//         length++;
//     }
//   return length;
    
// }

// void toUpper(char ch[])
// {
//   int i=0;
//   while(ch[i]!='\0')
//     {
//       if(ch[i]>=97 && ch[i]<=122)
//       {
//         ch[i]=ch[i]-'a'+'A';
//       }
//       i++;
//     }
// }

// bool checkPalindrome(char ch[])
// {
//   int l=0,h=strlen(ch)-1;
//   while(l<=h)
//     {
//       if(ch[l]!=ch[h])
//         return false;
//       l++,h--;
//     }
//   return true;
// }
// int main() {
//   // char ch[10];
//   // cin >> ch;
//   // int value=(int)ch[8];
//   // cout<<value;
//   // so yes , all characters left are null

//   //char ch[100];
//   //cin.getline(ch,100);
//   //cout<<length(ch,100);

//   // char ch[100];
//   // cin.getline(ch,100);
//   // int length=strlen(ch);
//   // reverse(ch,ch+length);
//   // cout<<ch;

//   // char ch[100];
//   // cin.getline(ch,100);
//   // toUpper(ch);
//   // cout<<ch;

//   // char ch[100];
//   // cin.getline(ch,100);
//   // cout<<checkPalindrome(ch);




//   return 0;
// }