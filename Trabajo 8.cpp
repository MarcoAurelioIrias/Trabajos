#include <iostream>

using namespace std;
char nombre [45];
int turno;
double ventas,pcomis,comis;

void IngresoDatos(char nombre[],double&ventas,int turno)
{
    cout<<"Nombre...:";
    cin.getline(nombre,45);
    cout<<"Ventas...:";
    cin>>ventas;
    {
        cout<<"Ingresar turno...:";
        cin>>turno;
    }while ((turno<1)or (turno>3));
}

double PorComis(int turno)
{
    if (turno==1)
    {return 0.05;}
    else if (turno==2)
    {return 0.06;}
    else
    {return 0.04;}


}
void calcular (int turno,double ventas,double &pcomis,double &comis)
{
    pcomis=PorComis(turno);
    comis=ventas*pcomis;
}

int main()
{
    IngresoDatos(nombre,ventas,turno);
    calcular(turno,ventas,pcomis,comis);
    cout<<"Por. De Comision...:"<<pcomis<<"\n";
    cout<<"Comision Ganada...:"<<comis<<"\n";


    return 0;
}
