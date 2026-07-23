#include <iostream>
#include <string>
#include <vector>

struct Node;

static Node *parse(const std::string &s);
static std::vector<int> parse_string(const std::string &s);
static Node *build_linked_list(std::vector<int> &values);
static void print_linked_list(Node *head);


struct Node {
    public:
        int data;
        Node *next;

        Node(int value) : data(value), next(nullptr) {}
};

Node *parse(const std::string &s) {
    std::vector<int> nums = parse_string(s);
    Node *head = build_linked_list(nums);

    // start of linked list
    return head;
}

static std::vector<int> parse_string(const std::string &s) {
    // parse string and return value vector
    std::string delimeter = " -> ";
    std::vector<int> nums;

    size_t start = 0, end = 0;
    while ((end = s.find(delimeter, end)) != std::string::npos) {
        nums.push_back(std::stoi(s.substr(start, end - start)));

        // update pos
        start = end + delimeter.length();
        end = start;
    }

    // add integer to list if not "nullptr"
    std::string last = s.substr(start);
    if (last != "nullptr")
        nums.push_back(std::stoi(last));

    return nums;
}

static Node *build_linked_list(std::vector<int> &values) {
    // create linked list
    Node *head = nullptr;
    for (const int &value : values) {

        // create new node
        Node *new_node = new Node(value);

        if (head == nullptr) {
            head = new_node;
        } else {
            Node *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }

            current->next = new_node;
        }
    }

    return head;
}

static void print_linked_list(Node *head) {
    Node *current = head;
    while (current != nullptr) {
        std::cout << current->data;
        std::cout << " ";

        current = current->next;
    }

    std::cout << std::endl;
}

int main(void) {

    std::cout << "Enter the string: ";
    std::string s;
    std::getline(std::cin, s);

    Node *head = parse(s);
    print_linked_list(head);

    return 0;
}
