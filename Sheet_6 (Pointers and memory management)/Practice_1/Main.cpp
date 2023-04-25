// https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=linked-lists

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *llist, int data, int position)
{
  SinglyLinkedListNode *cur = llist;
  SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);

  if (position == 0)
  {
    newNode->next = llist;
    return newNode;
  }
  else
  {
    for (int i = 0; i < position - 1; i++)
    {
      cur = cur->next;
    }
    newNode->next = cur->next;
    cur->next = newNode;
    return llist;
  }
}