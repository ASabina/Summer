#pragma once

struct Stack;

Stack * createStack();  //0

void deleteStack(Stack* stack);

void push( Stack * stack, int value );

int pop(Stack* stack);
