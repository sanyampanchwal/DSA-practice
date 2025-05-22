// #include <stdio.h>

// #define MAX 100

// void warshall(int n, int graph[MAX][MAX]) {
//     int transitive[MAX][MAX];

//     // Copy the original graph
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             transitive[i][j] = graph[i][j];

//     // Apply Warshall's algorithm
//     for (int k = 0; k < n; k++)
//         for (int i = 0; i < n; i++)
//             for (int j = 0; j < n; j++)
//                 transitive[i][j] = transitive[i][j] || (transitive[i][k] && transitive[k][j]);

//     // Print result
//     printf("Transitive Closure Matrix:\n");
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++)
//             printf("%d ", transitive[i][j]);
//         printf("\n");
//     }
// }

// int main() {
//     int n, graph[MAX][MAX];

//     printf("Enter number of vertices: ");
//     scanf("%d", &n);

//     printf("Enter adjacency matrix (0 or 1):\n");
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &graph[i][j]);

//     warshall(n, graph);

//     return 0;
// }