#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

int sum(ListNode *head)
{
	ListNode* current = head;
	long long total = 0;
	while(current != NULL)
	{
		total += current->val;
		current = current->next;
	}
	return total;

}

int length(ListNode *head)
{
	ListNode* current = head;
	long long total = 0;
	while(current != NULL)
	{
		total++;
		current = current->next;
	}
	return total;
}

void PrintReverse(ListNode *head)
{
    ListNode* prev = nullptr; 
    ListNode* current = head; 
    
    while(current != nullptr)
    {
        // Preserving the remaining list
        ListNode* tmp = current->next; 
        
        // Switching the pointers
        current->next = prev; 
        prev = current;
        
        // Moving to the next one.
        current = tmp; 
    }
    
    // Linkedlist has been reversed
    ListNode* ct = prev;
    while(prev != NULL)
    {
        cout << prev->val << " ";
        prev = prev->next;
    }
    cout << "\n"; 
}


int hasCycle(ListNode *head)
{
        if(head == NULL) 
             return false;
	ListNode* slow = head;
	ListNode* fast = head->next;

	while(slow != fast)
	{
		if(fast == NULL || fast->next == NULL)
			return false; 
		slow = slow->next;
		fast = fast->next->next;
	}

	return true;
}

int main()
{
	return 0;
}