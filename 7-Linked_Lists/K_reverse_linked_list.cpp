ListNode* reverse(ListNode *head ,int k)
{
    if(head==NULL){ return head;}

    int count =0;

    ListNode *prev=NULL,*cur=head,*nxt;

    while(cur!=NULL && count<k)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
        ++count;
    }

    head->next = reverse(cur,k);
    return prev;


}