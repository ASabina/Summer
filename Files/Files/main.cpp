#include <QCoreApplication>
#include <iostream>
#include <fstream>
#include <locale.h>
#include "list.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int k;
    //int n = 0;  // пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅ что тут было((
    ifstream F;
    F.open("D:\\ff\\f.txt", ios::in);
    /*if (F)
    {
        while (!F.eof())
        {
            F >> k;
            cout << k<<"\n";
            n++;
        }
        F.close();
    }
    else {
        cout <<"пїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ"<<endl;
    }*/
    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    List *list1 = new List();
    List *list2 = new List();
    List *list3 = new List();

    if (F) {
        while (!F.eof())
        {
            F >> k;
         //   cout << k<<"\n";
            if ( k < a)
            {
                list1->Insert(k);
            }
            if ( k>=a && k<=b)
            {
                list2->Insert(k);
            }
            if ( k> b)
            {
                list3->Insert(k);
            }
        }
        F.close();
    }
    else {
        cout <<"пїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ"<<endl;
    }
    //list1->Print();
    ofstream F2;


    F2.open( "D:\\ff\\g.txt", ios::out );
    int l1 = list1->Length();
    int * z1 = list1->m( l1);
    for ( int i = 0; i < l1; i++) {
        F2 << z1[i] << "\t";
    }
    int l2 = list2->Length();
    int * z2 = list2->m( l2);
    for ( int i = 0; i < l2; i++) {
        F2 << z2[i];
    }
    int l3 = list3->Length();
    int * z3 = list3->m( l3);
    for ( int i = 0; i < l3; i++) {
        F2 << z3[i];
    }

    F2.close();

    return 0;
}
