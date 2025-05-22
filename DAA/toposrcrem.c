// #include <stdio.h>

// #define MAX 100

// int adj[MAX][MAX], indegree[MAX];
// int queue[MAX], front = 0, rear = 0;

// void addEdge(int u, int v) {
//   adj[u][v] = 1;
//   indegree[v]++;
// }

// void topoSort(int n) {
//   for (int i = 0; i < n; i++) {
//     if (indegree[i] == 0) {
//       queue[rear++] = i;
//     }
//   }

//   printf("Topological Order: ");

//   int count = 0;
//   while (front < rear) {
//     int node = queue[front++];
//     printf("%d ", node);

//     for (int i = 0; i < n; i++) {
//       if (adj[node][i]) {
//         indegree[i]--;
//         if (indegree[i] == 0) {
//           queue[rear++] = i;
//         }
//       }
//     }
//     count++;
//   }

//   if (count != n) {
//     printf("\nGraph has a cycle! Topological sorting not possible.\n");
//   } else {
//     printf("\n");
//   }
// }

// int main() {
//   int n, edges, u, v;

//   printf("Enter number of vertices: ");
//   scanf("%d", &n);
//   printf("Enter number of edges: ");
//   scanf("%d", &edges);

//   for (int i = 0; i < edges; i++) {
//     printf("Enter edge (u -> v): ");
//     scanf("%d %d", &u, &v);
//     addEdge(u, v);
//   }

//   topoSort(n);

//   return 0;
// }