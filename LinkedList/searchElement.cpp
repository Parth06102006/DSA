#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        Node(int val,Node* next = nullptr):data(val),next(next)
        {};
};

Node* convertArraytoLL(vector<int> listNumbers)
{
    int length = listNumbers.size();
    Node* head = new Node(listNumbers[0]);
    Node* mover = head;
    for(int i=1;i<length;i++)
    {
        Node* newNode = new Node(listNumbers[i]);
        mover->next = newNode;
        mover = newNode;
    }
    return head;
}

bool findElementLL(int val,Node* head)
{
    if(head == NULL) return false;
    if(head->data == val) return true;
    Node* temp = head;
    while(temp)
    {
        if(temp->data == val) return true;
        temp = temp->next;
    }
    return false;
}

int main()
{
    vector<int> listNumbers = {4,2,3,5,6,7,9};
    Node* head = convertArraytoLL(listNumbers);
    int toFindElement ; 
    cin>>toFindElement;
    bool result = findElementLL(toFindElement,head);
    cout<<result<<endl;
}