#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public :
        int val;
        ListNode* next;
        ListNode(int val,ListNode* next = nullptr):val(val),next(next){}
};

ListNode* reverse(ListNode* head)
{
    if(head == NULL || head->next == NULL) return head;

    ListNode * newHead = reverse(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

ListNode* AddOnetoLL(ListNode* head)
{
    int number = 0;
    ListNode* temp = head;
    while(temp != NULL)
    {
        number = number*10 + (temp->val);
        temp = temp->next;
    }

    number += 1;

    ListNode* newHead = reverse(head);
    temp = newHead;
    ListNode * prev = NULL;
    while(temp != NULL)
    {
        int temp_num  = number % 10;
        temp->val = temp_num;
        number /= 10;
        prev = temp;
        temp = temp->next;
    }

    while(number != 0)
    {
        int temp_num  = number % 10;
        ListNode* newNode = new ListNode(temp_num);
        prev->next = newNode;
        prev = newNode;
        number /= 10;
    }
    

    return reverse(newHead);
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

int main()
{
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int size;
        cin>>size;

        vector<int> input(size);

        for(int i=0;i<size;i++){
            int num;
            cin>>num;
            input[i] = num;
        }

        ListNode* head = convertArraytoLL(input);

        head = AddOnetoLL(head);
        outputLL(head);
        cout<<endl;
    }
}