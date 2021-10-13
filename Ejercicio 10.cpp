#include <iostream>
#include <math.h>

using namespace std;

int main ()
{  
  float cateto1, cateto2, hipotenusa;
  
  // Esta aplicacion permite calcular la hipotenusa de un triángulo a partir de sus catetos

  cout<<"Escribe la medida de los catetos"<<endl;
  cout<<"Cateto 1: "<<endl;
  cin>>cateto1;
  
  cout<<"Cateto 2: "<<endl;
  cin>>cateto2;
  
  hipotenusa = sqrt(pow(cateto1, 2)+ pow(cateto2, 2));
  cout<<"La hipotenusa es: "<< hipotenusa <<endl;
  
  return 0;
}
