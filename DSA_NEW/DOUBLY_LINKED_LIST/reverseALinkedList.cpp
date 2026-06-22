#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;

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

Node* reverseDLL(Node * head)
{
    Node * temp = head;
    Node* prev = nullptr;
    while(temp->next != nullptr)
    {
        Node* temp_sec = temp->next;
        temp->next = prev;
        temp->back = temp_sec;
        prev = temp;
        temp = temp_sec;
    }

    temp->back = nullptr;
    temp->next = prev;
    return temp;
}

Node* reverseDLL2(Node* head)
{
    if(head == NULL || head->next == NULL) return head;

    Node* last = NULL;
    Node* current = head;
    while(current != NULL)
    {
        last = current->back;
        current->back = current->next;
        current->next = last;
        current = current->back;
    }

    return last->back;
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
    head = reverseDLL2(head);
    outputDLL(head);
}