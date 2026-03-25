/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {

        ListNode prev=null;
        ListNode mid=null;
        ListNode curr=head;
    
        while(curr!=null){
        //   ListNode next=curr.next;
        //     curr.next=prev;
        //     prev=curr;
        //     curr=next;

        prev=mid;
        mid=curr;
        curr=curr.next;
        mid.next=prev;


        }
        
        //   return prev; 
        return mid;
    }
}