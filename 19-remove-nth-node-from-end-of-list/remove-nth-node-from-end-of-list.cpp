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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int counter=0;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            counter++;
            temp=temp->next;
        }
        int d=counter-n+1;
        temp=head;
        counter=1;
        ListNode*prev=temp;
        if(d==1)
        {
            ListNode*newhead=head->next;
            delete head;
            return newhead;
        }
        while(temp!=nullptr)
        {
            if(counter==d)
            {
                prev->next=temp->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
            counter++;
        }
        return head;
    }
};