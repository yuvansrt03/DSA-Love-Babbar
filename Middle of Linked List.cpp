class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int mid=(count/2)+1;
        count=1;
        temp=head;
        while(count!=mid){
            count++;
            temp=temp->next;
        }
        return temp;
    }
};
