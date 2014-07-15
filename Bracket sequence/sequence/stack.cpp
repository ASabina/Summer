#include "stack.h"

stack::stack()
{
    head = nullptr;
}

char stack::pop(){
    if ( head == nullptr) {
        return 0;
    }
    else {
        StackElement* del = head;
        char s = head->value;
        head = del->next;
        delete del;
        return s;
    }
}
void stack::push(char s){
    StackElement *n = new StackElement();
    n->value = s;
    n->next = head;
    head = n;
}
bool stack::isempty() {
    return (head == nullptr);
}

