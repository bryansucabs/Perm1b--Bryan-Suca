//Alumno: Bryan Suca Jaramillo
#include <iostream>
#include <stdio.h>
using namespace std;
//función para el algoritmo euclidiano extendido
int McdExtendido(int a, int b, int *x, int *y)
{
    // Caso base
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    // Para almacenar los resultados de la llamada recursiva
    int x1, y1; 
    int mcd = McdExtendido(b%a, a, &x1, &y1);
 
    // Actualizar x e y usando los resultados de recursivo
    *x = y1 - (b/a) * x1;
    *y = x1;
    return mcd;
}
 
// Funcion principal
int main()
{
    int x, y;
    int a,b;
    cout <<"\nSe calcula el maximo comun divisor de dos numeros."<<endl;
    cout <<"Introduzca el primer numero no negativo: "<<endl;
    cin >> a;
    cout <<"Introduzca el segundo numero no negativo: "<<endl;
    cin >> b;
    int g = McdExtendido(a, b, &x, &y);
    printf("mcd(%d, %d) = %d", a, b, g);
    return 0;
}