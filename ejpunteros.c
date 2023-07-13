#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre_cliente[50];
    char direccion_cliente[100];
    char numero_cliente[10];
    float cantidades[5] = {0};
    float precios[5] = {1.5, 0.95, 3.5, 2, 4};
    float subtotales[5] = {0};
    float subtotal_total = 0, total = 0;

    char opcion;

    printf("Seleccione una opcion de compra:\n");
    printf("a) Atun (Precio: $1.5)\n");
    printf("b) Arroz (Precio: $0.95)\n");
    printf("c) Aceite (Precio: $3.5)\n");
    printf("d) Azucar (Precio: $2)\n");
    printf("e) harina (Precio: $4)\n");

    printf("Ingrese la letra del producto a facturar: ");
    scanf(" %c", &opcion);

    switch (opcion)
    {
    case 'a':
        printf("Ingrese la cantidad de Atunes que desea: ");
        scanf("%f", &cantidades[0]);
        break;
    case 'b':
        printf("Ingrese la cantidad de Libras de arroz que desea: ");
        scanf("%f", &cantidades[1]);
        break;
    case 'c':
        printf("Ingrese la cantidad de litros de aceite que desea: ");
        scanf("%f", &cantidades[2]);
        break;
    case 'd':
        printf("Ingrese la cantidad de libras de azucar que desea: ");
        scanf("%f", &cantidades[3]);
        break;
    case 'e':
        printf("Ingrese la cantidad de libras de harina que desea: ");
        scanf("%f", &cantidades[4]);
        break;
    default:
        break;
    }

    for (int i = 0; i < 5; i++)
    {
        subtotales[i] = precios[i] * cantidades[i];
        subtotal_total += subtotales[i];
    }

    if (subtotal_total > 10 && subtotal_total <= 50)
    {
        total = subtotal_total * 0.95;
    }
    else if (subtotal_total > 50 && subtotal_total <= 100)
    {
        total = subtotal_total * 0.93;
    }
    else if (subtotal_total > 100)
    {
        total = subtotal_total * 0.90;
    }
    else
    {
        total = subtotal_total;
    }

    printf("Ingrese su nombre: ");
    scanf("%s", nombre_cliente);
    printf("Ingrese su numero de telefono: ");
    scanf("%s", numero_cliente);
    printf("Ingrese su direccion: ");
    scanf("%s", direccion_cliente);

    printf("\n* DATOS DEL CLIENTE *\n");
    printf("Nombre: %s\n", nombre_cliente);
    printf("Numero: %s\n", numero_cliente);
    printf("Direccion: %s\n", direccion_cliente);

    printf("\n* FACTURA *\n");
    printf("PRODUCTO\t\tCANTIDAD\tVALOR UNITARIO\t\tTOTAL\n");

    if (cantidades[0] != 0)
    {
        printf("Atun\t\t%.0f\t\t$%.2f\t\t$%.2f\n", cantidades[0], precios[0], subtotales[0]);
    }
    if (cantidades[1] != 0)
    {
        printf("Arroz\t\t%.0f\t\t$%.2f\t\t$%.2f\n", cantidades[1], precios[1], subtotales[1]);
    }
    if (cantidades[2] != 0)
    {
        printf("Aceite\t\t%.0f\t\t$%.2f\t\t$%.2f\n", cantidades[2], precios[2], subtotales[2]);
    }
    if (cantidades[3] != 0)
    {
        printf("azucar\t%.0f\t\t$%.2f\t\t$%.2f\n", cantidades[3], precios[3], subtotales[3]);
    }
    if (cantidades[4] != 0)
    {
        printf("harina\t%.0f\t\t$%.2f\t\t$%.2f\n", cantidades[4], precios[4], subtotales[4]);
    }

    printf("\nEl subtotal es: $%.2f\n", subtotal_total);
    printf("El total es: $%.2f\n", total);

    system("pause");
    return 0;
}

    
