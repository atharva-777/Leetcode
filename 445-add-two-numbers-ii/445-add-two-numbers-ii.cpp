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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
 
        stack<int>s1;
        stack<int>s2;
        
        while(l1!=nullptr){
            s1.push(l1->val);
            l1 = l1->next;
        }
        
        while(l2!=nullptr){
            s2.push(l2->val);
            l2 = l2->next;
        }
        
        vector<int>v;
        int carry = 0,sum = 0;
        while(!s1.empty() && !s2.empty()){
            sum = s1.top()+s2.top()+carry;
            v.push_back((sum%10));
            carry = sum/10;
            s1.pop(),s2.pop();
        }
        
        while(!s1.empty()){
            sum = s1.top()+carry;
            carry = sum/10;
            v.push_back(sum%10);
            s1.pop();
        }
        
        while(!s2.empty()){
            sum = s2.top()+carry;
            carry = sum/10;
            v.push_back(sum%10);
            s2.pop();
        }
        
        if(carry!=0) v.push_back(carry);
        

        int n = v.size()-1;
        ListNode* res = new ListNode(v[n]);
        ListNode* tmp = res;
        n--;
        while(n>=0){
            ListNode* curr = new ListNode(v[n]);
            tmp->next = curr;
            tmp = curr;
            n--;
        }

        
        
        return res;
    }
};