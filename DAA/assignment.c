// #include <stdio.h>
// #include <limits.h>

// #define N 3  // Change N for different problem sizes

// int minCost = INT_MAX;
// int bestAssignment[N];

// int isAvailable(int assigned[], int task) {
//     return !assigned[task];
// }

// void findMinCost(int cost[N][N], int assigned[], int worker, int currCost, int assignment[]) {
//     if (worker == N) {
//         if (currCost < minCost) {
//             minCost = currCost;
//             for (int i = 0; i < N; i++)
//                 bestAssignment[i] = assignment[i];
//         }
//         return;
//     }

//     for (int task = 0; task < N; task++) {
//         if (isAvailable(assigned, task)) {
//             assigned[task] = 1;
//             assignment[worker] = task;
//             findMinCost(cost, assigned, worker + 1, currCost + cost[worker][task], assignment);
//             assigned[task] = 0;
//         }
//     }
// }

// int main() {
//     int cost[N][N], assigned[N] = {0}, assignment[N];

//     printf("Enter the cost matrix (%d x %d):\n", N, N);
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < N; j++)
//             scanf("%d", &cost[i][j]);

//     findMinCost(cost, assigned, 0, 0, assignment);

//     printf("\nMinimum Assignment Cost: %d\n", minCost);
//     printf("Optimal Assignment:\n");
//     for (int i = 0; i < N; i++)
//         printf("Worker %d -> Job %d\n", i, bestAssignment[i]);

//     return 0;
// }