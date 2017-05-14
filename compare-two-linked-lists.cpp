//  method-only submission

int CompareLists(Node* headA, Node* headB) {
    bool equal = true;
    Node *tempA = headA, *tempB = headB;
    while (tempA and tempB) {
        if (tempA->data != tempB->data) {
            equal = false;
            break;
        }
        tempA = tempA->next;
        tempB = tempB->next;
    }
    if (equal and !tempA and !tempB) return 1;
    else return 0;
}
