// #include <stdio.h>
// void partition(int arr[],int n)
// {
//     int totalsum=0;
//     for(int i=0;i<n;i++) totalsum+=arr[i];
//     if(totalsum%2!=0)
//     {
//         printf("No partition possible");
//         return;
//     }
//     int target=totalsum/2;
//     int subset=1<<n;
//     for(int mask =0;mask<subset;mask++)
//     {
//         int sum=0;
//         for(int i=0;i<n;i++)
//             {
//                 if(mask&(1<<i)) sum+=arr[i];
//             }
//         if(sum==target)
//         {
//             printf("Partition 1: ");
//             for(int i=0;i<n;i++)
//                 if(mask&(1<<i)) printf("%d ",arr[i]);
//             printf("\nPartition 2:");
//             for(int i=0;i<n;i++)
//                 if(!(mask&(1<<i))) printf("%d ",arr[i]);
//             printf("\n");
//             return;

//         }
//     }
//     printf("No partition possible");
// }
// // void partition(int arr[], int n) {
// //     int totalSum = 0;
// //     for (int i = 0; i < n; i++) totalSum += arr[i];

// //     if (totalSum % 2 != 0) {
// //         printf("Partition not possible\n");
// //         return;
// //     }

// //     int targetSum = totalSum / 2, totalSubsets = 1 << n;
// //     for (int mask = 0; mask < totalSubsets; mask++) {
// //         int subsetSum = 0;
// //         for (int i = 0; i < n; i++)
// //             if (mask & (1 << i)) subsetSum += arr[i];

// //         if (subsetSum == targetSum) {
// //             printf("Partition 1: ");
// //             for (int i = 0; i < n; i++)
// //                 if (mask & (1 << i)) printf("%d ", arr[i]);

// //             printf("\nPartition 2: ");
// //             for (int i = 0; i < n; i++)
// //                 if (!(mask & (1 << i))) printf("%d ", arr[i]);

// //             printf("\n");
// //             return;
// //         }
// //     }
// //     printf("Partition not possible\n");
// // }

// int main() {
//     int arr[] = {3, 1, 2, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     partition(arr, n);
//     return 0;
// }