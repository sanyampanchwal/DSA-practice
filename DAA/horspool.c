// #include <stdio.h>
// #include <string.h>
// #define MAX 256

// int shift[MAX];

// // Build the shift table
// void buildShiftTable(char pattern[]) {
//     int m = strlen(pattern);
//     for (int i = 0; i < MAX; i++)
//         shift[i] = m;  // default shift value

//     for (int i = 0; i < m - 1; i++)
//         shift[(int)pattern[i]] = m - 1 - i;
// }

// // Horspool's algorithm with comparison count
// int horspoolSearch(char text[], char pattern[], int *comparisons) {
//     int n = strlen(text);
//     int m = strlen(pattern);

//     int i = m - 1;
//     while (i < n) {
//         int k = 0;

//         // Compare from end of pattern
//         while (k < m && pattern[m - 1 - k] == text[i - k]) {
//             (*comparisons)++;
//             k++;
//         }

//         if (k == m) return i - m + 1;  // Match found

//         // If mismatch happened immediately, still count one comparison
//         if (k > 0 || pattern[m - 1] != text[i]) (*comparisons)++;

//         i += shift[(int)text[i]];
//     }

//     return -1; // Not found
// }

// int main() {
//     char text[100], pattern[50];
//     int comparisons = 0, position;

//     printf("Enter the text: ");
//     gets(text);

//     printf("Enter the pattern: ");
//     gets(pattern);

//     buildShiftTable(pattern);
//     position = horspoolSearch(text, pattern, &comparisons);

//     if (position != -1) {
//         printf("Pattern found at position: %d\n", position);
//         printf("Successful search. Comparisons: %d\n", comparisons);
//     } else {
//         printf("Pattern not found.\n");
//         printf("Unsuccessful search. Comparisons: %d\n", comparisons);
//     }

//     return 0;
// }