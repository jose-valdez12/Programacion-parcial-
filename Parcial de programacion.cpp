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
case 4 ://menu del dia que desea observar cual es laboral 
int dia;
	cout << "Ingrese el numero al dia que sea ver" << endl;
	cout << " 1. Lunes" << endl; 
	cout << " 2. Martes" << endl;  
	cout << " 3. Miercoles" << endl; 
	cout << " 4. Jueves" << endl;
	cout << " 5. Viernes" << endl;
	cout << " 6. Sabado" << endl;
	cout << " 7. Domingo" << endl;
	
	cin >> dia;
	switch (dia) {
	case 1 : /* sentencia switch para interpretar los dias de la semana*/
		cout << "es un dia laborable" << endl;
		break;
	case 2 : 
		cout << "es un dia laborable" << endl;
		break;
	case 3 :
		cout << "es un dia laborable" << endl;
		break;
	case 4 :
		cout << "es un dia laborable" << endl;
		break;
	case 5 :
		cout << "es un dia laborable" << endl;
		break;
	case 6 :
		cout << "es fin de semana" << endl;
		break;
	case 7 :
		cout << "es fin de semana" << endl;
		break;
	default:
		cout << "no es un dia de la semana" << endl;
	}
	break;
	
case 5: 

float cl;
	float cont;
	cont = 0;
	do { 
		cout << "" << endl;
		cout << "Ingresar el pin :" << endl;
		cout << "" << endl;
		cin >> cl;
		if (cl==123456) {
			cout << "Bienvenido a tu banca virtual " << endl;
			// cont=cont-1
		} else {
			cout << "la clave es incorrecta en tu intento  " << cont+1 << endl;
			cont = cont+1;
		}
	} while (!(cont==3 || cont<1));

break ;
  
}

return 0;
}
