#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    Stack();
    void push(   int value  );
    int pop();
private:
    struct StackElement {
        int value;
        StackElement *next;
    };
    StackElement *head;

};

#endif // STACK_H
