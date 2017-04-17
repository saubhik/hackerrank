/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *temp = new Node, *newNode = new Node;
    newNode->data = data;
    if (position == 0) {
        newNode->next = head;
        return newNode;
    }
    int i = 0;
    temp = head;
    while ((position - 1) != i) {
        i++;
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
