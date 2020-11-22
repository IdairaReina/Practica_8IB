#include <iostream>
#include "difference_of_squares.h"
using namespace std;


void Usage(int argc, char *argv[]) {
	if (argc !=2){
		cout << argv[0] << "Falta un número natural como parámetro" << endl;
		cout << "Pruebe " << argv[0] << "--help para más información" << endl;
		exit(EXIT_SUCCESS);
	}
	string parameter{argv[1]};
	if (parameter == "--help"){
		cout << KHelpText << endl;
		exit(EXIT_SUCCESS);
	}
}


 int main(int argc, char* argv[]){
 float i,suma,suma2,n;
 suma2=0;
 suma=0;
 i=1;
 cout<<"determine el numero natural N: "; cin>>n ;
 for (i=1; i<=n ;i++)
 {
   suma=suma+(i*i);
 }
 for (i=1; i<=n ;i++)
 {
   suma2=suma2+i;
 }
 
   cout<<"=  "<< suma2*suma2-suma;

 
  return 0;
}
