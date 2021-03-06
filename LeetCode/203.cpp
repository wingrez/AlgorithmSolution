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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            ListNode *p=head;
            head=head->next;
            delete p;
        }
        if(head==NULL) return NULL; 
        ListNode *cur=head;
        while(cur->next){
            if(cur->next->val==val){
                ListNode* p=cur->next;
                cur->next=p->next;
                delete p;
            }
            else{
                cur=cur->next;
            }
        }
        return head;
    }
};
