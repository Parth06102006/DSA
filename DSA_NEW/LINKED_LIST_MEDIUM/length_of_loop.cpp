#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;

        ListNode(int val,ListNode* next = nullptr):val(val),next(next){}

};

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

int lengthOfLoop(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast!= NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        {
            slow = head;
            while(slow!=fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            int cnt = 1;
            ListNode* mover = slow->next;
            while(mover!=slow)
            {
                cnt++;
                mover = mover->next;
            }
            return cnt; 

        }

    }
    return 0;
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

}