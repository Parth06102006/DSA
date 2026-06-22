// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

struct Node* head;

void Insert(int data)
{
    Node * temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

void Reverse(Node * p)
{
    if(p->next == NULL)
    {
        head = p;
        return;
    }
    Reverse(p->next);
    struct Node*q = p->next;
    q->next = p;
    p->next = NULL;
}

void ReversePrint(struct Node* p)
{
    if(p==NULL) return;
    ReversePrint(p->next);
    printf("%d ",p->data);
}

void Print()
{
    Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main() {
    head = NULL;
    Insert(10);
    Insert(15);
    Insert(1);
    Insert(6);
    Insert(3);
    Insert(4);
    Insert(7);
    ReversePrint(head);
    printf("\n\n");
    Print();
    Reverse(head);
    printf("\n\n");
    Print();
    return 0;
}