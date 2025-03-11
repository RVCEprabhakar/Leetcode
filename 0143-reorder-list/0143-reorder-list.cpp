class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;  // Edge case

        vector<ListNode*> v;  // Store ListNode* instead of values
        ListNode* temp = head;

        // Store all nodes in a vector
        while (temp) {
            v.push_back(temp);
            temp = temp->next;
        }

        int i = 0, j = v.size() - 1;

        while (i < j) {
            
            v[i]->next = v[j];  // Connect first with last
            i++;

            if (i == j) break;  // If they meet, stop

            v[j]->next = v[i];  // Connect last with next first
            j--;
        }

        v[j]->next = nullptr;  // Ensure last node points to NULL
    }
};
