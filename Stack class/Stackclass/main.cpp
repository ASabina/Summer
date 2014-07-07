#include <QCoreApplication>
#include <QtCore/QDebug>
#include <QString>
#include<iostream>
#include"pointerStack.h"
#include "arraystack.h"
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
#include "calculator.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Stack *stack = new Stack();
    /*stack.push(3);
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
    cout << stack2.pop() <<endl;*/
    string str;
   // cout << "¬ведите выражение:";
    cin >> str;
    Calculator *calculator = new Calculator(stack);
    calculator->calc(str);
    delete stack;
    delete calculator;
    return 0;
}
