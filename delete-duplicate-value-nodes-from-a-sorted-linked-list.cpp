// method-only submission

Node* RemoveDuplicates(Node *head) {
    if (head == NULL) return head;
    Node *temp1 = head, *temp2 = head->next;
    while (temp2) {
        while(temp2 and temp1->data == temp2->data) temp2 = temp2->next;
        temp1->next = temp2;
        if (temp2) temp2 = temp2->next;
        temp1 = temp1->next;
    }
    return head;
}
