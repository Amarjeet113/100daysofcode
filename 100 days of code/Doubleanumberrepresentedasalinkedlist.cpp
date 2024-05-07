//  Double a Number represented in a linked list(Leetcode)


class Solution {
public:
      int multiply(ListNode*head){
        // base case 
        if(head==NULL){
            return 0;
        }
        int value = head->val*2+multiply(head->next);
        head->val= value%10;
        return value/10;  // carry
      }
    ListNode* doubleIt(ListNode* head) {
        int carry = multiply(head);
        if(carry)
        head=new ListNode(carry,head);
        return head;
    }
};



