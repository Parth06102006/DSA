//Inserting a Node at the beginning

#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    int data;
    struct Node * next;
}Node;

struct Node* head;

void Insert(int data,int n)
{
    Node *temp1 = (Node*)malloc(sizeof(Node));
    temp1->data = data;
    temp1->next = NULL;
    
    if(n==1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    
    Node *temp2 = head; //points to the first node so let's say x=1
    
    for (int i=0;i<n-2;i++)
    {
        temp2 = temp2->next; //points to n-1 the element here which is 1+n-2 = n-1
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
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

int main(){
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Insert(7,3);
    Insert(6,3);
    Print();
}