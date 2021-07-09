#include <iostream>
using namespace std;
#include <algorithm>
int qtd;
int n[10005];

void entrada(){

cin >> qtd;

	for(int i=1;i<=qtd;i++){
	cin >> n[i];	
	}
}


void ordena(){
sort(&n[1], &n[qtd+1]);
}

void imprimir(){
for(int i=1;i<=qtd;i++){
	cout << n[i] << " ";
}

cout << endl;
}


int main(){

	entrada();
	ordena();


	imprimir();


}


