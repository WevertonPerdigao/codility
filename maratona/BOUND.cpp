#include <iostream>
using namespace std;
#include <algorithm>

int main(){

int s[] = {3, 5, 6, 10, 17};

printf("primeiro elemento maior ou igual 6 posição encontrada ->%d\n", *lower_bound(&s[0],&s[6],6));

printf("primeiro elemento maior ou igual 6 posição encontrada ->%ld\n", lower_bound(&s[0],&s[6],6)-&s[0]);


printf("primeiro elemento maior que 6 ->%d\n", *upper_bound(&s[0],&s[6],6));

printf("primeiro elemento maior que 6 ->%ld\n", upper_bound(&s[0],&s[6],6)-&s[0]);





}
