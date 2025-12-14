#include <unordered_set>
#include <iterator>
#include <iostream>

struct Node {
    int value;
    Node *nextNode;

    Node* getNext() {
        return nextNode;
    }

    bool const operator==(const Node *other) const {
        return value == other->value;
    }
};

int getLoopSize(Node* startNode)
{
    std::unordered_set<Node*> seen;
    Node* current = startNode;

    while (seen.find(current) == seen.end())
    {
        seen.insert(current);
        current = current->getNext();
    }

    Node* loopStart = current;
    int loopSize = 1;
    current = current->getNext();

    while (current != loopStart)
    {
        loopSize++;
        current = current->getNext();
    }

    return loopSize;
}
