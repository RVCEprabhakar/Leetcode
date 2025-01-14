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
    bool isPalindrome(ListNode* head) {
        //here we are using the stack for the wheather the link list is palidrome or not
        ListNode*temp=head;
        stack<int>st;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp && temp->val == st.top()){
           st.pop();
           temp=temp->next;

            }
            return temp == NULL;   
        }
    };
