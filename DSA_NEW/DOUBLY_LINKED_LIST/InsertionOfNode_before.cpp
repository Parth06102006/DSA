#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
        int data;
        Node*next;
        Node*back;

        Node(int data,Node* next=nullptr,Node* back=nullptr):data(data),next(next),back(back){}

};

Node* convertArrayToDLL(vector<int> nums)
{
    Node* head = new Node(nums[0]);
    Node* prev = head;
    for(int i=1;i<nums.size();i++)
    {
        Node* temp = new Node(nums[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* insertBeforeHead(Node* head,int value)
{
    Node * newHead = new Node(value,head,nullptr);
    head->back = newHead;
    head = newHead;
    return head;
}

Node * insertAfterHead(Node* head,int value)
{
    if(head->next == NULL)
    {
        Node* newNode = new Node(value,nullptr,head);
        head->next = newNode;
        return head;
    }
    Node* newHead = new Node(value,head->next,head);
    head->next->back = newHead;
    head->next = newHead;
    return head; 
}

Node * insertBeforeTail(Node* head,int value)
{
    if(head->next == NULL)
    {
        return insertBeforeHead(head,value);
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }

    Node* newNode = new Node(value,temp,temp->back);
    temp->back->next = newNode;
    temp->back = newNode;
    return head;
}

Node* insertAfterTail(Node* head,int value)
{
    if(head->next == NULL)
    {
        return insertAfterHead(head,value);
    }

    Node * temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    Node* newNode = new Node(value,nullptr,temp);
    temp->next = newNode;
    return head;
}

Node* insertBeforeKthElem(int value,Node* head,int k)
{
    if(k==1) return insertBeforeHead(head,value);
    Node * temp = head;
    int cnt = 0;
    while(temp->next != NULL)
    {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node * prev = temp->back;
    Node* newNode = new Node(value,temp,prev);
    temp->back = newNode;
    prev->next = newNode;
    return head;
}

Node* insertAfterKthElem(Node* head,int k , int value)
{
    Node* temp = head;
    int cnt = 0;
    while(temp->next != NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp = temp->next;
    }

    if(temp->next == NULL) return insertAfterTail(head,value);
    Node* front = temp->next;
    Node * newNode = new Node(value,front,temp);
    front->back = newNode;
    temp->next = newNode;
    return head;
}

void insertBeforeNode(Node* node,int value)
{
    Node* prev = node->back;
    Node* newNode = new Node(value,node,prev);
    prev->next = newNode;
    node->back = newNode;
}

void insertAfterNode(Node* node,int value)
{
    Node* front = node->next;
    Node* newNode = new Node(value,front,node);
    node->next = newNode;
    front->back = newNode;
}

void outputDLL(Node* head)
{
    while(head != nullptr)
    {
        cout<< head->data << " ";
        head = head->next;
    }
}

int main(){
    int size;
    cin>>size;

    vector<int> input(size);

    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        input[i] = num;
    }

    Node* head = convertArrayToDLL(input);

    head = insertBeforeHead(head,6);
    head = insertAfterHead(head,4344);
    head = insertBeforeTail(head,344);
    head = insertAfterTail(head,39494);
    head = insertBeforeKthElem(100,head,5);
    head = insertAfterKthElem(head,7,6969);
    insertBeforeNode(head->next->next->next,40404);
    insertAfterNode(head->next->next,55);
    outputDLL(head);
}