//  19. Remove Nth Node From End of List


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow= head,*fast=head;
        while(n--){
            fast = fast->next;
        }
        if(fast== NULL) return slow->next;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
