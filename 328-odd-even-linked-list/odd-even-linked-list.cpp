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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr ||head->next==nullptr)
        return head;
        ListNode*temp=head;
        ListNode*ans=new ListNode(temp->val);
        ListNode*t=ans;
        while(temp && temp->next && temp->next->next)
        {
                temp=temp->next->next;
                ans->next=new ListNode(temp->val);
                ans=ans->next;
        }
        temp=head->next;
        ans->next=new ListNode(temp->val);
        ans=ans->next;
        while(temp && temp->next && temp->next->next)
        {
                temp=temp->next->next;
                ans->next=new ListNode(temp->val);
                ans=ans->next;
        }
        return t;
    }
};