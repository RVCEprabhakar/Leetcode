/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>A;
        ListNode* temp=head;
        while(temp!=NULL){
            A.push_back(temp->val);
            temp=temp->next;
        }
        sort(A.begin(),A.end());
        int i=0;
        ListNode* temp2=head;
        while(temp2){
            temp2->val=A[i];
            temp2=temp2->next;
            i++;
        }
        return head;
    }
};