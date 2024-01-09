#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}Tnode;

Tnode *insertion(int , Tnode*);

void preorder(Tnode *T) {
    if (T!=NULL) {
        printf("\t%d",T->data);
        preorder(T->left);
        preorder(T->right);
    }
}

void postorder(Tnode *T) {
    if (T!=NULL) {
        postorder(T->left);
        postorder(T->right);
        printf("\t%d",T->data);
    }
}

void inorder(Tnode *T) {
    if (T!=NULL) {
        inorder(T->left);
        printf("\t%d",T->data);
        inorder(T->right);
    }
}

int main() {
    Tnode *T = NULL;

    Tnode *insertion(int x,Tnode *T)
    {
        if (T==NULL) {
            T = (Tnode*)malloc(sizeof(Tnode));
            if (T==NULL) {
                printf("\nout of space");
            } else {
                T->data = x;
                T->left = T->right = NULL;
            }
        } else {
            if (x<(T->data)) {
                T->left = insertion(x,T->left);
            } else {
                T->right = insertion(x,T->right);
            }
        }
        return T;
    };

    T = insertion(1,T);
    T = insertion(2,T);
    T = insertion(3,T);
    T = insertion(5,T);
    T = insertion(4,T);
    T = insertion(9,T);

    postorder(T);
    //inorder(T);
    //preorder(T);
}
