#include <QCoreApplication>
#include <QtCore/QDebug>

#include<iostream>
#include"stack.h"

using namespace std;


int main()
{

    Stack *stack= createStack();
    push (stack, 1);
    push (stack, 2);
    push (stack, 3);

    cout << pop(stack) << " ";
    cout << pop(stack) << " ";
    cout << pop(stack) << " ";
    deleteStack(stack);
    return 0;
}
