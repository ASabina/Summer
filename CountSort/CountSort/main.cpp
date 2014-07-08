#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
    int maxDigit = 0;
    cout << "m=";
    cin >> maxDigit;
    int helperArray[maxDigit + 1];

    for (int i=0; i < maxDigit+1; i++) {
        helperArray[i] = 0;
    }
    int dim = 0;
    cout << "dim: " << endl;
    cin >> dim; 
    
    int array[dim];
    cout << "put array:" << endl;
    for (int i = 0; i < dim; i++) {
        cout << "array[ " << i << "] = " ;
        cin >> array[i];
    }

    for (int i = 0; i < dim; i++) {       
        helperArray[array[i]] += 1;
    }


    int currentElement = 0;
    for (int i = 0; i < maxDigit + 1; i++) {
        for (int j = 0; j < helperArray[i]; j++) {
                array[currentElement] = i;
                currentElement++;
           }
        }

    for (int i = 0; i < dim; i++) {
        cout << array[i];
    }
    return 0;
}
