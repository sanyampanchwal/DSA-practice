// #include<stdio.h>


// #define max 100
// int a[max][max],visited[max],push[max],pop[max];
// int pushi=0,popi=0;
// void dfs(int v, int n)
// {
//   visited[v]=1;
//   push[pushi++]=v;
//   for(int i=0;i<=n;i++)
//     {
//       if(a[v][i] && !visited[i])
//         dfs(i,n);
//     } 
//   pop[popi++]=v;
// }

// void main()
// {
//   int n,e,u,v,start;
//   printf("Enter the number of vertices: ");
//   scanf("%d",&n);
//   printf("Enter the number of edges: ");
//   scanf("%d",&e);

//   for(int i=0;i<e;i++)
//     {
//       printf("Enter the edge: ");
//       scanf("%d %d",&u,&v);
//       a[u][v]=a[v][u]=1;
//     }
//   printf("Enter the starting vertex: ");
//   scanf("%d",&start);
//   dfs(start,n);
//   printf("pop order: ");
//   for(int i=0;i<popi;i++)  
//     printf("%d ",pop[i]);
//   printf("\npush order: ");
//   for(int i=0;i<pushi;i++)
//     printf("%d ",push[i]);
  
// }