//hint: while iterating, maintain a temp pointer which holds account of the next node and a prev pointer which holds account of the previous node
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;
        ListNode* temp;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
};
//TC - O(n)
//SC - O(1)
