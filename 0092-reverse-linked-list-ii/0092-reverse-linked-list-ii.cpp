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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummyNode = new ListNode(0,head);
        ListNode* curr = head;
        ListNode* prev = dummyNode;
        ListNode* l = NULL;
        ListNode* r = NULL;
        int diff = right - left + 1;
        while(curr){
            left--;
            if(left == 0){
                l = prev;
                r = curr;
                while(curr and diff--){
                    ListNode* temp = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = temp;
                }
                break;
            }
            if(curr)curr = curr->next;
            prev = prev->next;
        }
        l->next = prev;
        r->next = curr;
        return dummyNode->next;
    }
};