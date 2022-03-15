#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Inc(int num[], int arreglo){

    int i, a, id;
    for (i=1; i<arreglo;i++){

        id= num[i];
        a = i-1;
        while (a >=0 && num[a] >id){

            num[a+1] = num[a];
            a--;
        }
        num[a+1] = id;
    }
}

int main(){

int arreglos[5];
int a;
int i;

for(i=0; i<=5; i++){

    printf("\n Escriba el valor");
    scanf("%i", &arreglos[i]);
}
for ( i = 0; i <=5; i++)
{
     printf("La lista, es %i \n",Inc(arreglos[i], i));

}
}



}

}
