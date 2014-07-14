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
     list->Insert(3);
     list->Insert(5);
     //list->Insert(3);
     list->Insert(8);
     list->Insert(6);
     list->Insert(1);
     list->DeleteI(1);
     list->Print();
    /* if ( list->Locate(3) == nullptr) {
         cout << "Ёлемент не найден";
     }
     else
     { */
        cout << "."; /*}*/
}
