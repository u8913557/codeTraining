#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}

int getHeight(Node* root){
    int leftDepth=0;
    int rightDepth=0;

    if(root==NULL) {
        return -1;
    }
    else{
        if(root->left!= NULL)
            leftDepth = getHeight(root->left) + 1;
            
        if(root->right!= NULL)
            rightDepth = getHeight(root->right) + 1;
              
        return (leftDepth > rightDepth ? leftDepth : rightDepth);
    }
    
}

void printGivenLevel(Node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 0)
        printf("%d ", root->data);
    else if (level > 0)
    {
        if(root->left != NULL)
            printGivenLevel(root->left, level-1);
        if(root->right != NULL)
            printGivenLevel(root->right, level-1);
    }
}

void levelOrder(Node* root){
    int h = getHeight(root);
    for (int i=0; i<=h; i++)
        printGivenLevel(root, i);
}

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}