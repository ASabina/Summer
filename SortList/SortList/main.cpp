#include <QCoreApplication>
#include <locale.h>
#include <iostream>
#include <list.h>


using namespace std;
int main()
{
     setlocale(LC_ALL, "Russian");

    /* while (true) {
         cout << "¬ведите выражение:";
         int k=0;
         cin >> k;
         if (k == 0) {
             return 0;
         }
     }*/

     List *list = new List();
     list->Insert(3, list->BeginL());
     list->Insert(5, list->BeginL());
     //list->Locate(3);
     if ( list->Locate(3) == nullptr) {
         cout << "Ёлемент не найден";
     }
     else
     { cout << "да";}
}
