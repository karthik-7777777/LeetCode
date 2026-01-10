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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(0);
        ListNode* dummy=ans;
        int rem=0,tot=0;
        while(l1 || l2 || rem)
        {
            tot=rem;
            if(l1){
                tot+=l1->val;
                l1=l1->next;
            }
            if(l2){
                tot+=l2->val;
                l2=l2->next;
            }
            rem=tot/10;
            int x=tot%10;
            ListNode* NN=new ListNode(x);
            dummy->next=NN;
            dummy=dummy->next;
        }
        return ans->next;
    }
};