#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

class ArrayStack
{
public:
    ArrayStack();
    void push(int value);
    int pop();

private:
    int index;
    int st[100];
    int value;

};

#endif // ARRAYSTACK_H
