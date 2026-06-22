//Inserting a Node at the beginning

#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;

struct Node* head;//global

void Insert(int x) //insert data at the end
{
    Node * temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    
    if(head == NULL)
    {
        head = temp;
        return;
    }
    
    Node * temp2 = head;
    while(temp2->next != NULL)
    {
        temp2 = temp2->next;    
    }
    temp2->next = temp; 
}


void Print()
{
    Node * temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void Reverse(){
    Node * current , *prev , *next;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main(){
    head = NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(7);
    Insert(6);
    Print();
    Reverse();
    Print();
}