#include <ios>
#include <vector>
class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

static int solve(Node* head) {
    // edge case for length of linked list = NULL
    if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
        return 0;
    }

    std::vector<int> critical_points;
    Node *previous = head, *current = head->next;

    while (current->next != nullptr) {
        Node *next = current->next;

        if ((current->data > previous->data and current->data > next->data)
            or (current->data < previous->data and current->data < next->data))
        {
            critical_points.push_back(current->data);
        }

        // update state
        previous = current;
        current = next;
    }

    return critical_points.size();
}

/*
 PERF: Pseudocode

function findCriticalPoints(head):
    if head is null or head.next is null or head.next.next is null:
        return empty list

    previous = head
    current = head.next
    index = 1

    criticalPoints = empty list

    while current.next is not null:
        next = current.next

        if (current.value > previous.value AND current.value > next.value) OR
           (current.value < previous.value AND current.value < next.value):
            add index to criticalPoints

        previous = current
        current = next
        index = index + 1

    return criticalPoints
*/
