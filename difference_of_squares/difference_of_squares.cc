#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int Posicion(int primo){
    vector<int> vector_primo;
    int contador{1};
    while(vector_primo.size() < primo){
            int repeticiones = contador/2 + 1;
            if(contador == 1){
                vector_primo.emplace_back(contador);
                contador++;
                continue;
            }
            for(int i = 2; i <= repeticiones + 1; i++){
                if(contador % i == 0){
                    break;
                }
                if(contador/2 + 1 == i){
                    vector_primo.emplace_back(contador);
                }
            }
            contador++;
        }
    return vector_primo.back();
}

int main() {
    cout << "Introduzca la posisición: " << endl;
    int n;
    cin >> n;
    cout << Posicion (n);
    cout<<endl;
}
