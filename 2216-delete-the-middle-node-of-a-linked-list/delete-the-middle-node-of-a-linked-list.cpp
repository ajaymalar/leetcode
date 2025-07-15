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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr)
        {
            c++;
            temp=temp->next;
        }
        if(c==1)
        return nullptr;
        int pos=c/2 +1;
        int it=1;
        temp=head;
        while(temp!=nullptr && it<pos-1)
        {
            temp=temp->next;
            it++;
        }
        ListNode*t=temp->next;
        temp->next=temp->next->next;
        delete t;
        return head;
    }
};