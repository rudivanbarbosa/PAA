#include <iostream>
using namespace std;

void merges(int arr[], int l, int m, int r, int tamanho)
{
    int i = l;
    int j = m + 1;
    int k = l;

    int aux[tamanho];

    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            aux[k] = arr[i];
            i++;
            k++;
        }
        else {
            aux[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m) {
        aux[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r) {
        aux[k] = arr[j];
        j++;
        k++;
    }

    for (int p = l; p <= r; p++) {
        arr[p] = aux[p];
    }
}

void MergeSort(int arr[], int l, int r, int tamanho)
{
    if (l < r) {
        int m = (l + r) / 2;
        MergeSort(arr, l, m, tamanho);
        MergeSort(arr, m + 1, r, tamanho);
        merges(arr, l, m, r, tamanho);
    }
}

int main () {
int arr[] = {10,9,8,7,6,5,4,3,2,1};
int n = sizeof(arr)/sizeof(int);

MergeSort(arr, 0, n-1, n);

for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
}
cout << "\n";

  return 0;
}
