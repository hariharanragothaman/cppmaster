#include "../../headers.h"
#include <shared_mutex>

template <typename T>
struct Node
{
    T data;
    shared_ptr<Node<T>> next;
};

int main()
{
    return 0;
}