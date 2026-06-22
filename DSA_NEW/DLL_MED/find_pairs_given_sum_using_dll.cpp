#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public :
        int val;
        ListNode* next;
        ListNode* back;
        ListNode (int val,ListNode* next=nullptr,ListNode* back=nullptr): val(val),next(next),back(back){}
};

vector<vector<int>> find_pairs_given_sum(ListNode* head,int target)
{
    if(head == NULL || head->next == NULL) return {};
    ListNode * tail = head;

    while(tail->next != NULL)
    {
        tail = tail->next;
    }

    ListNode* temp_1 = head;
    ListNode* temp_2 = tail;
    vector<vector<int>> result;
    while(temp_1 != NULL && temp_2 != NULL && (temp_1 != temp_2 && temp_1->back != temp_2))
    {
        int sum = (temp_1->val + temp_2->val);
        if(sum < target)
        {
            temp_1 = temp_1->next;
        }
        else if(sum>target)
        {
            temp_2 = temp_2->back;
        }
        else
        {
            result.push_back({temp_1->val,temp_2->val});
            temp_1 = temp_1->next;
            temp_2 = temp_2->back;
        }
    }

    return result;
}

ListNode* convertArrayToDLL(vector<int> nums)
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
        ListNode* head = convertArrayToDLL(arr);
        int target;
        cin>>target;
        vector<vector<int>> nums= 
        find_pairs_given_sum(head,target);
        for(int k=0;k<nums.size();k++)
        {
            cout<<"----- "<<k<<" -----"<<endl;
            for(int l = 0;l<2;l++)
            {
                cout<<nums[k][l]<<" ";
            }
            cout<<endl;
        }
    }
}