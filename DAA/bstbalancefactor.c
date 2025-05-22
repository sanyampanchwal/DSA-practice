// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node *left, *right;
// };

// // Function to create a new node
// struct Node* createNode(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// // Function to insert into BST
// struct Node* insert(struct Node* root, int value) {
//     if (root == NULL) return createNode(value);

//     if (value < root->data)
//         root->left = insert(root->left, value);
//     else if (value > root->data)
//         root->right = insert(root->right, value);

//     return root;
// }

// // Function to calculate height of tree
// int height(struct Node* root) {
//     if (root == NULL) return 0;
//     int leftHeight = height(root->left);
//     int rightHeight = height(root->right);
//     return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
// }

// // Function to calculate and print balance factor
// void printBalanceFactors(struct Node* root) {
//     if (root == NULL) return;

//     int leftHeight = height(root->left);
//     int rightHeight = height(root->right);
//     int balanceFactor = leftHeight - rightHeight;

//     printf("Node: %d, Balance Factor: %d\n", root->data, balanceFactor);

//     printBalanceFactors(root->left);
//     printBalanceFactors(root->right);
// }

// int main() {
//     struct Node* root = NULL;
//     int n, value;

//     printf("Enter number of nodes: ");
//     scanf("%d", &n);

//     printf("Enter values: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &value);
//         root = insert(root, value);
//     }

//     printf("\nBalance Factors:\n");
//     printBalanceFactors(root);

//     return 0;
// }