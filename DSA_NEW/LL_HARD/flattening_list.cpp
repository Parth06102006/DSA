#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;
        ListNode* child;
        ListNode(int val,ListNode* next = nullptr,ListNode* child = nullptr):val(val),next(next),child(child){}
};

ListNode* merge2List(ListNode* head1,ListNode* head2)
{
    ListNode* dummyNode = new ListNode(-1);
    ListNode* mover = dummyNode;
    ListNode* temp1 = head1;
    ListNode* temp2 = head2;

    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->val < temp2->val)
        {   
            mover->child = temp1;
            temp1 = temp1->child;
            mover = mover->child;
        }
        else
        {
            mover->child = temp2;
            temp2 = temp2->child;
            mover = mover->child;
        }
        mover->next = NULL;
    }

    if(temp1) {mover->child = temp1;}
    else {mover->child = temp2;}

    return dummyNode->child;
}

ListNode* flatten(ListNode* head)
{
    if(head == NULL || head->next == NULL) return head;
    ListNode* mergedHead = flatten(head->next);
    return merge2List(mergedHead,head);
}

void printList(ListNode* flat)
{
    ListNode* temp = flat;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->child;
    }
    cout<<endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(4);

    head->child = new ListNode(2);
    head->child->child = new ListNode(3);

    ListNode* flat = flatten(head);
    printList(flat);
}