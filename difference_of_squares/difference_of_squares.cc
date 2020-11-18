#include <iostream>
using namespace std;
 int main()
{
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
