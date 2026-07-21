#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Node {
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

static int getLength(Node *head) {
    // including head
    int length = 1;
    Node *temp = head;
    while (temp != nullptr && temp->next != nullptr) {
        length++;

        temp = temp->next;
    }

    return length;
}
