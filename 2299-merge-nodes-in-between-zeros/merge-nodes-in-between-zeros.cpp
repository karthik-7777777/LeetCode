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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* prev=temp;
        ListNode* curr=head;
        while(curr)
        {
            if(curr->val > 0)
            {
                int x=0;
                while(curr && curr->val > 0)
                {
                    x+=curr->val;
                    curr=curr->next;
                }
                ListNode* NN=new ListNode(x);
                prev->next=NN;
                prev=NN;
            }
            curr=curr->next;
        }
        return temp->next;
    }
};