#include <iostream>
using namespace std;


int hanoi(int n){

	if(n==1){
	return 1;
	
	}else{
	
	return 2*hanoi(n-1) + 1;
	
	}

}


int main(){

int n;

int j=1;


cin >> n ;

while (n>0){

	cout << "TESTE " << j  << endl;
        cout << hanoi(n) << endl << endl ;
	cin >> n;
	j++;
}




}
