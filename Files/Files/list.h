#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

class List
{
public:
    struct ListElement {
        int value;
        ListElement *next;
    };
    List();
    ListElement *End();
    void Insert (int x);
    void Delete (ListElement *p);
    ListElement *Locate (int x);
    ListElement *BeginL();
    void DeleteI (int x);
    void Print ();
    int Length();
    int* m(int j);


private:

    ListElement *head;

};

#endif // LIST_H
