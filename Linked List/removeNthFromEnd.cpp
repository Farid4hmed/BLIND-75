//Intuition - Calculate the position from front by counting number of nodes in the list
//Front Position = No of Nodes - Back Position + 1

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int countNodes = 0;         
        ListNode* curr = head;
        
        //count the number of nodes
        while(curr!=NULL){
            countNodes++;
            curr = curr->next;
        }
        
        int pos = (countNodes - n) + 1; //calculate position from front
        
        //If head is to be removed
        if(pos == 1){
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }
        //If position to be removed is not head
        curr = head;
        while(pos != 2){
            curr = curr->next;
            pos--;
        }
        curr->next = curr->next->next;
        
        return head;
    }
};
//TC - O(n)
//SC - O(1)
