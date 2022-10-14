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
    ListNode* deleteMiddle(ListNode* head) {
        
        /*int total= 1;
        ListNode* temp = head;
        while(temp->next){
            total++;
            temp = temp->next; 
        }
        
        int middle = total/2;
        
        if(total == 2){
            head->next = NULL;
            return head;
        }
        if(total == 1){
            return NULL;
        }
        ListNode* prev = NULL;
        temp = head;
        
        while(middle){
            prev =temp;
            temp = temp->next;
            middle--;
        }
        
        prev->next = temp->next;
        temp->next = NULL;
        
        return head;*/
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        
        if(slow->next==NULL){
            return NULL;
        }
        
        while(fast && fast->next){
            
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        prev->next = slow-> next;
        slow->next = NULL;
        return head;
    }
};