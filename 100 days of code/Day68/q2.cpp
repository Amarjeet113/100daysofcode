//  Count Pairs whose sum is equal to X  (GFG)

class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
 int count = 0;

    // Traverse the first list
    for (Node* current1 = head1; current1 != nullptr; current1 = current1->next) {
        // Traverse the second list for each element in the first list
        for (Node* current2 = head2; current2 != nullptr; current2 = current2->next) {
            // Check if the sum of current elements is equal to x
            if (current1->data + current2->data == x) {
                count++;
            }
        }
    }

    return count;
    }
};
