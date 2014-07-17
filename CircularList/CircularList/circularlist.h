#ifndef CIRCULARLIST_H
#define CIRCULARLIST_H

class CircularList
{
public:
    CircularList(int n);
    struct ListElement {
        int value;
        ListElement *next;
    };
    ListElement *head;
    int Last (int k);
};

#endif // CIRCULARLIST_H
