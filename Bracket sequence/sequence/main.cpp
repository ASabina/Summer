#include <QCoreApplication>
#include <iostream>
#include <locale.h>
#include <stack.h>

using namespace std;

int main()
{    
    setlocale(LC_ALL, "Russian");
    cout << " ������� ������: ";
    string s;
    cin >> s;
    stack *Stack = new stack();
    bool ok = true;

    for (unsigned i=0; i<s.length(); i++) {
        if ( s[i] == '(' || s[i] ==  '[' || s[i] == '{' ) {
            Stack->push(s[i]);
        }
        if ( s[i] == ')' || s[i] ==  ']' || s[i] == '}' ) {
             char k = Stack->pop();
            // char ss = s[i];
            /*if ( (int) k +1 == (int)ss || (int) k +2 == (int)ss)
            {
                cout << "�� ��";
            }*/
            if ((( k == '(') && (s[i] == ')')) || (( k == '[') && (s[i] == ']'))
                    || (( k == '{') && (s[i] == '}')) )  {
               // ok = true;
            }
            else { ok = false;}
         }
    }
    if ( !Stack->isempty() ){
        ok = false;
    }
    if (ok) { cout << "ok :-�";}
    else { cout << " :(";}

    return 0;

}

