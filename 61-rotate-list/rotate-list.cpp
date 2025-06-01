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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr||k==0)
        return head;
        ListNode*temp=head;
        int len=0;
        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        k=k%len;
        if(k==0)
        return head;
        int count=0;
        int l=len-k;
        temp=head;
        while(count<l-1)
        {
            temp=temp->next;
            count++;
        }
        ListNode* newhead=temp->next;
        temp->next=nullptr;
        temp=newhead;
        while(temp->next!=nullptr)
        {
            temp=temp->next;
        }
        temp->next=head;
        return newhead;
    }
};