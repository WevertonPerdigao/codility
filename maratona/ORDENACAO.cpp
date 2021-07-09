#include <iostream>
using namespace std;

int qtde;
int n[100009]; 

void entrada(){
//
	cin >> qtde;
//	
		for(int i=1;i<=qtde;i++){
		cin >> n[i];
	}
}
	



void ordena(){

	for(int j=1;j<=qtde;j++){

		int pos_menor=j;    

		for(int i=j;i<=qtde;i++){
	
			if(n[i]< n[pos_menor]){

			pos_menor=i;
			}		
		}

	swap(n[pos_menor],n[j]);

	}
}


void imprimir(){

		for(int i=1;i<=qtde;i++){
			cout << n[i]  << " ";
		}
		cout << endl;
}	

int main(){

entrada();

ordena();

imprimir();


}
