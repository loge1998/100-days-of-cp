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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* nth = head;
        ListNode* cur = head;
        
        int count = 0;
        while(nth!=NULL)
        {
            nth = nth->next;
            count++;
        }
        
        if(count==n)
            return head->next;
        
        nth = head;
        for(int i=1;i<=n+1;i++)
        {
            nth = nth->next;
        }
        
        while(nth!=NULL)
        {  
            cur = cur->next;
            nth = nth->next;
        }
                    
        cur->next = cur->next->next;
        return head;
            
    }
};
