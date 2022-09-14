//Trick - maintain a slow and a fast pointer, slow goes one node at a time and fast goes two at a time
//Intuition - If there is no cycle, the nodes will never meet, however if there is a cycle... they are bound to meet at some point
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)return false;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)return true;
        }
        return false;
    }
};
//TC - O(n)
//SC - O(1)
