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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int k = lists.size(),i=0;
        
        
        if(k==0) return nullptr;
        
//         min heap
        priority_queue<int, vector<int>, greater<int>>res;
        
        
        while(i<k){
            ListNode* t = lists[i];
            if(t==nullptr){
                i++;
                continue;
            }
            while(t!=nullptr){
                
                res.push(t->val);
                t = t->next;
                }
            i++;
        }
        
        if(res.empty()) return nullptr;
      
        
     ListNode* ans = new ListNode(res.top());
        res.pop();
        ListNode* temp = ans;
        
        while(!res.empty()){
            ListNode* curr = new ListNode(res.top());
            res.pop();
            temp->next = curr;
            temp = curr;
        }
        
        
        
     
        
        return ans;
    }
};