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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int c = 0,i=0;
        ListNode* temp = head;
        ListNode* prev = temp;
        
        while(temp!=nullptr){
            c++;
            temp = temp->next;
        }
        temp = head;
        if(c==n){
            head = head->next;
        return head;
        }
        n = c-n;
        // if(c==1){
        //     return nullptr;
        // }
        
        while(temp!=nullptr){
            if(n==i){
                prev->next = temp->next;
                break;
            }
            i++;
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};