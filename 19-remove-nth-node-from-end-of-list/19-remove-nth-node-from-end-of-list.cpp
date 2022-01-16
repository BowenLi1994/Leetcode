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
        
        ListNode* cur=head, *pre=NULL;
        ListNode* ahead=head;
        for(int i=0;i<n;i++)
            ahead=ahead->next;
        while(ahead!=NULL){
            ahead=ahead->next;
            pre=cur;
            cur=cur->next;
            
            //cout<<"pre: "<<pre->val<<endl;
            
        }
        
        //cout<<"pre: "<<pre->val << " cur: "<<cur->val<<endl;
        
        if(cur==NULL)
            return NULL;
        if(pre==NULL){
            head=head->next;
            return head;
        }
           
        
        pre->next=cur->next;
        cur->next=NULL;
       
        
        return head;
        
    }
};