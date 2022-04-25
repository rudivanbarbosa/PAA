#include <iostream>
#include <math.h>

using namespace std;


int BinarySearch(int arr[], int n, int chave){
int s = floor(n/2);

if( arr[s] == chave){
    cout << "Chave encontrada na posicao: " << s << "\n";
}else if( arr[s] < chave ){
    for(int i = s+1 ; i < n; i++){
        if( arr[i] == chave){
            cout << "Chave encontrada na posicao: " << i << "\n";
        }
    }
}else if (arr[s] > chave ){
for(int j = 0 ; j < s; j++){
        if( arr[j] == chave){
            cout << "Chave encontrada na posicao: " << j << "\n";
        }
    }
}





}


int main(){

int arr[] = {1,3,4,7,8,11,18,20,24};
int n = sizeof(arr)/sizeof(int);
int chave = 11;
BinarySearch(arr, n, chave);

}
