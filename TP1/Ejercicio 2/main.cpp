#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,x,y, delta;
    cout << "Ingresar el valor del termino cuadratico" << endl;
    cin >> a;
    cout << "Ingresar el valor del termino lineal" << endl;
    cin >> b;
    cout << "Ingresar el valor del termino independiente"<< endl;
    cin >> c;
    delta = (pow(b,2)-4*a*c);
    if (delta<0 || a==0)
        cout << "No se puede resolver si el determinante es negativo o el termino cuadratico es 0" << endl;
    else
    {x = -(b-sqrt(pow(b,2)-4*a*c))/(2*a);
    y = -(b+sqrt(pow(b,2)-4*a*c))/(2*a);
    cout << "X1: " << x << endl;
    cout << "X2: " << y << endl;
    }
    return 0;
}
