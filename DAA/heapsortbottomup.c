// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define MAX 1000

// void maxHeapify(int arr[], int n, int i) {
//   int largest = i, left = 2 * i + 1, right = 2 * i + 2;

//   if (left < n && arr[left] > arr[largest])
//     largest = left;

//   if (right < n && arr[right] > arr[largest])
//     largest = right;

//   if (largest != i) {
//     int temp = arr[i];
//     arr[i] = arr[largest];
//     arr[largest] = temp;
//     maxHeapify(arr, n, largest);
//   }
// }

// void buildMaxHeap(int arr[], int n) {
//   for (int i = n / 2 - 1; i >= 0; i--)
//     maxHeapify(arr, n, i);
// }

// void heapSort(int arr[], int n) {
//   buildMaxHeap(arr, n);

//   for (int i = n - 1; i > 0; i--) {
//     int temp = arr[0];
//     arr[0] = arr[i];
//     arr[i] = temp;

//     maxHeapify(arr, i, 0);
//   }
// }

// int main() {
//   int n;
//   int arr[MAX];

//   printf("Enter number of elements: ");
//   scanf("%d", &n);

//   srand(time(0));
//   for (int i = 0; i < n; i++)
//     arr[i] = rand() % 100;

//   printf("Unsorted: ");
//   for (int i = 0; i < n; i++)
//     printf("%d ", arr[i]);
//   printf("\n");

//   clock_t start = clock();
//   heapSort(arr, n);
//   clock_t end = clock();

//   printf("Sorted (Heap Sort): ");
//   for (int i = 0; i < n; i++)
//     printf("%d ", arr[i]);
//   printf("\n");

//   double time = (double)(end - start) / CLOCKS_PER_SEC;
//   printf("Time taken: %f seconds\n", time);

//   return 0;
// }