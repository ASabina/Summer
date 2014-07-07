#include "calculator.h"
#include "pointerStack.h"
#include <iostream>

using namespace std;

Calculator::Calculator(Stack *newStack)
{
    this->stack = newStack;

}

int Calculator::calc(std::string const &inputString)
{
    int lengthStr = inputString.length();
    int result = 0;

    for (int i = 0; i < lengthStr; i++) {
        if (isdigit(inputString[i])) {
            int digit = inputString[i] - '0';
            stack->push(digit);
        }
        else {
            if  (inputString[i] == '+') {
                result = stack->pop() + stack->pop();
                stack->push(result);
                cout << result << endl;
            }

            if (inputString[i] == '-') {
                result = stack->pop() - stack->pop();
                cout << -result << endl;
                stack->push(-result);
            }

            if (inputString[i] == '*') {
                result = stack->pop() * stack->pop();
                cout << result << endl;
                stack->push(result);
            }

            if  (inputString[i] == '/') {
                int firstOperand = stack->pop();
                int secondOperand = stack->pop();
                result = firstOperand / secondOperand;
                cout << result;
                stack->push(result);
            }
        }
    }

    return result;
}
