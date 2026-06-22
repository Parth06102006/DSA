// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* link;
} Node;

Node * top = NULL;

void Push(int x)
{
    Node * temp = (Node*)malloc(sizeof(Node));
    temp -> data = x;
    temp->link = top;
    top = temp;
}

void Pop()
{
    Node* temp = top;
    if(top==NULL) return;
    temp = top;
    top = top->link;
    free(temp);
}

int main() {
    // Write C code here
    printf("Try programiz.pro");

    return 0;
}