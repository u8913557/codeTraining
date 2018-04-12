#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    //Complete this function
    Node *listNode = (Node *)malloc(sizeof(Node));
    listNode->data = data;
    listNode->next = NULL;

    if(head == NULL){
        head = listNode;
        head->next = NULL;
    }
    else{
        Node *indexNote = head;
        while(indexNote->next != NULL)
            indexNote = indexNote->next;
                    
        indexNote->next = listNode;
        listNode->next = NULL;    
    }            
    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
