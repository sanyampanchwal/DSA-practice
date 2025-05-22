// #include <stdio.h>

// int gcdHighSchool(int a, int b) {
//     int gcd = 1;
//     for (int i = 2; i <= a && i <= b; i++) {
//         while (a % i == 0 && b % i == 0) {
//             gcd *= i;
//             a /= i;
//             b /= i;
//         }
//     }
//     return gcd;
// }

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     printf("GCD is %d\n", gcdHighSchool(a, b));
//     return 0;
// }