#pragma once

struct Stack;

Stack * createStack();

void deleteStack(Stack* stack);

void push( Stack * stack, int value );

int pop(Stack* stack);
