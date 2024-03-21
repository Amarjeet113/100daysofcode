//  Remove Zero Sum Consecutive Nodes from Linked List  (LEETCODE)


class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    unordered_map<int, ListNode*> prefixSum;
    int sum = 0;
    
    for (ListNode* current = dummy; current != nullptr; current = current->next) {
        sum += current->val;
        prefixSum[sum] = current;
    }
    
    sum = 0;
    for (ListNode* current = dummy; current != nullptr; current = current->next) {
        sum += current->val;
        current->next = prefixSum[sum]->next;
    }
    
    return dummy->next;
}

};
