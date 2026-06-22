#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode(int val,ListNode* next = nullptr):val(val),next(next){}
};

ListNode* sort012(ListNode * head)
{
    ListNode* temp_0 = new ListNode(-1);
    ListNode* temp_1 = new ListNode(-1);
    ListNode* temp_2 = new ListNode(-1);
    ListNode* head_0 = temp_0;
    ListNode* head_1 = temp_1;
    ListNode* head_2 = temp_2;

    ListNode* temp = head;

    while(temp != NULL)
    {
        if(temp->val == 0)
        {
            temp_0->next = temp;
            temp_0 = temp;
        }
        else if(temp->val == 1)
        {
            temp_1->next = temp;
            temp_1 = temp;
        }
        else
        {
            temp_2->next = temp;
            temp_2 = temp;
        }

        temp = temp->next;
    }

    // For the case to discontinue
    temp_2->next = NULL;

    temp_0->next = (head_1->next) ? (head_1->next) : (head_2->next);
    temp_1->next = head_2->next;
    ListNode * newHead = head_0->next;
    delete head_0;
    delete head_1;
    delete head_2;

    return newHead;
}

ListNode * convertArraytoLL(vector<int> nums)
{
    ListNode* head = new ListNode(nums[0]);
    ListNode* mover = head;
    for(int i=1;i<nums.size();i++)
    {
        ListNode* temp = new ListNode(nums[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void outputLL(ListNode * head)
{
    ListNode* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
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

    ListNode* head = convertArraytoLL(input);

    head = sort012(head);
    outputLL(head);
}