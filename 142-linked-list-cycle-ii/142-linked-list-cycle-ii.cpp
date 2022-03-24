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
    ListNode *GetStart(ListNode *slow, ListNode *fast){
        
        
        while(slow != fast){
            slow = slow ->next;
            fast = fast ->next;
        }
        return slow;
    }
    
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        if(head == NULL){
            return NULL;
        }
        
        
        while(slow ->next != NULL && fast ->next != NULL){
           
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast-> next;
            }
            else{
                return NULL;
            }
            slow = slow -> next;
            
            if(slow == fast){
                return GetStart(head, fast);
            }
        }
        return NULL;
    }
};