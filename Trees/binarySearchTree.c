#include <stdio.h>
#include <stdlib.h>
struct node {
  int key;
  struct node *left, *right;
};
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);
  return node;
}
struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}
struct node *deleteNode(struct node *root, int key) {
  if (root == NULL) return root;
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}
int main() {
    int n,x,t=0,ch;
    struct node *root = NULL;
    do{
        printf("\n1.Insert elements\n2.Delete an element\n3.Display\n4.Exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
           {
            case 1:     printf("Enter the number of elements:");
                        scanf("%d",&n);
                        printf("Enter the elements:");
                        for(int i=0;i<n;i++)
                           {
                            if(t==0){
                            scanf("%d",&x);
                            root=insert(root,x);}
                            else{
                                 scanf("%d",&x);
                                 insert(root,x);}
                           }
                        printf("Inorder traversal: ");
                        inorder(root);
                        break;
            case 2:     printf("Enter the element you want to delete:");
                        scanf("%d",&n);
                        deleteNode(root,n);
                        printf("Inorder traversal: ");
                        inorder(root);
                        break;
            case 3:     printf("Inorder traversal: ");
                        inorder(root);
                        break;
            case 4:     printf("Program terminated succesfully");
                        break;   
            default:    printf("Invalid choice!!");                                                        
           }}while(ch!=4);
}
