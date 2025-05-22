// #include<stdio.h>
// #include<string.h>

// void str(char str[],char pattern[])
// {
//   int found=0,j;
//   int n=strlen(str);
//   int m=strlen(pattern);
//   for(int i=0;i<=n-m;i++)
//     {
//       for(j=0 ;j<m;j++)
//         if(str[i+j]!=pattern[j])
//           break;
//       if(j==m){
//         printf("Pattern found at index %d\n",i);
//         found=1;
//       }  
//     }
//   if(!found)
//     printf("Pattern not found");
// }
// void main()
// {
//   printf("Enter the text: ");
//   char text[100];
//   gets(text);
//   printf("Enter the pattern: ");
//   char pattern[100];
//   gets(pattern);
//   str(text,pattern);
  
// }