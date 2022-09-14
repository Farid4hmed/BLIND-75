//Seperate left half from right half of the list
//Reverse the right half
//Merge both halves
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL)return;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        
        while(fast!=NULL && fast->next!=NULL){
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        prev->next = NULL;
        ListNode* lhead = head;
        ListNode* rhead = reverse(slow);
        merge(lhead, rhead);
    }
    
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL)return head;
        ListNode* prev = NULL;
        ListNode* temp;
        ListNode* curr = head;
        
        while(curr!=NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    void merge(ListNode* list1, ListNode* list2){
        ListNode* curr = list1;
        list1 = list1->next;
        int num = 1;
        while(list1 != NULL && list2 != NULL){
            if(num % 2 != 0){
            curr->next = list2;
            list2 = list2->next;
            }
            else {
                curr->next = list1;
                list1 = list1->next;
            }
            num++;
            curr = curr->next;
        }
        if(list1!=NULL)curr->next = list1;
        if(list2!=NULL)curr->next = list2;
    }
};
//TC - O(n)
//SC - O(1)
