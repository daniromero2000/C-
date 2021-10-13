#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  int opcion;
  
  double temperatura, convercion;

  // Esta convierte una temperatura dada en grados Fahrenheit a grados Centígrados
  // o convierte una temperatura dada en grados Centígrados a grados Fahrenheit

  printf("Convertir de Fahrenheit a Centígrados = 1 \n");
  printf("Convertir de Centígrados a Fahrenheit = 2 \n");
  cout << "Seleccione una opcion: \n";
  cin >> opcion; 
  
  cout << "Ingrese temperatura: \n";
  cin >> temperatura; 
  
  if (opcion == 1) {
      convercion = (temperatura - 32) / 1.8;
      cout << "La temperatura en Centígrados es: " << convercion;
      return 0;
  }
  
  if (opcion == 2) {
      convercion = (temperatura * 1.8) + 32;
      cout << "La temperatura en Fahrenheit es: " << convercion;
      return 0;
  }

  printf("\nLa opcion ingresada no es valida");

  return 0;
}

