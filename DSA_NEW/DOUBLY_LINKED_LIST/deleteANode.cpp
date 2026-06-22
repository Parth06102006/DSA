#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* back;

        Node(int data,Node* next=nullptr,Node*back=nullptr):data(data),next(next),back(back){}
};

Node* deleteHeadNode(Node* head)
{
    if(head==nullptr || head->next==nullptr)
    {
        return nullptr;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node* deleteTailNode(Node* head)
{
    if(head==nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node* temp = head;
    while(temp->next != nullptr)
    {
        temp=temp->next;
    }
    // previous element will point to null in next
    temp->back->next = nullptr;
    // No previous element is pointed to
    temp->back = nullptr;
    delete temp;
    return head;
}

// assuming k is between 1 and N
Node * deleteKthElement(Node* head, int k)
{
    if(head==NULL) return NULL;

    Node* temp = head;
    int cnt = 0;
    while(temp->next != nullptr)
    {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL)
    {
        delete temp;
        return nullptr;
    }
    else if(prev == NULL)
    {
        head = deleteHeadNode(head);
        return head;
    }
    else if(front == NULL)
    {
        head = deleteTailNode(head);
        return head;
    }
    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

// Given Node cannot be a head because then it will be the case of deleteHead
void deleteANode(Node* node){
    Node* prev = node->back;
    Node* front = node->next;

    if(front == NULL)
    {
        prev->next = nullptr;
        node->back = nullptr;
        delete node;
        return;
    }

    prev->next = front;
    front->back = prev;
    node->next = node->back = nullptr;
    delete node;
}

Node* convertArrayToDLL(vector <int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void outputDLL(Node* head){
    while(head != nullptr)
    {
        cout<<head->data<<" ";
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
    head = deleteHeadNode(head);
    head = deleteTailNode(head);
    head = deleteKthElement(head,5);
    deleteANode(head->next->next);
    outputDLL(head);
}