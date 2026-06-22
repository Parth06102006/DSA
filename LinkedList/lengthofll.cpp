#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val,Node* next = nullptr):data(val),next(next){}
};

Node* convertArraytoLL(vector<int> listNumbers)
{
    Node* head = new Node(listNumbers[0]);
    Node* mover = head;
    int lengthList = listNumbers.size();
    for(int i=1;i<lengthList;i++)
    {
        Node* temp = new Node(listNumbers[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int LengthLinkedList(Node* head)
{
    Node* temp = head;
    int count = 0;
    if(head==NULL) return 0;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    vector<int> listNumbers = {12};
    Node* head = convertArraytoLL(listNumbers);
    cout<<LengthLinkedList(head)<<endl;
}