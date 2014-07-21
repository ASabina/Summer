#include "list.h"

List::List()
{
    head = nullptr;
}

List :: ListElement* List :: End() {
    ListElement* q = head;
    while ( q!=nullptr) {
        q = q->next;
    }
    return q;
}

List :: ListElement* List :: BeginL() {
    return head;
}

void List :: Insert(int x) {
    if ( head != nullptr )
    {
        ListElement *temp = nullptr;
        for ( ListElement *i = head; i != nullptr; i = i->next)
        {
            if ( i->next == nullptr )
            {
                temp = i;
            }
        }
        ListElement *h = new ListElement();
        h->value = x;
        temp->next = h;
        h->next = nullptr;
    }
    else {
        ListElement * k = new ListElement();
        head = k;
        head->value = x;
    }
}

void List :: DeleteI (int x) {
    if ( head == nullptr) {
        return;
    }
    else {
        ListElement *temp = head;
        for ( ListElement *i = head; i != nullptr; i = i->next )
        {
            if ( head->value == x ) {
                ListElement *temp = head;
                head = head->next;
                delete temp;
                return;
            }
            if ( i->value == x)
            {
                temp->next = i->next;
                delete i;
                return;
            }
            if ( i != head ) {
                temp = temp->next;
            }
        }
    }
}

List :: ListElement* List::Locate (int x) {
    ListElement* s = head;
    while (s->next != nullptr) {

        if (s->value == x) {
            return s;
        }
        s=s->next;
    }
    return nullptr;
}

void List ::Print() {
    for (ListElement *i = head; i != nullptr; i = i->next) {
        cout << i->value << " ";
    }
}
int List :: Length() {
    int k=0;
    for ( ListElement *i = head; i!= nullptr; i=i->next )
        k++;
    return k;
}

int* List::m ( int j) {
    int * l = new int [j];
    int k = 0;
    for (ListElement *i = head; i != nullptr; i = i->next) {
        l [k] = i->value;
        k++;
    }
    return l;
}

