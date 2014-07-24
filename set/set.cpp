#include "set.h"

Set::Set()
{
    root = nullptr;
}

bool Set::exists(int k)
{
    if (root == nullptr)
    {
        return false;
    }
    else
    {
        if (k == root->value)
        {
            return true;
        }
        else if (k < root->left->value)
        {
            root = root->left;
        }
        else if (k > root->right->value)
        {
            root = root->right;
        }
        return exists(k);
    }
}

void Set::insert(int k)
{
    recursiveInsert(k, root, root);
}

void Set::recursiveInsert(int insertedValue, TreeElement *currentNode, TreeElement *parent)
{
    if (currentNode == nullptr)
    {
        TreeElement *newElement = new TreeElement();
        newElement->value = insertedValue;
        newElement->left = nullptr;
        newElement->right = nullptr;
        if (root == nullptr)
        {
            root = newElement;
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

void Set::remove(int k) {
    recursiveRemove(k, root, root);
}

void Set::recursiveRemove(int deletedValue, TreeElement *temp, TreeElement *parent) {
    if (temp == nullptr )
    {
        return;
    }
    else
    {
        if (deletedValue== temp->value)
        {
            if (temp->left == nullptr && temp->right == nullptr)
            {
                if (deletedValue < parent->value)
                {
                    parent->left = nullptr;
                }
                else
                {
                    parent->right = nullptr;
                }
                delete temp;
                return;
            }
            if (temp->left == nullptr || temp->right == nullptr)
            {
                if (deletedValue < parent->value)
                {
                    parent->left = temp->left;
                }
                else
                {
                    parent->right = temp->right;
                }
                delete temp;
                return;
            }
            if (temp->left != nullptr && temp->right != nullptr)
            {
                TreeElement *i = nullptr;
                i = minR(temp);
                int k = i->value;
                remove(i->value);
                temp->value = k;
            }
        }
        if (deletedValue < temp->value)
        {
            if (root != temp)
            {
                parent = temp;
            }
            temp = temp->left;
            recursiveRemove(deletedValue, temp, parent);
        }
        if (deletedValue > temp->value)
        {
            if (root != temp)
            {
                parent = temp;
            }
            temp = temp->right;
            recursiveRemove(deletedValue, temp, parent);
        }

    }
}


Set:: TreeElement * Set::minR(TreeElement* t) {
    t = t->right;
    while (t->left != nullptr)
    {
        t = t->left;
    }
    return t;
}

