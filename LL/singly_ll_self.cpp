#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};

// defining pointer to first node
node *head = NULL; // assume LL is empty

void insertValue(int numToInsert)
{
    node *newNode = new node();
    newNode->data = numToInsert;
    newNode->next = NULL;

    if (head == NULL)
    {
        // this means LL is empty , so insert this as head node
        head = newNode;
        return;
    }

    // if head is not NULL
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteValue(int valueToDelete)
{
    // if LL is empty then do nothing
    if (head == NULL)
    {
        return;
    }

    // element is at node
    if (head->data == valueToDelete)
    {
        // another pointer to head , for deletion
        node *tempPtrToHead = head;
        head = head->next;
        delete tempPtrToHead;
        return;
    }

    node *temp = head;
    while (temp->next != NULL && temp->next->data != valueToDelete)
        temp = temp->next;

    if (temp->next == NULL)
        return; // value not found

    node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

void DisplayLL()
{
    node *temp = head;
    cout << "elements of LL are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    insertValue(12);
    insertValue(12);
    insertValue(12);
    insertValue(12);

    DisplayLL();
    return 0;
}