// 13.C program to perform inorder tree traversal

// Perform inorder traversal of a tree with root 25 , left child 15 and write child 30

#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  char ch;
  struct node* left;
  struct node* right;
};

void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  if(root->ch == '\0')
  printf("%d", root->item);
  else
  printf("%d%c", root->item, root->ch);
  inorderTraversal(root->right);
}

struct node* createNode(int value, char c) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->ch = c;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct node* insertLeft(struct node* root, int value, char c) {
  root->left = createNode(value, c);
  return root->left;
}

struct node* insertRight(struct node* root, int value, char c) {
  root->right = createNode(value, c);
  return root->right;
}

int main() {
  struct node* root = createNode(25, ',');
  insertLeft(root, 15, ',');
  insertRight(root, 30, '\0');
  inorderTraversal(root);
}

/* Input: root 25 , left child 15 and write child 30
   Output: 15,25,30
*/
