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
    ListNode* middleNode(ListNode* head) {
        
        
        // simple approach with two iteration
        
//         int n=0;
//         ListNode* temp= head;
//         while(temp!=NULL){
//             n++;
//             temp=temp->next;
//         }
//         int middle = n/2;
        
//         // again storing head in temp
//         temp=head;
            
//         while(middle--){
//             temp=temp->next;
//         }
//         return temp;
        
        //best approch
        
        ListNode *slow=head,*fast=head;
        
        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
    }
};