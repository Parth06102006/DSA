// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

struct Node* head;

struct Node* GetNewNode(int x)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void InsertAtHead(int x)
{
    Node* temp = GetNewNode(x);
    if(head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void Print()
{
    struct Node* temp = head;
    printf("Forward: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void ReversePrint()
{
    struct Node* temp = head;
    if(temp==NULL) return; //empty list,exit 
    //Going to the last node
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    
    printf("Reverse: ");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    head = NULL;
    InsertAtHead(3);
    InsertAtHead(2);
    InsertAtHead(4);
    InsertAtHead(5);
    Print();
    InsertAtHead(6);
    InsertAtHead(1);
    InsertAtHead(9);
    InsertAtHead(8);
    ReversePrint();
    return 0;
}