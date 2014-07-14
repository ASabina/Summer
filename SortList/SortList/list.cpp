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
        if ( head->value > x ) {
            ListElement *h = new ListElement;
            h->value = x;
            h->next = head;
            head=h;
            return;
        }
        ListElement *tmp = head;
        for ( ListElement *i = head; i != nullptr; i = i->next )
        {
            if (i->value > x)
            {
                ListElement *h = new ListElement();
                h->value = x;
                h->next = i;
                tmp->next = h;
            }
            if ( i != head ) {
                tmp = tmp->next;
            }
        }
        if ( tmp->next == nullptr ) {
            ListElement *h = new ListElement;
            h->value = x;
            tmp->next = h;
            h->next = nullptr;
        }
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

/*void List :: Insert(int x, ListElement *p) {

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
}*/

/*void List :: Delete(ListElement *p) {
    ListElement *temp = p->next;
    p->next = p->next->next;
    delete temp;
}*/



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
