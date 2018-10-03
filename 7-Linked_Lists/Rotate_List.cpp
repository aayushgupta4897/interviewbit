






int count =1;
ListNode *temp =head;
while(temp!=NULL && temp->next!=NULL)
{
	temp = temp->next; ++count;
}

k = k%count;
if(k==0){ return head;}

int z = n-k-1;
ListNode *cur = head;
while(cur!=NULL && z>0)
{
	cur = cur->next; --z;
}

ListNode *nxt = cur->next;
cur->next = NULL;

temp = temp->next = head;

return nxt;