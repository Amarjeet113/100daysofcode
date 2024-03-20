//  Middle of the Linked List (LEETCODE)

class Solution {
public:
int getlength(ListNode*head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}
    ListNode* middleNode(ListNode* head) {
        int len = getlength(head);
        int ans=(len/2);

        ListNode*temp=head;
        int cnt=0;
        while(cnt<ans){
            temp=temp->next;
            cnt++;
        }
        return temp;

    }
};
