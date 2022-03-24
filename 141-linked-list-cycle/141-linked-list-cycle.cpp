/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        if(head == NULL){
            return false;
        }
        
        while(slow->next != NULL && fast->next != NULL){
            
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
            }
            else{
                return false;
            }
            
            slow = slow -> next;
            
            if(fast == slow){
                return true;
            }
            
        }
        return false;
        
    }
};