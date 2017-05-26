// Algoritmo de ordenação por troca (BUBBLE SORT)
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int X[5], n, i, aux;

	// carregando os números no vetor
	for(i = 0; i <= 4; i++){
		cout<<"Digite o "<<i+1<<"º numero: ";
		cin>>X[i];
	}
	// ordenando de forma crescente
	// laço com a quantidade de elementos do vetor
	for(n = 1; n <= 5; n++){
		// laço que pecorre da primeira á
		// penúltima posição do vetor
		for(i = 0; i <= 3; i++){
			if(X[i] > X[i+1]){
				aux = X[i];
				X[i] = X[i+1];
				X[i+1] = aux;
			}
		}
	}
	// mostrando o vetor ordenado
	for(i = 0; i <= 4; i++){
		cout<<i+1<<"º numero: "<<X[i]<<endl;
	}
}