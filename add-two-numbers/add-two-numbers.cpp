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
        ListNode* sum=new ListNode();
        int carry=0;
        ListNode* result=sum;
        
        while(l1 || l2){
            int temp=0;
            if(l1){
                temp+=l1->val;
                l1=l1->next;
            } 
            if(l2){
                temp+=l2->val;
                l2=l2->next;
            } 
            
            temp+=carry;
            carry=temp/10;
            temp%=10;
            
            ListNode* node= new ListNode(temp);
            sum->next=node;
            sum=node;
            
            
            
        }
        
        if(carry!=0){
            ListNode* node= new ListNode(carry);
            sum->next=node;
            sum=node;
        }
        
        return result->next;
        
    }
};