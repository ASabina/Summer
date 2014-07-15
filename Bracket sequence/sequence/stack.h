#ifndef STACK_H
#define STACK_H

class stack
{
public:
    stack();
    struct StackElement {
        char value;
        StackElement *next;
    };
    StackElement *head;
    char pop();
    void push(char s);
    bool isempty();


};

#endif // STACK_H
