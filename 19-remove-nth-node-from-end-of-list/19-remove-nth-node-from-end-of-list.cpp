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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        
        int k =0;
        
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            k++;
        }
        
        if(k==n){
            return head->next;
        }
        int count = 0;
        k = k-n;
        
        ListNode* prev = NULL;
        temp = head;
        
        while(temp != NULL){
            
            if(count == k){
               
                prev->next = temp->next;
                temp->next = NULL;
                return head;
            }
            prev = temp;
            temp = temp->next;
            count++;
        }
        return head;
    }
    
};