#include "stack.h"

struct StackElement {
    int value;
    StackElement* next;
};

struct Stack {
    StackElement* head;

};

Stack * createStack(){

    Stack *result= new Stack;
    result ->head = nullptr;
    return result;
}

void deleteStack(Stack* stack){
    while ( stack->head!=nullptr){
        pop(stack);
    }
}

void push( Stack * stack, int value ){
    StackElement *  stackElement = new StackElement;
    stackElement ->value= value;
    stackElement->next=stack->head;
    stack ->head= stackElement;
}

int pop (Stack *stack){
    StackElement * k = stack->head;
    int ks = k->value;
    stack->head=k->next;
    delete k;
    return ks;



}
