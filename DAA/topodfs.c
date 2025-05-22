// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 100

// int adj[MAX][MAX], visited[MAX];
// int stack[MAX], top = -1;


// void addEdge(int u, int v) {
//     adj[u][v] = 1;
// }


// void dfs(int node, int n) {
//     visited[node] = 1;
//     for (int i = 0; i < n; i++) {
//         if (adj[node][i] && !visited[i]) {
//             dfs(i, n);
//         }
//     }
//     stack[++top] = node; 
// }

// void topoSortDFS(int n) {
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             dfs(i, n);
//         }
//     }
//     printf("Topological Sort (DFS): ");
//     while (top != -1) {
//         printf("%d ", stack[top--]);
//     }
//     printf("\n");
// }

// int main() {
//     int n, edges, u, v;

//     printf("Enter number of vertices: ");
//     scanf("%d", &n);
//     printf("Enter number of edges: ");
//     scanf("%d", &edges);

//     for (int i = 0; i < edges; i++) {
//         printf("Enter edge (u -> v): ");
//         scanf("%d %d", &u, &v);
//         addEdge(u, v);
//     }

//     topoSortDFS(n);

//     return 0;
// }