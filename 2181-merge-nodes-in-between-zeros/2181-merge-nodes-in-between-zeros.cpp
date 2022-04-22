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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* flag = temp->next;
        while(temp->next){
            if(temp->next->val !=0){
                temp->val = temp->val + temp->next->val;
                if(flag->next->next){
                    temp->next = flag->next;
                }
                else{
                    temp->next = NULL;
                }
                flag = flag->next;
            }
            else{
                    temp = temp->next;
                    flag = flag->next;
            }
            
        }
        return head;
    }
};