#include <stdlib.h>
#include <stdio.h>



int pot2(int n){

if(n == 0) { return 1;
}else{ return pot2(n-1)+pot2(n-1);}
printf("Potencia de 2 elevado a %d: %d", n, pot2(n));
}

int main(){
int n;
printf("Insita um numero: ");
scanf("%d", &n);
printf("Potencia de 2 elevado a %d: %d", n, pot2(n));


}
