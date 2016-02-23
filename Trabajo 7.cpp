#include <iostream>

using namespace std;
//Presentar los numeros del 1 al 10 usando while
int main()
{int c=0;int numero;int suma=0;
while (c<5)
{c++;

    cout <<"Numero #" << c << "...";
    cin >> numero;
    suma = suma + numero;// suma+=numero;


};
cout<< "Final del ciclo\n";
cout<< "Suma de los numeros es "<<suma<<"\n";
    return 0;
}
