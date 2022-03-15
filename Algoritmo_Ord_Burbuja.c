#include <stdio.h>
void burbuja(long [], long);

int main()
{
  long array[100], n, c;

  printf("Ingresa el numero de elementos\n");
  scanf("%ld", &n);

  printf("Ingresa %ld enteros\n", n);

  for (c = 0; c < n; c++)
    scanf("%ld", &array[c]);

  burbuja(array, n);

  printf("Ordenado:\n");

  for (c = 0; c < n; c++)
     printf("%ld\n", array[c]);

  return 0;
}

void burbuja(long lista[], long n)
{
  long c, d, t;

  for (c = 0 ; c < n - 1; c++) {
    for (d = 0 ; d < n - c - 1; d++) {
      if (lista[d] > lista[d+1]) {
        t         = lista[d];
        lista[d]   = lista[d+1];
        lista[d+1] = t;
      }
    }
  }
}