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
    int numComponents(ListNode* head, vector<int>& g) {
        
        unordered_set<int> subset(g.begin(),g.end());
        
        int num_com = 0;
        bool start = true;
        while(head!=NULL)
        {
            int val = head->val;
            if(subset.find(val)!=subset.end())
            {
                if(start)
                {
                    num_com++;
                    start=false;
                }
            }
            else
            {
                start=true;
            }
            head = head->next;
        }
        return num_com;
        
    }
};
