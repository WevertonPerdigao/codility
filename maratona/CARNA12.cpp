#include <iostream>
using namespace std;


double notas[10];
void imprimir_resultado(){
        for(int i=0;i<5;i++){
        cout << notas[i] << "  ";
        }
cout << endl;
}



void le_entrada(){

	for(int i=0;i<5;i++){
	cin >> notas[i];
	}	
}

void selection_sort(){
	imprimir_resultado();
    for(int i=0;i<5;i++){
      int menor_pos=i;
     	
	for(int j=i;j<5;j++){
    		if(notas[j]< notas[menor_pos]){
		menor_pos=j;
       		}
 	}
     swap(notas[menor_pos],notas[i]);
   } 
  imprimir_resultado();
}

double soma_total(){
	double soma=0;
for(int i=0; i<5;i++){
soma+=notas[i];
}
return soma;
}

int main(){
le_entrada();
selection_sort();
cout.precision(1);
cout << fixed;
cout << soma_total() - notas[0] - notas[4] << endl;



}

