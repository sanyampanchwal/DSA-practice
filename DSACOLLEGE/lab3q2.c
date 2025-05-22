// #include <stdio.h>
// #include <stdlib.h>

// void Smallest(int *arr, int n, int *ans) {
//   int i;
//   for (i = 0; i < n; i++) {
//     if (*(arr + i) < *ans)
//       *ans = *(arr + i);
//   }
// }
// void main() {
//   int n, i;
//   printf("Enter size of array : ");
//   scanf("%d", &n);
//   int *arr = (int *)calloc(n, sizeof(int));
//   printf("Enter values in array :\n");
//   for(i=0;i<n;i++) scanf("%d",&arr[i]);
//   int*ans=arr;
//   Smallest(arr, n, ans);
//   printf("Smallest element is : %d",*ans);
//   free(arr);
// }
