// method-only submission

#include <map>

bool has_cycle(Node *head) {
    if (head == NULL) return false;
    map<Node*, bool> myMap;
    Node *temp = head;
    while (temp) {
        if (myMap[temp] == true) return true;
        myMap[temp] = true;
        temp = temp->next;
    }
    return false;
}
