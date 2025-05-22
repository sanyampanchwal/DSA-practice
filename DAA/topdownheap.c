// #include <stdio.h>
// #include <string.h>

// #define MAX 256
// void heapify(int heap[], int i) {
//   int parent = (i - 1) / 2;
//   while (i > 0 && heap[i] > heap[parent]) {
//     int temp = heap[i];
//     heap[i] = heap[parent];
//     heap[parent] = temp;

//     i = parent;
//     parent = (i - 1) / 2;
//   }
// }
// void topdown(int arr[], int n, int heap[]) {
//   for (int i = 0; i < n; i++) {
//     heap[i] = arr[i];
//     heapify(heap, i);
//   }
// }
// void main() {
//   int n;
//   printf("Enter the number of elements: ");
//   scanf("%d", &n);
//   int arr[n];
//   printf("Enter the elements: ");
//   for (int i = 0; i < n; i++)
//     scanf("%d", &arr[i]);
//   printf("Heap: ");
//   int heap[n];
//   topdown(arr, n, heap);
//   for (int i = 0; i < n; i++)
//     printf("%d ", heap[i]);

//   printf("\n");
// }