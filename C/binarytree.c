#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left , *right;
};
    
struct node *create() {
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data (-1 for no node data)");
    scanf("%d",&x);
    if (x==-1)  {
        return 0;
    }   
    newnode->data = x;
    printf("Enter left child %d ",x);
    newnode->left = create();
    printf("Right child of %d ",x);
    newnode->right = create();

    return newnode;
}

void main() {
    struct node *root = 0;
    root = create();
}