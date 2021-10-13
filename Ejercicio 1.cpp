#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
  float primero = 0, segundo = 0, resultado = 0, suma, resta;
  
  float multi, division, potencia1, potencia2;

  cout << "Ingrese el primer numero: ";

  cin >> primero; 

  cout << "Ingrese el segundo numero: ";

  cin >> segundo;

  suma = primero + segundo;

  resta = primero - segundo;

  multi = primero * segundo;

  division = primero / segundo;
  
  potencia1 = pow(primero, 2);
  
  potencia2 = pow(segundo, 2);

  cout << " La suma de los dos numeros es " << suma;
  
  cout << "\n La resta de los dos numeros es " << resta;
  
  cout << "\n La multiplicacion de los dos numeros es " << multi;

  cout << "\n La division de los dos numeros es " << division;
  
  cout << "\n El numero " << primero << " elevado al cuadrado es " << potencia1;
  
  cout << "\n El numero " << segundo << " elevado al cuadrado es " << potencia2;

  return 0;
}

