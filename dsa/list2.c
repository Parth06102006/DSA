//Inserting a Node at the beginning

#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;

void Insert(Node **head,int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = *head;
    *head = temp;
}

void Print(Node *head)
{
     printf("List is: ");
     while(head != NULL)
     {
         printf(" %d",head->data);
         head = head->next;
     }
     printf("\n");
}

int main(){
    Node * head = NULL;//empty list
    int n,x;
    printf("How Many Numbers \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(&head,x);
        Print(head);
    }
}