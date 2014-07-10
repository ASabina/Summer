#ifndef LIST_H
#define LIST_H

class List
{
public:
    struct ListElement {
        int value;
        ListElement *next;
    };
    List();
    ListElement *End();
    void Insert (int x, ListElement* p);
    void Delete (ListElement *p);
    ListElement *Locate (int x);
    ListElement *BeginL();

private:


    ListElement *head;

};

#endif // LIST_H
