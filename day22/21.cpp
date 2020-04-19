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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* newList  = new ListNode(0);
        ListNode* ret = newList;
        while(l1!=NULL && l2!=NULL)
        {
            ListNode* temp;
            if(l1->val < l2->val)
            {
                temp = new ListNode(l1->val);
                l1 = l1->next;
            }
            else
            {
                temp = new ListNode(l2->val);
                l2 = l2->next;
            }
            newList->next = temp;
            newList = newList->next;
        }
        
        while(l1!=NULL)
        {
            ListNode* temp = new ListNode(l1->val);
            l1 = l1->next;
            newList->next = temp;
            newList = newList->next;           
        }
        
        while(l2!=NULL)
        {
            ListNode* temp = new ListNode(l2->val);
            l2 = l2->next;
            newList->next = temp;
            newList = newList->next;                 
        }
        
        return ret->next;
        
    }
};
