#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{


    int num,mayor=0,suma=0,conta=0,contaPar=0;
    double promedio;
    char resp;
    do
    {do
       {
        cout<<"Ingresar un numero entre 50-100..>";
        cin>>num;
       }while(!((num>=50) and (num<=100)));
       _flushall();

       do
       {  cout<<"Desea continuar...:";
       cin.get(resp);
       _flushall();
       }while ((toupper(resp)!='S') and (toupper(resp)!='N'));
       suma=suma+num;
        if (num>mayor)
        {mayor=num;
        }
        conta++;
        }while((toupper(resp)=='S'));
        promedio=suma/conta;
        cout<<"Promedio"<<promedio<<"\n";
        cout<<"Mayor"<<"\n";

return 0;



}
