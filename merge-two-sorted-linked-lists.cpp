// method-only submission

Node* MergeLists(Node *headA, Node *headB) {
    if (headA == NULL) return headB;
    if (headB == NULL) return headA;
    
    if (headA->data <= headB->data) {
        Node *remaining = MergeLists(headA->next, headB);
        headA->next = remaining;
        return headA;
    }

    else {
        Node *remaining = MergeLists(headA, headB->next);
        headB->next = remaining;
        return headB;
    }
}
