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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* head=new ListNode();
        ListNode* res=head;
        while(list1 || list2){
            int val=0;
            
            if(list1 && list2 ){
                if(list1->val < list2->val){
                    val=list1->val;
                    list1=list1->next;
                }
                else{
                    val=list2->val;
                    list2=list2->next;
                }
            }
            else if (!list1){
                  val=list2->val;
                  list2=list2->next;
            }
            else if(!list2){
                val=list1->val;
                list1=list1->next;
            }
            //cout<<val<<endl;
            ListNode* t=new ListNode(val);
            head->next=t;
            head=head->next;
        }
        
        return res->next;
        
    }
};