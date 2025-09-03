class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(){
        val=0;
        next=nullptr;
    }
    ListNode(int data){
        val=data;
        this->next=nullptr;
    }
}
ListNode* swapNodes(ListNode* head){
    if(!head || !head->next){
        return head;
    }
    ListNode dummy(0);
    dummy.next=head;
    ListNode* prev=&dummy;
    while(head && head->next){
        ListNode* first=head;
        ListNode* second=head->next;

        prev->next=second;
        first->next=second->next;
        second->next=first;

        prev=first;
        head=first->next;
    }
    return dummy.next;
}