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

void List :: Insert(int x, ListElement *p) {
    if ( p!=nullptr) {
    ListElement * temp = p->next;
    ListElement * h = new ListElement;
    h->value = x;
    h->next = temp;
    p->next = h;
    }
    else {
        ListElement * k = new ListElement();
        head = k;
        head->value = x;
    }
}

void List :: Delete(ListElement *p) {
    ListElement *temp = p->next;
    p->next = p->next->next;
    delete temp;
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
