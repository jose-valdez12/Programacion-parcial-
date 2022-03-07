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
	case 2 :
	 char seguir;
    int a, numero;

    do   
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

        /* Inicio de la ecuacuion o formula  */

        for ( a = 1 ; a <= 10 ; a++ )
            printf( "\n   %d * %d = %d", a, numero, a * numero );

        /* Fin del de la ecuacion o formula */

        printf( "\n\n   %cDesea ver otra tabla (s/n)?: ", 168 );
        fflush( stdin );
        scanf( "%c", &seguir );

    } while ( seguir != 'n' );
    
  break;
  case 3 :// se ingresan las variables que se utilizaran en este caso

	int impares;
	int n;
	int pares;
	int suma_impares;
	int suma_pares;
	int x;
	suma_impares = 0;
	suma_pares = 0;
	pares = 0;
	impares = 0;
	for (x=1;x<=10;x++) {
		cout << "igresar un numero" << endl;
		cin >> n; /* Inicio del procedimieto*/
		if (n%2==0) {
			suma_pares = suma_pares+n;
			pares = pares+1;
		} else {
			suma_impares = suma_impares+n;
			impares = impares+1;
		}
	}
	cout << "La suma de los numerows pares es:" << suma_pares << endl;
	cout << "Numeros pares:" << pares << endl; 
	cout << "El Promedio de numeros impares es: " << suma_impares/impares << endl;
	return 0;
	
	break;
