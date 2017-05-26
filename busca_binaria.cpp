//Busca binária é somente exucutado em vetor ordenado
#include <iostream>

using namespace std;

int main(){
	int X[10], np, i, inicio, fim, meio, achou;

	// carregando os números no vetor - ORDENADOS
	for(i = 0; i <= 9; i++){
		cout<<"Digite o "<<i + 1<<"º numeoro: ";
		cin>>X[i];
	}
	// digitando o número a ser buscado no vetor
	cout<<"Digite o numero a ser buscado no vetor: ";
	cin>>np;
	// buscando o número digitado no vetor
	achou = 0;
	inicio = 0;
	fim = 9;
	meio  = (inicio + fim)/2;
	while(inicio <= fim && achou == 0){
		if(X[meio] == np)
			achou = 1;
		else{
			if(np < X[meio])
				fim = meio - 1;
			else
				inicio = meio + 1;
				meio = (meio + fim)/2;
		}
	}
	if(achou == 0)
		cout<<"Numero nao encontrado no vetor."<<endl;
	else
		cout<<"Numero encontrado na posicao"<<meio + 1<<endl;

	return 0;
}