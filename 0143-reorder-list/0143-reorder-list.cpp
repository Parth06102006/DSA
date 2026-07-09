/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {

        if (head == NULL || head->next == NULL) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* afterMiddleNode = slow->next;
        slow->next = NULL;
        ListNode* temp_end = reverseLinkedList(afterMiddleNode);
        ListNode* temp = head;

        while(temp_end != NULL){
            ListNode* new_temp = temp->next;
            ListNode* new_temp_end = temp_end->next;
            temp->next = temp_end;
            temp_end->next = new_temp;
            temp = new_temp;
            temp_end = new_temp_end;
        }

        return;
    }

    ListNode* reverseLinkedList(ListNode* head){

        if (head == NULL || head->next == NULL) return head;

        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp->next != NULL){
            ListNode* new_temp = temp->next;
            temp->next = prev;
            prev = temp;
            temp = new_temp;
        }

        temp -> next = prev;

        return temp;
    }
};