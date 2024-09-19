#include <iostream>
using namespace std;
int main(){

std::cout<<"**************************************"<<endl;
std::cout<<"*Bienvenido al Juego de la Adivinanza*!"<<endl;
std::cout<<"**************************************"<<endl;

 int numero_secreto = 42;
 cout << "el numero secreto es ...."<< numero_secreto << "no lo diga nadie" << endl;

 int adivina;
 cout<< "cual es el numero?";
 cin >> adivina;
 cout <<"El valor de su numero es:" << adivina <<endl"
 if (adivina== numero_secreto){
     cout << "Felicidades!!! ...... adivina el numero secreto"<< endl;
      }
      else if (adivina>numero_secreto){
          cout << "El numero ingresadoes mayor que el numero secreto" << endl;
      }
      else {
          cout <<"El numero ingresado es menor que el numero secreto" << endl;
      }
}


