#include <iostream>
using namespace std;


int fatorial(int n){
	if(n>0){
return n*fatorial(n-1);
	}else{
		return 1;
	}
}


int main(){

	int n;
	cin >> n;

	cout << fatorial(n) << endl;
}

