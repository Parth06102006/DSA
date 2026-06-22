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

void Delete(int n){
    Node * temp1 = head;
    if(n==1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    for(int i=0;i<n-2;i++)
    {
        temp1 = temp1->next;
        //temp1 points to the (n-1)th Node
    }
    struct Node* temp2 = temp1->next; // nth Node
    temp1->next = temp2->next; // (n+1)th Node
    free(temp2);
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
    int n;
    printf("Enter a position\n");
    scanf("%d",&n);
    Delete(n);
    Print();
}