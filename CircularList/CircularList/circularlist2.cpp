#include "circularlist.h"
#include <iostream>
using namespace std;

CircularList::CircularList(int n)
{
    ListElement *temp = nullptr;
    for (int i = 1; i <= n; i++) {
        ListElement *a = new ListElement();        
        a->value = i;
        if (i == 1) {
            head = a;
        }
        if (temp != nullptr)
        {
            temp->next = a;
        }                
        temp = a;
        if ( i == n ) {
            a->next = head;
        }
    }
}

int CircularList::Last(int k) {
    ListElement *temp = head;
    for ( ListElement *i = head; i->value != i->next->value; i = temp->next) {
        if ( i != head )
        {
            temp = temp->next;
        }
        for ( int j = 1; j < k; j++) {
            i = i->next;
        }

        if ( i == temp) {
            temp = temp->next;
        }

        if ( i == head) {
            head = head->next;
        }

        for (  ListElement *l = head; l->next!=i->next; l = l->next )
        {
            if ( l->next == i )
            {
                l->next = i->next;
            }
        }
        cout << i->value << "\n";
        delete i;

    }
    return temp->value;
}
