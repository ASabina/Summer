#ifndef SET_H
#define SET_H

class Set
{
public:
    Set();
    void insert(int k);
    void remove(int k);
    bool exists(int k);

private:
    struct TreeElement {
       int value;
       TreeElement *right;
       TreeElement *left;
    };
    TreeElement *top;
    void recursiveInsert(int insertedValue, TreeElement *temp, TreeElement *parent);
};

#endif // SET_H
