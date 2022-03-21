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
    void deleteNode(ListNode* node) {
        // if node is last node of ll
        //if(node->next==NULL) delete node;
        
        // swapping current node (node want to remove) with next node
        swap(node->val,node->next->val);
        ListNode* temp=node->next; // storing the node we want to delete
        
        node->next=node->next->next;
        
        // delete the node  Most Important part 
        delete temp;
    }
};