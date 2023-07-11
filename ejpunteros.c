#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nombre [50];
    char cedula [20];
    float cantidad1 =0 ,cantidad2 = 0,cantidad3 = 0 ,cantidad4=0 ,cantidad5 = 0;
    float precio1 = 100, precio2 =60 ,precio3 = 200,precio4 = 50 ,precio5 = 90;
    float subtotal1 = 0 ,subtotal2 = 0 , subtotal3 = 0 ,subtotal4 = 0, subtotal5 = 0;
    float subtotal = 0, total = 0;
   
    char opcion;

    printf("ELIJA UN PRODUCTO \n");
    printf("a)Tarjeta Madre (Precio: $150) \n");
    printf("b)Memorias Ram (Precio: $55)\n");
    printf("c)procesador (Precio: $180) \n");
    printf("d)Fuente de poder (Precio: $70)\n");
    printf("e)Refrigeracion liquida (Precio: $120) \n");

    printf("Ingrese la letra del producto a facturar \n");
    scanf("%c",&opcion);

    switch (opcion)
    {
    case 'a':
        printf("Ingrese la cantidad de Tarjeta Madre que desea \n");
        scanf("%f",&cantidad1);

        break;
    case 'b':
        printf("Ingrese la cantidad de Memorias RAM que desea \n");
        scanf("%f",&cantidad2);
        break;
    case 'c':
        printf("Ingrese la cantidad de Procesadores que desea \n");
        scanf("%f",&cantidad3);
   
        break;
    case 'd':
        printf("Ingrese la cantidad de Fuentes de Poder que desea \n");
        scanf("%f",&cantidad4);
   
        break;
    case 'e':
        printf("Ingrese la cantidad de Refrigeraciones Liquidas que desea \n");
        scanf("%f",&cantidad5);
   
        break;
    default:
        break;
    }

    subtotal1 = (precio1*cantidad1);
    subtotal2 = (precio2*cantidad2);
    subtotal3 = (precio3*cantidad3);
    subtotal4 = (precio4*cantidad4);
    subtotal5 = (precio5*cantidad5);
    subtotal = subtotal1 + subtotal2+ subtotal3 + subtotal4 + subtotal5;

    if (subtotal > 100 && subtotal <= 500)
    {
        total = subtotal * 0.95;
    }
    else if (subtotal >500 && subtotal <=1000)
    {
        total = subtotal * 0.93;
    }
    else if (subtotal>1000)
    {
        total = subtotal * 0.90;
    }
    else
    {
        total = subtotal;
    }
    printf("Ingrese su nombre\n");
    scanf("%s",&nombre);
    printf("Ingrese su cedula\n");
    scanf("%s",&cedula);

    printf("* DATOS DEL CLIENTE***\n");
    printf("Nombre: %s \n",nombre);
    printf("Cedula: %s \n",cedula);

    printf("*FACTURA \n");
    printf("PRODUCTO                        CANTIDAD           VALOR UNITARIO          TOTAL \n");
    if (cantidad1 != 0)
    {
        printf("Tarjeta Madre                          %.0f                   %2.f                   %2.f\n", cantidad1,precio1,subtotal1);
    }
    if (cantidad2 != 0)
    {
        printf("Memorias RAM             %.0f                   %2.f                    %2.f\n", cantidad2,precio2,subtotal2);
    }
    if (cantidad3 != 0)
    {
        printf("Procesadores                %.0f                   %2.f                     %2.f\n", cantidad3,precio3,subtotal3);
    }
    if (cantidad4 != 0)
    {
        printf("Fuentes de poder                           %.0f                   %2.f                     %2.f\n", cantidad4,precio4,subtotal4);
    }
    if (cantidad5 != 0)
    {
        printf("Refrigeraciones Liquidas                      %.0f                    %2.f                   %2.f\n", cantidad5,precio5,subtotal5);
    }
    printf("El subtotal es:%2.f \n", subtotal);
    printf("El total es:%2.f \n", total);
    system("pause");

    }
    
