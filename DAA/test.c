#include <stdio.h>
#include <stdlib.h>
// knapsack problem
int max(int a, int b) { return a > b ? a : b; }
int knapsack(int n, int weight[], int value[], int cap) {
  if (cap == 0 || n == 0)
    return 0;
  if (weight[n - 1] > cap)
    return knapsack(n - 1, weight, value, cap);
  return max(knapsack(n - 1, weight, value, cap),
             value[n - 1] +
                 knapsack(n - 1, weight, value, cap - weight[n - 1]));
}

void main() {
  int n, cap;
  printf("Enter the number of items: ");
  scanf("%d", &n);
  int weight[n], value[n];
  printf("Enter the weight and value of each item: \n");
  for (int i = 0; i < n; i++)
    scanf("%d %d", &weight[i], &value[i]);
  printf("Enter the capacity of the knapsack: ");
  scanf("%d", &cap);
  printf("The maximum value that can be obtained is: %d\n",
         knapsack(n, weight, value, cap));
}
