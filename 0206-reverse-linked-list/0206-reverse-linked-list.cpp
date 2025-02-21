class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            // No change is needed; return the current head
            return head;
        }
        
        ListNode* prev = NULL;   // Initialize previous pointer to NULL
        ListNode* current = head; // Start with the head node
        
        while (current != NULL) {
            ListNode* nextNode = current->next; // Temporarily store the next node
            current->next = prev;              // Reverse the link
            prev = current;                    // Move prev to current
            current = nextNode;                // Move to the next node
        }

        return prev; // New head of the reversed list
    }
};
