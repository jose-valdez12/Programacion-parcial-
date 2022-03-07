#include <iostream>
#include <stdio.h> /* contenido (librerias) */ 

using namespace std;
int elec;

int main ()
{

	/*un menu de opciones a elejir */
cout<<"*****Bienvenido*****"<<endl<<endl;
cout << " 1. Factorial de un numero " << endl;
cout << " 2. Tabla de Multiplicar " << endl; 
cout << " 3. Numeros Pares o inpares" << endl;
cout << " 4. Dia se Semana" << endl;
cout << " 5. Sistema  Bancario" << endl;

cin>>(elec);

/*se crea una funcion */
switch (elec){
	
case  1 : 

//se crea formato de variable 
   int z,i;
   long double factorial; 
   cout << "Introduce un numero: ";
   cin >> z;
   factorial=1; 
   for(i=1;i<=z;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << z << " -> " << factorial << endl;
   system("pause"); 
   
	break;
