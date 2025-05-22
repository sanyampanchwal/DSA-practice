// #include <stdio.h>
// #include <limits.h>

// #define N 4  // Number of cities (can be changed)
// int visited[N];
// int minCost = INT_MAX;
// int graph[N][N] = {
//     {0, 10, 15, 20},
//     {10, 0, 35, 25},
//     {15, 35, 0, 30},
//     {20, 25, 30, 0}
// };

// void tsp(int currPos, int count, int cost, int start) {
//     if (count == N && graph[currPos][start]) {
//         int totalCost = cost + graph[currPos][start];
//         if (totalCost < minCost)
//             minCost = totalCost;
//         return;
//     }

//     for (int i = 0; i < N; i++) {
//         if (!visited[i] && graph[currPos][i]) {
//             visited[i] = 1;
//             tsp(i, count + 1, cost + graph[currPos][i], start);
//             visited[i] = 0;
//         }
//     }
// }

// int main() {
//     for (int i = 0; i < N; i++)
//         visited[i] = 0;

//     visited[0] = 1;  // Start from city 0
//     tsp(0, 1, 0, 0);

//     printf("Minimum cost to visit all cities and return: %d\n", minCost);
//     return 0;
// }