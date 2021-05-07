#include <iostream>

using namespace std;

int main()
{
//Declaracion de variable
string equipo1;
string equipo2;
int np;
int i;
int x;
int repetir;

//Entrada
cout << "\tFutbol Predicción" << endl;
cout << "--------------------------------" << endl;
cout << "Bienvenido a fútbol predicción" << endl;
    do
    {
cout << "\nIngrese el primer nombre del equipo: ";
cin >> equipo1;
cout << "Ingrese el segundo nombre del equipo: ";
cin >> equipo2;
cout << "Ingrese la cantidad de partidos que se jugarán: ";
cin >> np;

//Proceso
for (i=1; i<=np; i++)
cout << equipo1 << " " << rand()%4<< " - " << equipo2 << " " << rand()%4 << endl;

cout << "\n¿Quiere volver a usar la aplicacion?   1. Si    2. No" << endl;
cin >> repetir;
    }
while (repetir!=2);
    cout << "\nGracias por usar la aplicacion" << endl;
    return 0;
}
