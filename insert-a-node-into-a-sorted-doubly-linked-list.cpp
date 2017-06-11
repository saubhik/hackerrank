// method-only submission

Node *SortedInsert(Node *head, int data) {
    Node *temp = head, *new_node = new Node;
    new_node->data = data;
    
    if (head == NULL) {
        return new_node;
    }
    
    if (temp->data > data) {
        new_node->next = head;
        return new_node;
    }
    
    bool inserted = false;
    while(temp->next) {
        if (temp->data <= data and temp->next->data >= data) {
            new_node->next = temp->next;
            new_node->prev = temp;
            temp->next = new_node;
            inserted = true;
            break;
        }
        temp = temp->next;
    }

    if (!inserted) temp->next = new_node;

    return head;
}
