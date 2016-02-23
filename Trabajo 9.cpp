#include <iostream>

using namespace std;

int main()
{srand (time(0));
int i;
int numero,maxi=0,contar=0,suma=0,promedio;
for (i=1;i<=10;i++)
{
    numero=50 +rand() % (100-50);
    cout<<"valor de Numero "<<i<<"es"<<numero<<"\n";
    if(numero>maxi)
}
contar++;
suma+=numero; //suma = suma + numero;
}
promedio=suma/contador;
cout<<"Promedio"<<promedio"\n";
cout<<"Numero Mayor es"<<maxi<<"\n"
system("PAUSE");
return 0;

