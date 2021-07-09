#include <iostream>
using namespace std;
#include <algorithm>






int main(){

long long int A[100000];
bool ja_add[100000];
long long int f[100000];


for(long long int i=0;i<100000;i++){
printf("%lld\n",i);
	A[i]=i;
}

long long int menor=0;


long long int tam = sizeof(A)/sizeof(A[0]);



for(long long int i=0;i<tam;i++){


	if(A[i]>0 && !ja_add[A[i]]){
         		
	ja_add[A[i]]=true;
	f[A[i]]=-1; 
	}
}


menor=lower_bound(&f[0],&f[100000],0)-&f[0];

printf("%lld",menor);



if(menor == 0){

printf("O menor valor é 1");
}else{
printf("O menor valor é %lld\n",menor);

}



}
