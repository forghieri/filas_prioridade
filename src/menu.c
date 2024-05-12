#include <stdio.h>
#include <stdlib.h>
#include "../include/header.h"


void menu()
{

    int escolha;

    printf("Aluno : Igor A. Forghieri\n");
    printf("**************************\n\n");
    printf("\t\t\tMENU IMPRESSÕES\n\n");
    printf("1 - Imprimir sem prioridade\n");
    printf("2 - Imprimir com prioridade\n");
    printf("3 - Consultar imprpessões na fila\n");
    printf("4 - Cancelar todas as impressões - ADMIN\n");
    printf("5 - sair\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        // imprimir sem prioridade

        break;

    case 2:
        // imprimir com prioridade
        break;

    case 3:
        // consultar impressões na fila
        break;

    case 4:
        // cancelar todas as impressões

        break;

    case 5:

        break;
    default:
        break;
    }

    return 0;
}