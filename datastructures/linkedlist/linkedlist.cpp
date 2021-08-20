#include "../../headers.h"
#include <shared_mutex>

template <typename T>
struct Node
{
    T data;
    shared_ptr<Node<T>> next;
};

void appendNode(Node<> head, int data)
{
    Node<int> newNode = new Node;
    Node<int> last = head
    newNode.data = data;
    newNode.next = nullptr;
    if(head == nullptr)
    {
        head = newNode;
        return;
    }

}

int main()
{
    Node<int> head;
    return 0;
}