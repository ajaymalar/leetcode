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
    ListNode* reverse(ListNode*head)
    {
        if (!head || !head->next) 
        return head;
        ListNode*temp=head->next,*prev=head,*nxt=NULL;
        prev->next=nullptr;
        while(temp->next!=NULL)
        {
            nxt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nxt;
        }
        temp->next=prev;
        return temp;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head)
        return true;
        ListNode* copy = nullptr, *tail = nullptr, *cur = head;
        while (cur != nullptr) {
            ListNode* newNode = new ListNode(cur->val);
            if (!copy) {
                copy = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
            cur = cur->next;
        }
        ListNode* l1=reverse(copy);
        ListNode*temp=head;
        while(l1!=nullptr)
        {
            if(l1->val!=temp->val)
            return false;
            l1=l1->next;
            temp=temp->next;
        }
        return true;
    }
};