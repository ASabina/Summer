#include <QCoreApplication>
#include <QtCore/QDebug>

#include<iostream>
#include"stack.h"

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



    return 0;
}
