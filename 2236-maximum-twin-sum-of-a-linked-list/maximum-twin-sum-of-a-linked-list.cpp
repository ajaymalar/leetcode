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
    ListNode* reverselink(ListNode* h)
    {
        ListNode*temp=h;
        ListNode*prev=nullptr;
        ListNode*nextnode=nullptr;
        while(temp!=nullptr)
        {
            nextnode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nextnode;
        }
        return prev;
    }
public:
    int pairSum(ListNode* head) {
        if(head==nullptr)
        return 0;
        ListNode*temp=head;
        ListNode*dup=new ListNode(head->val);
        ListNode *tdup=dup;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
            tdup->next=new ListNode(temp->val);
            tdup=tdup->next;
        }
        dup=reverselink(dup);
        temp=head;
        int maxi=INT_MIN;
        while(temp!=nullptr && dup!=nullptr)
        {
            int sum=0;
            sum=temp->val+dup->val;
            maxi=max(maxi,sum);
            temp=temp->next;
            dup=dup->next;
        }
        return maxi;
    }
};