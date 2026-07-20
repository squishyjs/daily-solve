#include <iostream>
#include <regex>
#include <string>
#include <vector>

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        this->data = x;
        next = nullptr;
    }
};

class Solution {
    public:
        Node *removeDuplicates(Node *head)
        {
            Node *current = head;
            while (current != nullptr && current->next != nullptr)
            {
                // is duplicate
                if (current->next->data == current->data)
                {
                    // get pointer to duplicate node
                    Node *duplicate = current->next;
                    current->next = duplicate->next;

                    // then delete it
                    delete duplicate;
                    continue;
                }

                // skip duplicate
                current = current->next;
            }

            return head;
        }
};
