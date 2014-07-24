#include "set.h"

set::set()
{
    top = nullptr;
}

bool set::exists(int k) {
    if (top == nullptr) {
        return false;
    }
    else {
        if (k == top->value) {
            return true;
        }
        if (k < top->left->value) {
            top = top->left;
            return exists(k);
        }
        if (k > top->right->value) {
            top = top->right;
            return (exists(k));
        }
    }
}

void set::insert(int k) {
    insert2(k, top, top);
}
void set::insert2(int k, treeElement *temp, treeElement*p)
{
    if (temp == nullptr)
    {
        treeElement * h = new treeElement();
        h->value = k;
        h->left = nullptr; h->right = nullptr;
        if ( top == nullptr) {
            top = h;
        }
        else
        {
            if (k > p->value) {
                p->right = h;
            }
            else {
                p->left = h;
            }
        }
    }
    else {
        if (temp->value == k)
        {
            return;
        }
        if (k < temp->value)
        {
            temp = temp->left;
            if (temp != nullptr) {
                p = temp;
                return insert2(k,temp,p);
            }
            else {
                     insert2(k, temp, p);
                return;
            }
        }
        if (k > temp->value)
        {
            temp = temp->right;
            if (temp != nullptr) {
                p = temp;
                return insert2(k,temp,p);
            }
            else {
                      return insert2(k,temp,p);

            }
        }
    }
}
