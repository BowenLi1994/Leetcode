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
        
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        int carry=0;
        while(l1 || l2){
            int val1=l1?l1->val:0;
            int val2=l2?l2->val:0;
            int sum=val1+val2+carry;
            carry=sum/10;
            ListNode* temp=new ListNode(sum%10);
            curr->next=temp;
            curr=curr->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(carry!=0){
            ListNode* temp=new ListNode(carry);
            curr->next=temp;
        }
        
        return dummy->next;
        
    }
};


/*Shiiiiit!!!!*/
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//         ListNode*  head=l1;
//         int carry=0;
//         while(l1 && l2){
//             int temp=l1->val+l2->val+carry;
//             carry=temp/10;
//             l1->val=temp%10;
//             l1=l1->next;
//             l2=l2->next;
//         }
        
//         if(l1){
//         while(l1->next){
//             int temp=l1->val+carry;
//             carry=temp/10;
//             l1->val=temp%10;
//             cout<<"temp: "<<temp<<" carry: "<<carry<<" value: "<<l1->val<<endl; 
//             l1=l1->next;
//         }
//            int temp=l1->val+carry;
//            carry=temp/10;
//            l1->val=temp%10;
//         }
        
       
        
        
//         if(l2){
//             l1=l2;
//             while(l2->next){
//                 int temp=l2->val+carry;
//                 carry=temp/10;
//                 l2->val=temp%10;
//                 l2=l2->next;
//             }
//            int temp=l2->val+carry;
//            carry=temp/10;
//            l2->val=temp%10;
            
            
           
            
//         }
        
        
        
        
//         if(carry!=0){
//             ListNode* tail=new ListNode(1);
//             l1->next=tail;
//         }
        
        
//         return head;
        
//     }
// };