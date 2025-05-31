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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        int count=0;
        while(head!=NULL)
        {
            count++;
            head=head->next;
        }
       ListNode*prev=dummy,*cur=dummy,*nxt=dummy;
       while(count>=k)
       {
        cur=prev->next;
        nxt=cur->next;
        for(int i=1;i<k;i++)
        {
            cur->next=nxt->next;
            nxt->next=prev->next;
            prev->next=nxt;
            nxt=cur->next;
        }
        prev=cur;
        count-=k;
       }
       return dummy->next;
    }
};