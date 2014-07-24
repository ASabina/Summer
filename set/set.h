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
    struct TreeElement
    {
       int value;
       TreeElement *right;
       TreeElement *left;
    };
    TreeElement *root;
    void recursiveInsert(int insertedValue, TreeElement *temp, TreeElement *parent);
    void recursiveRemove(int insertedValue, TreeElement *temp, TreeElement *parent);
    TreeElement *minR(TreeElement *t);

};

#endif // SET_H
