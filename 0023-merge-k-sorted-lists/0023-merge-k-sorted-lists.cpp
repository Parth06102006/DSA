template <typename T>
using MinHeap = priority_queue<T,vector<T>,greater<T>>;

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        MinHeap<pair<int,ListNode*>> minHeap;
        int n = lists.size();

        for(int i=0;i<n;i++){
            ListNode* node = lists[i];
            if(node) minHeap.push({node->val,node});
        }

        ListNode* head = NULL;
        ListNode* prev = NULL;

        while(!minHeap.empty()){
            auto curr_elem = minHeap.top();
            minHeap.pop();

            ListNode* node = curr_elem.second;
            if(head == NULL){
                head = node;
                prev = node;
            }else{
                prev->next = node;
                prev = node;
            }

            if(node->next){
                minHeap.push({node->next->val,node->next});
                node->next = NULL;
            }

        }

        return head;
    }
};