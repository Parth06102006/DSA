// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Node {
    char data;
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

char Top()
{
    return top->data; 
}

void Reverse(char C[],int n)
{
    
    // loop for push
    for(int i=0;i<n;i++)
    {
        Push(C[i]);
    }
    
    //loop for pop
    for(int i=0;i<n;i++)
    {
        C[i] = Top();
        Pop();
    }

}

int main() {
    char c[51];
    printf("Enter a string \n");
    scanf("%s",c); //not required to give the address here as & as c  variable points to the address only of the array of characters
    Reverse(c,strlen(c));
    printf("Output = %s",c);

    return 0;
}

// {(2*3) + (5*4)} - 9
// -+* 23 * 54 9

// in postfix we scan from left to right now we scan from right to 

/* 
    17

*/