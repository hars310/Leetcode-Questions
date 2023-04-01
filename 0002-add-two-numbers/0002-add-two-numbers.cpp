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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *temp = new ListNode(0);
        ListNode *curr = temp;
        int count = 0;
        
        while(l1 != NULL || l2 != NULL || count == 1){
            int sum = 0;
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += count;
            count = sum/10;
            ListNode *node = new ListNode(sum % 10);
            curr->next = node;
            curr = curr->next;
        }
        return temp->next;
    }
};
    
