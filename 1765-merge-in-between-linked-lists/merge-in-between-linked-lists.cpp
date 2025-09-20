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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int x=1;
        while(x<a)
        {
            temp=temp->next;
            x++;
        }
        ListNode* temp2=temp->next;
        while(x<b)
        {
            temp2=temp2->next;
            x++;
        }
        temp->next=list2;
        while(list2->next!=nullptr)
        {
            list2=list2->next;
        }
        list2->next=temp2->next;
        return list1;
    }
};