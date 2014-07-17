#include <QCoreApplication>
#include <circularlist.h>
#include <locale.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int k;
    cin >> k;
    CircularList *circularList = new CircularList (k);
    int l;
    cin >> l;
    cout << circularList->Last(l);

    return 0;
}
