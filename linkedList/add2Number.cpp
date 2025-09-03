class ListNode{
    public:
        int val;
        ListNode* next;
        //default constructor
        ListNode(){
            val=0;
            next=nullptr;
        }
        //parametrized constructor
        ListNode(int data){
            val=data;
            this->next=nullptr;
        }
};
ListNode* add(ListNode* &head1, ListNode* &head2){
        ListNode dummy(-1);
        ListNode* res=&dummy;

        ListNode* ptr1=head1, *ptr2=head2;

        int carry=0;
        while(ptr1 || ptr2){
            int sum=carry;
            if(ptr1){
                sum+=ptr1->val;
                ptr1=ptr1->next;
            }
            if(ptr2){
                sum+=ptr2->val;
                ptr2=ptr2->next;
            }
            //making the sumation node here
            ListNode* summation=new ListNode(sum%10);//if sum is of more thsn 1 digit, I am extracting the last digit here
            carry=sum/10;
            res->next=summation;
            res=res->next;
        }
        //if still there is a carry left, then I am making the new node for it
        if(carry){
            ListNode* node=new ListNode(carry);
            res->next=node;
        }
        return dummy.next;
}