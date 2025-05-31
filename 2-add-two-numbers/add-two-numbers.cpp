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
 /*
class Solution {
    long long reverse(long long sum)
    {
        long long t=0,r;
        while(sum>0)
        {
            r=sum%10;
            t=t*10+r;
            sum/=10;
        }
        return t;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr && l2==nullptr)
        {
            return nullptr;
        }
        else if(l1==nullptr && l2!=nullptr)
        {
            return l2;
        }
        else if(l2==nullptr && l1!=nullptr)
        {
            return l1;
        }
        else
        {
        long long sum1=0,sum2=0;
        while(l1!=nullptr)
        {
            sum1=sum1*10+l1->val;
            l1=l1->next;
        }
        while(l2!=nullptr)
        {
            sum2=sum2*10+l2->val;
            l2=l2->next;
        }
        long long s1=reverse(sum1);
        long long s2=reverse(sum2);
        long long total=(s1+s2);
        ListNode*l3=nullptr;
        ListNode*temp=nullptr;
        if(total==0)
        return new ListNode(0);
        while(total>0)
        {
            long long d=total%10;
            if(l3==nullptr)
            {
                l3=new ListNode(d);
                temp=l3;
            }
            else
            {
            temp->next=new ListNode(d);
            temp=temp->next;
            }
            total=total/10;
        }
        
    return l3;
        }
        return nullptr;
    }
};*/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};
