#include <stdlib.h>
#include <stdio.h>
 
struct cola {
    int* array;
    int size;
    int adelante;
    int atras;
}colaInQues;
 
void colaIniciar(struct cola*);
void colaInsert(struct cola*,int);
void colaEliminar(struct cola*);
void colaMostrar(struct cola*);
void colaReclamar(struct cola*);
 
main() {
   int in=0,colain;
   colaIniciar(&colaInQues);
   while(in++ < 10) {
       int op;
       scanf("%d",&op);
       switch(op) {
           case 1: scanf("%d",&colain);
                   colaInsert(&colaInQues,colain);
                   colaMostrar(&colaInQues);
                   break;
           case 2: colaEliminar(&colaInQues);
                   colaMostrar(&colaInQues);
                   break;
           case 3: colaMostrar(&colaInQues);
                   break;
           default: continue;
       }
   }
   colaReclamar(&colaInQues);
   exit(0);
}
 
void colaIniciar(struct cola* cola) {
    cola->size = 100;
	cola->array = (int*) malloc(sizeof(int)*cola->size);
	cola->adelante = -1;
	cola->atras = -1; 
}
 
void colaInsert(struct cola* cola,int val) {
	if(cola->atras == cola->size-1)
		printf("\nUn poco mas!\n");
	else if(cola->atras == -1) {
		cola->adelante = 0;
		cola->array[++cola->atras] = val;
	}
	else cola->array[++cola->atras] = val;
}
 
void colaEliminar(struct cola* cola) {
	if(cola->adelante == -1)
		printf("\nNada por Eliminar.\n");
	else if(cola->adelante == cola->atras) {
		cola->adelante = -1;
		cola->atras = -1;
	}
	else cola->adelante++;
}
 
void colaMostrar(struct cola* cola){
	int loop = cola->adelante;
	printf("\n");
	for(;loop<=cola->atras;loop++)
		printf(" %d",cola->array[loop]);
	printf("\n");
} 
 
void colaReclamar(struct cola* cola) {
	cola->size = 0;
	cola->adelante = -1;
	cola->atras = -1; 
    free(cola->array);
}