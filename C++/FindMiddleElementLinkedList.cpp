#include <iostream>
#include <vector>

struct Node {
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
    }
};

static int getMiddleElement(Node *head) {
    Node *slow = head, *fast = head;

    while (fast != nullptr and fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    int middle = slow->val;
    return middle;
}
