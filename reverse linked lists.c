struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    struct ListNode* t;
    struct ListNode* n=NULL;
    while(head->next!=NULL)
    {
        t=head;
        head=head->next;
        t->next=n;
        n=t;
    }
    head->next=n;
    return head;
}
