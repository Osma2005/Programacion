// gcc -c .\main.c .\funciones.c 
// .\main.o .\funciones.o -o main
//.\main.exe
#include <stdio.h>
#include <string.h>
#include "funciones.h"
//nos da la funcion.h
void listarProductos(char productos [][3][40],double precio [], int indice[]){
    //Se pone un printf para que imprima, recuerda poner punto y coma.
    printf ("Numero \t\tNombre\t\t categoria\t\tMarca\t\tprecio\n");
    //Debes ver el numero que vas a poner
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t\t %s\t\t %s\t\t %s\t\t %lf", indice[i], productos[i][0],productos[i][1],productos[i][2],precio[i]);
    }
}
void buscarXmarca(char productos [][3][40], double precio[]){
char marca[40];
printf ("Ingrese la marca que desea buscas:\n");
scanf ("%s", &marca);
printf ("Numero \t\tNombre\t\t categoria\t\tMarca\t\tprecio\n");
for (int i = 0; i < 10; i++)
{
    if(strcmp(productos[i][2],marca)==0){
printf("%s\t\t %s\t\t %s\t\t %lf", productos[i][0],productos[i][1],productos[i][2],precio[i]);
    }
}
}
//Se debe poner lo mismo que arriba solo ver en que fila o columna va.
void buscarXcategoria(char productos [][3][40], double precio[]){
char marca[40];
printf ("Ingrese la gategoria que desea buscas:\n");
scanf ("%s", &marca);
printf ("Numero \t\tNombre\t\t categoria\t\tMarca\t\tprecio\n");
for (int i = 0; i < 10; i++)
{
    if(strcmp(productos[i][1],marca)==0){
printf("%s\t\t %s\t\t %s\t\t %lf", productos[i][0],productos[i][1],productos[i][2],precio[i]);
    }
}
}
void buscarXprecioMenor(char productos [][3][40], double precio[]){
double marca;
printf ("Ingrese ek precio maximo que desea buscas:\n");
scanf ("%s", &marca);
printf ("Numero \t\tNombre\t\t categoria\t\tMarca\t\tprecio\n");
for (int i = 0; i < 10; i++)
{
    //cuando se utuliza double ya no se utiliza el strcmp
    if(precio[i]<=marca){
printf("%s\t\t %s\t\t %s\t\t %lf", productos[i][0],productos[i][1],productos[i][2],precio[i]);
    }
}
}

void editarProducto(char productos[][3][40], double precio[],int indice[]){
    listarProductos(productos,precio, indice);
    int numero;
    char marca[40],cat[40], nombre[40];
    double pre;
printf("Ingrese el numero del producto que desea editar: \n");
scanf ("%d",&numero);
for (int i = 0; i < 10; i++)
{
    if (indice[i]==numero){
    {
        printf ("Ingrese el nuevo nombre del producto: ");
        scanf("%s",&nombre);
        printf ("Ingrese categoria del producto: ");
        scanf("%s",&cat);
        printf ("Ingrese marca del producto: ");
        scanf("%s",&marca);
        printf ("Ingrese precio del producto: ");
        scanf("%s",&pre);
        strcpy(productos[i][0],nombre);
        strcpy(productos[i][1],cat);
        strcpy(productos[i][2],marca);
        precio[i]=pre;
    }
    
}
}
}