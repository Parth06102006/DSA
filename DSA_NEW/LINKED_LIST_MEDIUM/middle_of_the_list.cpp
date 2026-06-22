#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int val,ListNode* next = nullptr):val(val),next(next){}

};

int lengthList(ListNode* head)
{
    ListNode* temp = head;
    int cnt = 0;
    while(temp != nullptr)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

ListNode* middleNodeBrute(ListNode* head)
{
    ListNode* temp = head;
    int length = lengthList(head);
    int cnt = 0;
    if(length%2 == 0)
    {
        int mid = (length / 2) + 1;
        while(temp->next != nullptr)
        {
            cnt++;
            if(cnt == mid) break;
            temp = temp->next;
        }
    }
    else
    {
        int mid =  (length+1)/2;
        cout<<mid<<endl;
        while(temp->next != nullptr)
        {
            cnt++;
            if(cnt == mid) break;
            temp = temp->next;
        }
    }

    return temp;
}

ListNode * middleNodeBest(ListNode* head)
{
    ListNode * slow = head;
    ListNode * fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

ListNode* convertArrayToLL(vector <int> arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* prev = head;
    for(int i=1;i<arr.size();i++)
    {
        ListNode* temp = new ListNode(arr[i],nullptr);
        prev->next = temp;
        prev = temp;
    }
    return head;
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

    ListNode* head = convertArrayToLL(input);

    ListNode * temp = middleNodeBest(head);
    cout<<temp->val<<endl;

}