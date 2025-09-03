int getDecimal(ListNode* head){
    ListNode* ptr=head;
    int ans=0;
    int count=1;
    while(ptr){
        ptr=ptr->next;
        count=count*2;
    }
    count=count/2;
    ptr=head;
    while(ptr){
        ans+=ptr->val*count;
        count=count/2;
        ptr=ptr->next;
    }
    return ans;
}