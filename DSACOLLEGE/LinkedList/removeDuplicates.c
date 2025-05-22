// #include <stdio.h>
// #include <stdlib.h>

// // Define a structure for the linked list node
// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// // Function to push a new node at the beginning of the linked list
// void push(Node** head, int new_data) {
//     Node* new_node = (Node*)malloc(sizeof(Node));
//     new_node->data = new_data;
//     new_node->next = *head;
//     *head = new_node;
// }

// // Function to print the linked list
// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Function to remove duplicates from the linked list
// void removeDuplicates(Node* head) {
//     Node *i = head, *prev = NULL;

//     while (i->next != NULL) {
//         prev = i;
//         Node* j = i->next;

//         while (j != NULL) {
//             if (i->data == j->data) {
//                 prev->next = j->next;
//                 free(j);
//                 j = prev->next;
//             } else {
//                 prev = j;
//                 j = j->next;
//             }
//         }
//         i = i->next;
//     }
// }

// // Main function to test the implementation
// int main() {
//     Node* head = NULL;

//     // Creating a linked list with duplicates
//     push(&head, 20);
//     push(&head, 15);
//     push(&head, 10);
//     push(&head, 20);
//     push(&head, 30);
//     push(&head, 15);

//     printf("Original Linked List:\n");
//     printList(head);

//     // Remove duplicates
//     removeDuplicates(head);

//     printf("\nLinked List After Removing Duplicates:\n");
//     printList(head);

//     return 0;
// }