// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem?isFullScreen=true

SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *llist, int position)
{
  SinglyLinkedListNode *cur = llist;

  if (position == 0)
  {
    llist = llist->next;
    return llist;
  }
  else
  {
    for (int i = 0; i < position - 1; i++)
      cur = cur->next;

    cur->next = cur->next->next;
    return llist;
  }
}