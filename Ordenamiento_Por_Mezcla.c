#include <stdio.h>

void mezc(int arr[], int ini, int mid, int finn) {

  int len1 = mid - ini + 1;
  int len2 = finn - mid;

  int ArrIzq[len1], ArrDer[len2];

  for (int i = 0; i < len1; i++)
    ArrIzq[i] = arr[ini + i];
  for (int j = 0; j < len2; j++)
    ArrDer[j] = arr[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = ini;

  while (i < len1 && j < len2) {
    if (ArrIzq[i] <= ArrDer[j]) {
      arr[k] = ArrIzq[i];
      i++;
    } else {
      arr[k] = ArrDer[j];
      j++;
    }
    k++;
  }

  while (i < len1) {
    arr[k] = ArrIzq[i];
    i++;
    k++;
  }

  while (j < len2) {
    arr[k] = ArrDer[j];
    j++;
    k++;
  }
}

void mezc1(int arr[], int ini, int finn) {
  if (ini < finn) {

    int mid = ini + (finn - ini) / 2;
    mezc1(arr, ini, mid);
    mezc1(arr, mid + 1, finn);
    mezc(arr, ini, mid, finn);
  }
}

void muestra(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {17, 21, 1, 10, 9, 22};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printf("Arreglo original\n");
  muestra(arr, size);
  
  mezc1(arr, 0, size - 1);

  printf("Ordenado: \n");
  muestra(arr, size);
}

