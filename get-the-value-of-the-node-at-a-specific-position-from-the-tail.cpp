// method-only submission

#include <vector>

int GetNode(Node* head, int positionFromTail) {
    Node *temp = head;
    vector<int> vec;
    while (temp) {
        vec.push_back(temp->data);
        temp = temp->next;
    }
    return vec[vec.size() - 1 - positionFromTail];
}
