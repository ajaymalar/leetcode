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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        int count=0;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        int mid=(count/2)+1;
        count=0;
        temp=head;
        while(temp!=nullptr)
        {
            count++;
            if(count==mid)
            {
                return temp;
            }
            temp=temp->next;
        }
        return temp;
    }
};