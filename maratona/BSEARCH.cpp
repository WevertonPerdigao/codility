#include <iostream>
using namespace std;


int tamVet;
int qtdBusca;
int vet[100009];

void le_entrada(){
//	cin >> tamVet >> qtdBusca;
        
	scanf("%d %d",&tamVet, &qtdBusca);

	for(int i=0;i<tamVet;i++){
//		cin >> vet[i];
		scanf("%d",&vet[i]);
	}
}


int bsearch(int inicio, int fim, int valor){

	if(inicio>fim){
		return -1;
	}


         if(inicio==fim){
		 if(vet[inicio]==valor){
			 return inicio;
		 }else{
		 return -1;
		 
		 }
	 }

	int meio= (fim-inicio)/2;


	if(valor < vet[meio]){

		return bsearch(inicio,meio-1,valor);
	
	}else if(valor > vet[meio]){
	
		return bsearch(meio+1,fim,valor);
	
	}else if(valor == vet[meio]){

		return bsearch(inicio,meio, valor);

	}	
}


int main(){

printf("vamos imprimir esse valor");

le_entrada();

int valor;

//cin >> valor;

scanf("%d",&valor);

//cout << "valor encontrado na posição->"  << bsearch(0,tamVet-1,valor) << endl;

printf("Valor encontrado na posição->  %d\n",bsearch(0,tamVet-1,valor));



}



