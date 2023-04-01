/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* deleteDuplicates(ListNode *head)
        {

            if (head == NULL)
                return head;

            ListNode *curr = head;
            while (curr->next != NULL)
            {

                if (curr->next->val == curr->val)
                {
                    ListNode *next_to_next = curr->next->next;
                    ListNode *todelete = curr->next;
                    delete(curr->next);
                    curr->next = next_to_next;
                }
                else
                {
                    curr = curr->next;
                }
            }
            return head;
        }
};