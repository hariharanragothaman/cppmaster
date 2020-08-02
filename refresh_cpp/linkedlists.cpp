#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};


ListNode* reverse_list(ListNode* head)
{
    ListNode* prev = NULL;
    ListNode* current = head;
    ListNode* next = NULL;

    while(current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main()
{
    cout << "Linkedlist problems" << endl;
}