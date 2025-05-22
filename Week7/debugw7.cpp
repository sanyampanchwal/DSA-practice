// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isPowerOfFour(int n) {
//   if (n == 1)
//     return true;
//   if (n < 1) {
//     return false;
//   }
//   if (n % 4 != 0) {
//     return false;
//   }

//   return isPowerOfFour(n / 4);
// }
// double myPow(double x, int n) {

//   int p = abs(n);
//   double ans = 1;
//   while (p >= 1) {
//     p -= 1;
//     ans *= x;
//   }
//   return n < 0 ? 1 / ans : ans;
// }
// int subset(int input[], int n, int output[][50], int k) {
//   if (n == 0) {
//     output[0][0] = 0;
//     return 1;
//   }

//   int small = subset(input + 1, n - 1, output, k);
//   int count = 0;

//   for (int i = 0; i < small; i++) {
//     output[small + count][1] = input[0];
//     int sum = input[0];
//     int l = 0;
//     for (int j = 2; output[small - count - 1][j - 1] != 0; j++) {
//       l++;
//       output[small + count][j] = output[small - count - 1][j - 1];
//       sum = sum + output[small - count - 1][j - 1];
//     }
//     output[small + count][0] = -1;
//     if (sum == k) {
//       output[small + count][0] = l + 1;
//     }
//     count++;
//   }
//   return small + count;
// }

// int subsetSumToK(int input[], int n, int output[][50], int k) {
//   int temp[1110000][50];
//   int size = subset(input, n, temp, k);
//   int m = 0;
//   for (int i = 0; i < size; i++) {
//     if (temp[i][0] > 0) {
//       for (int j = 0; j <= temp[i][0]; j++) {
//         output[m][j] = temp[i][j];
//       }
//       m++;
//     }
//   }

//   return m;
// }
// int main() {
//   // cout<<isPowerOfFour(19);
//   // cout<<myPow(3,3);
//   return 0;
// }