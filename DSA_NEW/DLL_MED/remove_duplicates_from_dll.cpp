#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode* back;
        ListNode(int val,ListNode* next = nullptr,ListNode* back = nullptr):val(val),next(next),back(back){}
};

ListNode* remove_duplicates_from_sortedDLL(ListNode* head)
{
    if(head == NULL || head->next == NULL) return head;

    ListNode* temp = head;
    while(temp != NULL)
    {
        ListNode* curr = temp;
        if((temp->back != NULL && temp->back->val == temp->val) )
        {
            if(temp->next != NULL)
            {
                temp->next->back = temp->back;
                temp->back->next = temp->next;
                temp = temp->next;
                delete curr;
            }
            else
            {
                temp->back->next = temp->next;
                temp = temp->next;
                delete curr;
            }
        }
        else if(temp->next != NULL && temp -> next -> val == temp -> val)
        {
            if(temp->back != NULL)
            {
                temp->back->next = temp->next;
                temp->next->back = temp->back;
                temp = temp->next;
                delete curr;
            }
            else
            {
                temp->next->back = temp->back;
                if(temp == head)
                {
                    head = temp->next;
                }
                temp = temp->next;
                delete curr;
            }
        }
        else
        {
            temp=temp->next;
        }
    }
    return head;
}

ListNode* convertARRAYtoDLL(vector<int> nums)
{
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
    cout<<endl;
}

int main()
{
    int m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int j=0;j<n;j++)
        {
            int number;
            cin>>number;
            arr[j] = number;
        }
        ListNode* head = convertARRAYtoDLL(arr);
        head = remove_duplicates_from_sortedDLL(head);
        outputDLL(head);
    }
}
