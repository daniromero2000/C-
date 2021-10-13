#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  float primero, segundo, tercero, cuadrado;
  float producto, cubo, diferencia;
  
  // Esta aplicacion permite calcular:
  // El cuadrado de la suma
  // El producto de los valores leídos
  // El cubo del Producto
  // La diferencia entre el cuadrado de la suma con respecto al cubo del producto
  // de tres numeros dados

  cout << "Ingrese el primer numero: \n";
  cin >> primero; 
  
  cout << "Ingrese el segundo numero: \n";
  cin >> segundo; 
  
  cout << "Ingrese el tercer numero: \n";
  cin >> tercero; 
  
  cuadrado = pow(primero, 2) + pow(segundo, 2) + pow(tercero, 2) + (2 * (primero * segundo)) + (2 * (primero * tercero)) + (2 * (segundo * tercero));
  
  producto = primero + segundo + tercero;
  cubo = pow(producto, 3);
  diferencia = cubo - cuadrado;
  
  cout << "\nEl cuadrado de la suema es: " << cuadrado;
  cout << "\nEl producto de los valores ingresados es: " << producto;
  cout << "\nEl cubo del producto es: " << cubo;
  cout << "\nLa diferencia entre el cuadrado de la suma con respecto al cubo del producto es: " << diferencia;

  return 0;
}
