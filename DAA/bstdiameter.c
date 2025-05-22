// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//   int data;
//   struct Node *left;
//   struct Node *right;
// };

// struct Node *newNode(int data) {
//   struct Node *node = (struct Node *)malloc(sizeof(struct Node));
//   node->data = data;
//   node->left = node->right = NULL;
//   return node;
// }

// struct Node *insert(struct Node *root, int data) {
//   if (root == NULL)
//     return newNode(data);

//   if (data < root->data)
//     root->left = insert(root->left, data);
//   else if (data > root->data)
//     root->right = insert(root->right, data);

//   return root;
// }

// int height(struct Node *root) {
//   if (root == NULL)
//     return 0;
//   int leftHeight = height(root->left);
//   int rightHeight = height(root->right);
//   return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
// }

// int diameter(struct Node *root) {
//   if (root == NULL)
//     return 0;

//   int leftHeight = height(root->left);
//   int rightHeight = height(root->right);

//   int leftDiameter = diameter(root->left);
//   int rightDiameter = diameter(root->right);

//   int maxDiameter =
//       (leftDiameter > rightDiameter) ? leftDiameter : rightDiameter;
//   return (leftHeight + rightHeight + 1 > maxDiameter)
//              ? leftHeight + rightHeight + 1
//              : maxDiameter;
// }

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

//   printf("Enter the number of nodes: ");
//   scanf("%d", &n);

//   printf("Enter the node values:\n");
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &value);
//     root = insert(root, value);
//   }

//   printf("Inorder Traversal of BST: ");
//   inorder(root);
//   printf("\n");

//   printf("Diameter of the BST: %d\n", diameter(root));

//   return 0;
// }