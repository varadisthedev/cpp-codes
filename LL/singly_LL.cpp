#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Head pointer to first node
Node *head = NULL;

// Insert at end
void insert(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Display all nodes
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Delete first occurrence of value
void removeValue(int value)
{
    if (head == NULL)
        return;

    // If value is at head
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL && temp->next->data != value)
        temp = temp->next;

    if (temp->next == NULL)
        return; // value not found

    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

int main()
{
    insert(10);
    insert(20);
    insert(30);

    cout << "Linked List: ";
    display();

    removeValue(20);
    cout << "After Deleting 20: ";
    display();

    return 0;
}
