#include <stdio.h>
#include<stdlib.h>

struct node{
    char *data;
    struct node *left;
    struct node *right;
};

struct node *createnode(char *value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Allocataion failed");
        return NULL;
    }
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main() {
    struct node* root = createnode("Grand Parent:John");
    root->left = createnode("Parent1:Ates");
    root->right = createnode("Parent2:Mercan");
    root->left->left = createnode("Grandchild1:Dora");
    root->left->right = createnode("Grandchild2:Buji");
    root->right->left = createnode("Grandchild1:Neemo");
    root->right->right = createnode("Grandchild2:Hachikoo");
    
    printf("Root node:%s\n",root->data);
   
    printf("%s\n",root->left->right->data);
     printf("%s",root->right->data);
    
    return 0;
}
#include <stdio.h>
#include<stdlib.h>

struct node{
    char *data;
    struct node *left;
    struct node *right;
};

struct node *createnode(char *value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Allocataion failed");
        return NULL;
    }
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main() {
    struct node* root = createnode("Grand Parent:John");
    root->left = createnode("Parent1:Ates");
    root->right = createnode("Parent2:Mercan");
    root->left->left = createnode("Grandchild1:Dora");
    root->left->right = createnode("Grandchild2:Buji");
    root->right->left = createnode("Grandchild1:Neemo");
    root->right->right = createnode("Grandchild2:Hachikoo");
    
    printf("Root node:%s\n",root->data);
   
    printf("%s\n",root->left->right->data);
     printf("%s",root->right->data);
    
    return 0;
}
/*output:
Root node:Grand Parent:John
Grandchild2:Buji
Parent2:Mercan

=== Code Execution Successful ===*/