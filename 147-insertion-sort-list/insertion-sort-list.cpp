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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>temp;
        while(head)
        {
            temp.push_back(head->val);
            head=head->next;
        }
        ListNode* ans=new ListNode(0);
        ListNode* list=ans;
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            ListNode* NN=new ListNode(temp[i]);
            ans->next=NN;
            ans=ans->next;
        }
        return list->next;
    }
};