/*
 * Frequently asked Linkedlist questions
 * Refer: Stanford's list of linkedlist problems
 */

#include "bits/stdc++.h"
using namespace std;

class Node {
public:
    int data;
    Node *next;
};

void display_list(Node* node)
{
    while(node != nullptr)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

void push(Node* head, int value)
{
    Node* tmp = new Node();
    tmp->data = value;
    tmp->data = head;
    head = tmp;
}

void push_at_specific_position(Node* head, int pos, int value)
{
    Node* prev = new Node();
    Node* current = new Node();
    Node* tmp = new Node();
    current = head;
    for(int i=0; i<pos; i++)
    {
        prev = current;
        current = current->next;
    }
    tmp->data = value;
    prev->next = tmp;
    tmp.next = current;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = nullptr;
    display_list(head);
    return 0;
}