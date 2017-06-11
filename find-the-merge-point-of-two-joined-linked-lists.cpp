// method-only submission

#include <map>

int FindMergeNode(Node *headA, Node *headB) {
    Node *tempA = headA, *tempB = headB;
    map<Node*, bool> visited;

    while(tempA) {
        visited[tempA] = true;
        tempA = tempA->next;
    }

    while(tempB) {
        if (visited[tempB]) {
            return tempB->data;
        }
        tempB = tempB->next;
    }
    
    return 0;
}
