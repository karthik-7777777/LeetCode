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
    ListNode* sortList(ListNode* head) {
        vector<int>temp;
        while(head)
        {
            temp.push_back(head->val);
            head=head->next;
        }
        head=new ListNode(0);
        ListNode* ans=head;
        sort(temp.begin(),temp.end());
        for(auto i:temp)
        {
            ListNode* NN=new ListNode(i);
            head->next=NN;
            head=head->next;
        }
        return ans->next;
    }
};