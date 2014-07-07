#include "pointerStack.h"

Stack::Stack()
{    
    head = nullptr;
}

void Stack::push(int value)
{
    StackElement * stackElement = new StackElement;
    stackElement->value = value;
    stackElement->next = head;
    head = stackElement;
}

int Stack::pop()
{
    StackElement * toDelete = head;
    int const result = toDelete->value;
    head = toDelete->next;
    delete toDelete;
    return result;
}
