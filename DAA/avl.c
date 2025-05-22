// #include <stdio.h>
// #include <stdlib.h>

// // Structure for AVL tree node
// struct Node {
//   int data;
//   struct Node *left, *right;
//   int height;
// };

// // Function to get height of a node
// int height(struct Node *node) { return (node == NULL) ? 0 : node->height; }

// // Function to create a new node
// struct Node *createNode(int value) {
//   struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//   newNode->data = value;
//   newNode->left = newNode->right = NULL;
//   newNode->height = 1;
//   return newNode;
// }

// // Right Rotation (for Left-heavy imbalance)
// struct Node *rightRotate(struct Node *y) {
//   struct Node *x = y->left;
//   struct Node *T2 = x->right;

//   x->right = y;
//   y->left = T2;

//   y->height = 1 + (height(y->left) > height(y->right) ? height(y->left)
//                                                       : height(y->right));
//   x->height = 1 + (height(x->left) > height(x->right) ? height(x->left)
//                                                       : height(x->right));

//   return x;
// }

// // Left Rotation (for Right-heavy imbalance)
// struct Node *leftRotate(struct Node *x) {
//   struct Node *y = x->right;
//   struct Node *T2 = y->left;

//   y->left = x;
//   x->right = T2;

//   x->height = 1 + (height(x->left) > height(x->right) ? height(x->left)
//                                                       : height(x->right));
//   y->height = 1 + (height(y->left) > height(y->right) ? height(y->left)
//                                                       : height(y->right));

//   return y;
// }

// // Function to get balance factor
// int balanceFactor(struct Node *node) {
//   return (node == NULL) ? 0 : height(node->left) - height(node->right);
// }

// // Function to insert a node into AVL tree
// struct Node *insert(struct Node *root, int value) {
//   if (root == NULL)
//     return createNode(value);

//   if (value < root->data)
//     root->left = insert(root->left, value);
//   else if (value > root->data)
//     root->right = insert(root->right, value);
//   else
//     return root;

//   root->height =
//       1 + (height(root->left) > height(root->right) ? height(root->left)
//                                                     : height(root->right));

//   int bf = balanceFactor(root);

//   // Left Heavy
//   if (bf > 1 && value < root->left->data)
//     return rightRotate(root);

//   // Right Heavy
//   if (bf < -1 && value > root->right->data)
//     return leftRotate(root);

//   // Left-Right Case
//   if (bf > 1 && value > root->left->data) {
//     root->left = leftRotate(root->left);
//     return rightRotate(root);
//   }

//   // Right-Left Case
//   if (bf < -1 && value < root->right->data) {
//     root->right = rightRotate(root->right);
//     return leftRotate(root);
//   }

//   return root;
// }

// // Inorder Traversal (Sorted Order)
// void inorder(struct Node *root) {
//   if (root != NULL) {
//     inorder(root->left);
//     printf("%d ", root->data);
//     inorder(root->right);
//   }
// }

// int main() {
//   struct Node *root = NULL;
//   int n, value;

//   printf("Enter number of nodes: ");
//   scanf("%d", &n);

//   printf("Enter values: ");
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &value);
//     root = insert(root, value);
//   }

//   printf("\nAVL Tree Inorder Traversal (Final Sorted Order):\n");
//   inorder(root);
//   printf("\n");

//   return 0;
// }