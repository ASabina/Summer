#include "set.h"

Set::Set()
{
    top = nullptr;
}

bool Set::exists(int k)
{
    if (top == nullptr)
    {
        return false;
    }
    else
    {
        if (k == top->value)
        {
            return true;
        }
        else if (k < top->left->value)
        {
            top = top->left;
        }
        else if (k > top->right->value)
        {
            top = top->right;
            return exists(k);
        }
        return exists(k);

    }
}

void Set::insert(int k)
{
    recursiveInsert(k, top, top);
}

void Set::recursiveInsert(int insertedValue, TreeElement *currentNode, TreeElement *parent)
{
    if (currentNode == nullptr)
    {
        TreeElement *newElement = new TreeElement();
        newElement->value = insertedValue;
        newElement->left = nullptr;
        newElement->right = nullptr;
        if (top == nullptr)
        {
            top = newElement;
        }
        else
        {
            if (insertedValue > parent->value)
            {
                parent->right = newElement;
            }
            else
            {
                parent->left = newElement;
            }
        }
    }
    else
    {
        if (currentNode->value == insertedValue)
        {
            return;
        }
        else if (insertedValue < currentNode->value)
        {
            currentNode = currentNode->left;
        }
        else if (insertedValue > currentNode->value)
        {
            currentNode = currentNode->right;
        }

        if (currentNode != nullptr)
        {
            parent = currentNode;
        }

        recursiveInsert(insertedValue, currentNode, parent);
    }
}
