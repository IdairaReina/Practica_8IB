#include <iostream>
using std::cout;
using std::endl;
#include <ctime>
using namespace std;
	
int main(){
	cout << "Introduzca los valores de N,M,P: " << endl;
	double numero_N, numero_P, numero_M;
	   
	cin >> numero_N >> numero_M >> numero_P;
	int tamano = numero_N , MAXIMO = numero_P, MINIMO = numero_M;
	
	
	int arreglo[ tamano ] = { 0 };
	int i;
	srand( time( NULL ) );
	for ( i = 0; i < tamano; ++i )
	      arreglo[ i ] = rand() % (MAXIMO-MINIMO+1) + MINIMO;
	   
	   cout << "Los valores del arreglo son:\n";
	   for ( i = 0; i < tamano; ++i ){
	     cout <<"arreglo[" << i << "] = " << arreglo[ i ];
	       cout << "\n";
	   }
}
