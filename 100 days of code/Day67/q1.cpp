//   Merge In Between Linked Lists  (LEETCODE)

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        dummy->next = list1;
        
        ListNode* cur = dummy;
        for (int i = 0; i < a; i++) {
            cur = cur->next;
        }
        
        ListNode* start = cur->next;
        for (int i = a; i <= b; i++) {
            start = start->next;
        }
        
        cur->next = list2;
        
        while (list2->next != NULL) {
            list2 = list2->next;
        }
        
        list2->next = start;
        
        return dummy->next;
    }
};
