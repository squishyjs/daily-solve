#include <cstddef>
#include <iostream>
#include <vector>
#include <algorithm>

struct Node {
    int data;
    struct Node *next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

// Floyd's algorithm (tortoise and hare)
class Solution {
public:
    Node *detectCycle(Node *head) {
        if (head == nullptr || head->next == nullptr) {
            return NULL;
        }

        Node *slow = head;
        Node *fast = head;
        bool cycle = (fast != nullptr and fast->next != nullptr);
        while (cycle) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // cycle detected
                break;
            }
        }

        // else no cycle
        if (!cycle) {
            return NULL;
        }

        // else find index
        fast = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }
};

int main(void) {

    return 0;
}
