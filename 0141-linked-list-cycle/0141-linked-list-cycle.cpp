/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        unordered_set<ListNode*>ans;
        while(temp!=nullptr){
            if(ans.find(temp)!=ans.end()){
                return true;
               
            }
             ans.insert(temp);
                temp=temp->next;
        }
        return false;

        
    }
};