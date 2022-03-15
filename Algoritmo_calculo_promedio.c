#include <stdio.h>

float promedio(int valores[], int cantidad) {   //Puedes hacer el promedio directo en la funcion main o hacerlo antes para que solo extraigas los datos del programa main
    int i;
    float suma = 0.0;

    for (i = 0; i < cantidad; ++i)               //Aqui es donde se hace la operacion del programa (Promedio = SumaCalifs/Numero total de califs)
        suma += valores[i];

    return suma / (float) cantidad;                //Aqui se ve el "algoritmo" (Creo)
}


int main() {

    int califs[10];
    char opcion[3];     //Variables del programa 
    int n, i;

    do {

        printf("Cuantas calificaciones quieres promediar? ");       //Se escanea el numero de calificaciones a promediar 
        scanf("%d", &n);

        for (i = 0; i < n; ++i) { 
            printf("  Calificacion %d: ", i + 1);           //Se inicia un ciclo para ver cuantas califs aceptamos en el programa y se extraen los datos de cuantos y cuales a promediar
            scanf("%d", &califs[i]);
        }

        printf("El promedio es %.1f\n", promedio(califs, n));   //%1.f sirve para poder poner el float en decimal y se usa la funcion de promedio creada mas arriba
                                                                //Con los datos que se ingresaron en el programa principal
        printf("Desea calcular mas promedios (si/no)? ");
        scanf("%s", opcion);

    } while (opcion[0] == 's' || opcion[0] == 'S');    //Opcion de repetir el ciclo for

    return 0;
}