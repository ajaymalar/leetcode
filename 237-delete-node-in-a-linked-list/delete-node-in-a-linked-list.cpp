/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        ListNode*temp=node->next;
        node->next=node->next->next;
        delete temp;
       /* normal deletion
       int data=node->val;
        ListNode *temp=head;
        if(head->val==data)
        {
            head=temp->next;
            delete head;
        }
        else
        {
            ListNode* pre=null;
            while(temp!=null)
            {
                if(temp->val==data)
                {
                    pre->next=pre->next->next;
                    delete temp;
                    break;
                }
                pre=temp;
                temp=temp->next;
            }
        }
    */
    }
};