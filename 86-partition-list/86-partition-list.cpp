
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
      
        
        ListNode* before = new ListNode(0);
        ListNode* before_head = before;
        
        ListNode* after = new ListNode(0);
        ListNode* after_head = after;
        
        while(head){
            if(head->val < x){
                before->next = head;
                before = before->next;
                
            }
            else{
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        
        before->next = after_head->next;
        after->next = NULL;
        
        return before_head->next;
    }
};
/*class Solution {
public:
ListNode* partition(ListNode* head, int x) {
	ListNode* l1 = new ListNode(0);
	ListNode* l2 = new ListNode(0);
	ListNode* ptr1 = l1;
	ListNode* ptr2 = l2;

	// make 2 lists
	while (head) {
		if (head->val < x) {
			ptr1->next = head;
			ptr1 = ptr1->next;
		}
		else {
			ptr2->next = head;
			ptr2 = ptr2->next;
		}
		head = head->next;
	}
	//connect 2 lists
	ptr1->next = l2->next;
	ptr2->next = NULL;
	return l1->next;
}
};*/