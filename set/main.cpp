#include <QCoreApplication>
#include <set.h>

int main()
{
    Set *set = new Set();
    set->insert(4);
    set->insert(10);
    set->insert(2);
    set->insert(6);
    set->insert(12);
    set->insert(1);
    set->insert(12);

    return 0;
}
