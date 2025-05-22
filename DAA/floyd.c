// #include <stdio.h>
// #define INF 99999
// #define MAX 100

// void floyd(int n, int dist[MAX][MAX]) {
//     int i, j, k;
//     for (k = 0; k < n; k++)
//         for (i = 0; i < n; i++)
//             for (j = 0; j < n; j++)
//                 if (dist[i][k] + dist[k][j] < dist[i][j])
//                     dist[i][j] = dist[i][k] + dist[k][j];

//     printf("All-Pairs Shortest Path Matrix:\n");
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             if (dist[i][j] == INF)
//                 printf("INF ");
//             else
//                 printf("%3d ", dist[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n, graph[MAX][MAX];

//     printf("Enter number of vertices: ");
//     scanf("%d", &n);

//     printf("Enter the adjacency matrix (use 99999 for INF):\n");
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             scanf("%d", &graph[i][j]);

//     floyd(n, graph);

//     return 0;
// }