#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include "pointerStack.h"

class Calculator
{
public:
    Calculator(Stack *newStack);
    int calc(std::string const &s);
private:
    Stack *stack;
};

#endif // CALCULATOR_H
