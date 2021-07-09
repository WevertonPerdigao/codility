#include <iostream>
using namespace std;


bool ja_calculou[70];
long long int f[70];

long long int fibonacci(int n){
	if(ja_calculou[n]){
		return f[n];
	}
ja_calculou[n]=true;

	
	if(n==0){
		f[n]=0;
	}else if(n==1){
		f[n]= 1;
        }else{
		f[n]= fibonacci(n-1)+fibonacci(n-2);
	}

	return f[n];
     
}


int main(){

int t;

scanf("%d",&t);

for(int i=1;i<=t;i++){
	int valor;
	scanf("%d",&valor);
printf("Fib(%d) = %lld\n",valor, fibonacci(valor));



}

}
