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
    
    ListNode* helper(ListNode* l1, ListNode* l2, int carry){
        if(!l1 && !l2 && !carry){
            return NULL;
        }
        
        int a=0,b=0;
        if(l1){
            a = l1->val;
            l1 = l1 -> next;
        }
        if(l2){
            b = l2->val;
            l2 = l2 -> next;
        }
        
        
        ListNode* curr = NULL;
        int nodeVal = (a + b + carry) % 10;
        
        carry = (a + b + carry) /10;
        
        
        curr = new ListNode(nodeVal);
        
        curr ->next = helper(l1,l2,carry);
        
        return curr;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        return helper(l1,l2,carry);
    }
};