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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head-> next == NULL)  // if list contain 0 nodes or a single node return head
            return head;
        
         ListNode* p = head;   // p pointing to head
        ListNode* res = head->next; // res is pointed to head -> next
        ListNode* q; ListNode* temp; // temporary nodes for links updation
        
        while(true)
        {
		// for eg 1 2 3 4
		//this iteration temp is point to 3 and 2 -> 1 will be acheived 
		// more explanation read after end of code
            q = p->next;
            temp = q->next;
            q->next = p;
            
            if(temp == NULL || temp->next == NULL) {
                p->next = temp;
                break;
            }
		// if statement of temp won't execute 
            p->next = temp->next;
            p = temp;
        }
        return res;  
       
    }
};