// https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=linked-lists

int findMergeNode(SinglyLinkedListNode *head1, SinglyLinkedListNode *head2)
{

  SinglyLinkedListNode *cur1 = head1;
  SinglyLinkedListNode *cur2 = head2;
  while (cur1 != cur2)
  {

    if (cur1->next == nullptr)
      cur1 = head2;
    else
      cur1 = cur1->next;

    if (cur2->next == nullptr)
      cur2 = head1;
    else
      cur2 = cur2->next;
  }
  return cur2->data;
}