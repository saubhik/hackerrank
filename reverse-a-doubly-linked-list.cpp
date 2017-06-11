// method-only submission

Node *Reverse(Node *head) {
    if (head == NULL or head->next == NULL) return head;

    Node *remaining = Reverse(head->next);
    if (remaining->next == NULL) remaining->prev = NULL;
    head->next->next = head;
    head->prev = head->next;
    head->next = NULL;

    return remaining;
}
