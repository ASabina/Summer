#include <QCoreApplication>
#include <QtCore/QDebug>

#include<iostream>
#include"pointerStack.h"
#include "arraystack.h"

using namespace std;

int main()
{
    Stack stack = Stack();
    stack.push(3);
    stack.push(44);
    stack.push(777);

    cout << stack.pop() << " ";
    cout << stack.pop() << " ";
    cout << stack.pop() << " ";

    ArrayStack stack2 = ArrayStack();
    stack2.push(22);
    stack2.push(66);
    stack2.push(99);
    cout << stack2.pop() << " ";
    cout << stack2.pop() << " ";
    cout << stack2.pop() << " ";



    return 0;
}
