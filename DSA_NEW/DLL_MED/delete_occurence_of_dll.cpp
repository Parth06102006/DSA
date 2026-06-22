#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public :
        int val;
        ListNode* next;
        ListNode* back;
        ListNode(int val,ListNode* next = nullptr,ListNode*back = nullptr):val(val),next(next),back(back){}
};

ListNode* delete_occurences_of_key_dll(ListNode* head , int target)
{
    if(head == NULL) return head;

    if(head->next == NULL && head->val == target) {return NULL;}

    if(target == head->val )
    {
        while(head-> val == target){
            ListNode* temp = head;
            head = head->next;
            if(head != NULL) head->back = NULL;
            delete temp;
        }
    }

    ListNode* temp = head;
    while(temp != NULL)
    {
        if(temp->val == target)
        {
            ListNode* prev = temp->back;
            ListNode* front = temp->next;
            prev->next = front;
            if(front != NULL) front->back = prev;
            delete temp;
            temp = front;
        }
        else
        {
            temp=temp->next;
        }
    }
    return head;
}

ListNode* convertArrayToDLL(vector<int> nums){
    ListNode* head = new ListNode(nums[0]);
    ListNode* prev = head;
    for(int i=1;i<nums.size();i++)
    {
        ListNode* temp = new ListNode(nums[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void outputDLL(ListNode* head)
{
    ListNode* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int n;
        cin>>n;
        vector<int> input(n);
        for(int j=0;j<n;j++)
        {
            int num;
            cin>>num;
            input[j] = num;
        }
        ListNode* head = convertArrayToDLL(input);

        int target;
        cin>>target;

        head = delete_occurences_of_key_dll(head,target);
        outputDLL(head);
    }
}