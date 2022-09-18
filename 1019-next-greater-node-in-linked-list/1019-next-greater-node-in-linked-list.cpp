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
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int>res;
        stack<pair<int,int>>s;
        
        ListNode* temp = head;
        int ind = 00;
        while(temp!=nullptr){
            while(!s.empty() && s.top().first < temp->val){
                res[s.top().second] = temp->val;
                s.pop();
            }
            s.push(make_pair(temp->val,ind++));
            res.push_back(0);
            temp = temp->next;
        }
        return res;
    }
};