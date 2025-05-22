// #include <stdio.h>

// #define MAX 100

// int adjMatrix[MAX][MAX], visited[MAX];
// int queue[MAX], front = 0, rear = 0;

// void addEdge(int u, int v) {
//     adjMatrix[u][v] = 1;
//     adjMatrix[v][u] = 1;  
// }

// void BFS(int start, int n) {
//     queue[rear++] = start;
//     visited[start] = 1;

//     printf("BFS Traversal: ");

//     while (front < rear) {
//         int v = queue[front++];
//         printf("%d ", v);

//         for (int i = 0; i < n; i++) {
//             if (adjMatrix[v][i] && !visited[i]) {
//                 queue[rear++] = i;
//                 visited[i] = 1;
//             }
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int n, edges, u, v, start;

//     printf("Enter number of vertices: ");
//     scanf("%d", &n);

//     printf("Enter number of edges: ");
//     scanf("%d", &edges);

//     for (int i = 0; i < edges; i++) {
//         printf("Enter edge (u v): ");
//         scanf("%d %d", &u, &v);
//         addEdge(u, v);
//     }

//     printf("Enter starting vertex: ");
//     scanf("%d", &start);

//     BFS(start, n);

//     return 0;
// }