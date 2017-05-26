//Busca sequencial em um vetor não ordenado
#include <iostream>

using namespace std;

int main(){
	int X[10], n , i, achou;

	// carregando os números no vetor
	// vetor com números NÂO ORDENADOS
	for(i = 0; i <= 9; i++){
		cout<<"Digite o "<<i + 1<<"º numero: ";
		cin>>X[i];
	}
	// digitando o número a ser buscado no vetor
	cout<<"Digite o numero a ser buscado no vetor: ";
	cin>>n;
	// buscando o número digitado no vetor
	achou = 0;
	i = 0;
	while(i <= 9 && achou == 0){
		if(X[i] == n)
			achou = 1;
		else
			i++;
	}
	if(achou == 0)
		cout<<"Numero nao encontrado no vetor"<<endl;
	else
		cout<<"Numero encontrado na posicao "<<i + 1<<endl;

	return 0;
}