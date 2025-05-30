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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr && list2==nullptr)
        {
            return nullptr;
        }
        else if(list1==nullptr && list2!=nullptr)
        {
            return list2;
        }
        else if(list2==nullptr && list1!=nullptr)
        {
            return list1;
        }
        else
        {
            ListNode*list3=nullptr;
            ListNode*temp1=list1;
            ListNode*temp2=list2;
            ListNode*temp=nullptr;
            int flag=1;
            while(temp1!=nullptr && temp2!=nullptr)
            {
                if(temp1->val<=temp2->val)
                {
                    if(flag==1)
                    {
                        list3=new ListNode(temp1->val);
                        temp=list3;
                        flag=0;
                    }
                    else{
                    temp->next=new ListNode(temp1->val);
                    temp=temp->next;
                    }
                    temp1=temp1->next;
                }
                else
                {
                    if(flag==1)
                    {
                        list3=new ListNode(temp2->val);
                        temp=list3;
                        flag=0;
                    }
                    else{
                    temp->next=new ListNode(temp2->val);
                    temp=temp->next;
                    }
                    temp2=temp2->next;
                }
            }
            while(temp1!=nullptr)
            {
                temp->next=new ListNode(temp1->val);
                temp=temp->next;
                temp1=temp1->next;
            }
            while(temp2!=nullptr)
            {
                temp->next=new ListNode(temp2->val);
                temp=temp->next;
                temp2=temp2->next;
            }
            return list3;
        }
        return nullptr;
    }
};