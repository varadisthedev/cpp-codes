#include <bits/stdc++.h>
using namespace std;

struct node
{
    node *prev;
    int data;
    node *next;
}

node *head = NULL;

void insertToLL(int dataToInsert)
{

    node *newNode = new node();
    node *temp = head;
    // insert at end
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newNode->prev = temp->next;
    newNode->data = dataToInsert;
    newNode->next = NULL;
}