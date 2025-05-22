// #include <iostream>
// #include <string.h>
// #include <string>
// #include<vector>
// #include<algorithm>
// #include<cstring>
// #include<limits.h>
// using namespace std;

// string intToRoman(int num) {
//     string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
//     string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
//     string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
//     string ths[] = {"","M","MM","MMM"};

//     return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
// }


// //line 22 " add -'0' or -'48'"
// int mystoi(string s) {
//     int len = s.size();
//     double num = 0;
//     int i=0;
//     while(s[i] == ' '){
//         i++;
//     }
//     bool negative = s[i] == '-';
//     negative == true ? i++ : i;
//     while(i < len && s[i] >= '0' && s[i] <= '9'){
//       //cout<<s[i]<<" : ";
//         num = num*10 + s[i]-48;
//       //cout<<num<<endl;
//         i++;
//     }
//     num = negative ? -num : num;
//     num = (num > INT_MAX) ? INT_MAX : num;
//     num = (num < INT_MIN) ? INT_MIN : num;
//     return num;
// }
// //4
// void reverseString(char input[],int n,int start){
//   for(int i=start,j=n-1+start; i<j; i++,j--){   //i<j
//       int temp = input[i];
//       input[i] = input[j];
//       input[j] = temp;
//   }
// }

// void reverseEachWord(char input[]) {
//   int start=0,count=1,i=0;
//   while(input[i]!=0){
//       i++;
//       count++;
//     //cout<<i<<'\t'<<count<<endl;
//       if(input[i]=='\0' || input[i]==' '){  // || ' '
//           reverseString(input,count-1,start);
//           start = i+1;
//           count = 0;
//       }
//   }
// }
// //5
// bool isVowel(char ch) {
//   return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ); //added non capital ones
// }

// string sortVowels(string s) {
//   string t = s;
//   vector<char> vowel;

//   for(int i=0;i<s.length();i++){
//       if(isVowel(s[i])) vowel.push_back(s[i]);
//   }

//   if(vowel.size()==0) return s;

//   sort(vowel.begin(), vowel.end());
  
//   int j=0;
//   for(int i=0;i<t.length();i++){
//       if(isVowel(t[i])) {
//           t[i]=vowel[j++];
//       }
//   }

//   return t;
// }

// //6
// /*
// Test Case:
// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// */
// string mergeAlternately(string word1, string word2) {
//         int m = word1.size();
//         int n = word2.size();
//         string result = "";
//         int i = 0, j = 0;

//         while (i < m || j < n) {
//             if (i < m) {
//                 result.push_back(word1[i++]);
//             }
//             if (j < n) {   //else if to if
//                 result.push_back(word2[j++]);
//             }
//         }

//         return result;
//     }

// int main()
// {
//   // string s = "   -42";
//   // cout<<mystoi(s);

//   // char ch[100]="This is the string";
//   // reverseEachWord(ch);
//   // cout<<ch;

//   // string s = "healulo";
//   // cout<<sortVowels(s);

//   cout<<mergeAlternately("abc", "pqr");
  

//   return 0;
// }