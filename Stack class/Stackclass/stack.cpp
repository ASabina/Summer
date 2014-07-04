#include "stack.h"

Stack::Stack()
{    
   head = nullptr;
}

void Stack:: push( int value ){
    StackElement *  stackElement = new StackElement;
    stackElement ->value= value;
    stackElement->next=head;
    head= stackElement;
}

int Stack:: pop (){
    StackElement * k =head;
    int ks = k->value;
    head=k->next;
    delete k;
    return ks;
}
