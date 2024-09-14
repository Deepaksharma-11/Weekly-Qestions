#include <iostream>
using namespace std;


class Node {
    public:
    int data;
    Node* next;
    Node() {
        this->data=0;
        this->next=NULL;
    }
    Node(int data) {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtEnd(Node*& head, int data) {
    
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Before insertion: ";
    printList(head);
    insertAtEnd(head, 40);
    cout << "After insertion: ";
    printList(head);

    return 0;
}
