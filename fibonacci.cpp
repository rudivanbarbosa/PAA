#include <stdlib.h>
#include <stdio.h>



int fib(int n){

if(n == 0) { return 1;
}else if (n== 1){return 1;}else{ return fib(n-1)+fib(n-2);}
}

int main(){
int n;
printf("Insita um numero: ");
scanf("%d", &n);
printf("Fibonacci de %d: %d", n, fib(n));


}
