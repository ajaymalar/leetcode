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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp1=headA,*temp2=headB;
        while(temp1!=temp2)
        {
            temp1=temp1?temp1->next:headB;
            temp2=temp2?temp2->next:headA;
        }
        return temp1;
        /*
        ListNode *temp1=headA,*temp2=headB;
        while(temp1!=nullptr)
        {
        while(temp2!=nullptr)
        {
            if(temp1==temp2)
            {
                return temp1;
                break;
            }
            temp2=temp2->next;
        }
        temp2=headB;
        temp1=temp1->next;
        }
        return 0;
        */
    }
};