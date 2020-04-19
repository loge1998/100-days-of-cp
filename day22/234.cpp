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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr!=NULL)
        {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        
        return prev; 
    }
    
    ListNode* findMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* mid = findMid(head);
        ListNode* reversed = reverseList(mid);
        
        while(head!=NULL && reversed!=NULL)
        {
            cout<<head->val<<" "<<reversed->val<<endl;
            if(reversed->val != head->val)
            {
                cout<<head->val<<" "<<reversed->val<<endl;
                return false;
            }
            reversed = reversed->next;
            head = head->next;
        }
        
        return true;
    }
};
