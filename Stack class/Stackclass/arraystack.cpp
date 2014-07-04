#include "arraystack.h"

ArrayStack::ArrayStack()
{
    index = -1;
}
void ArrayStack:: push( int value ){
    index++;
    st[index]=value;
}
int ArrayStack::pop(){
    index--;
    return st[index+1];
}
