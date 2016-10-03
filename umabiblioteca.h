#ifndef UMABIBLIOTECA_H
#define UMABIBLIOTECA_H

/* DECLARAÇÃO DAS BIBLIOTECAS */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "heuristica.h"
/*----------------------------*/


//estrutura para definir onde cada carro começa
typedef struct veiculo{
  char nome [2];
  char tipo [2]; // 2 = carro, 3 = caminhão
  char paralelo[2];
  char inicio_x [2];
  int fim_x;
  char inicio_y [2];
  int fim_y;
  int meio;
} _veiculo;

/*----------------------------*/
void verifica_carros(_veiculo *carros, int *n);
int prencher_matriz(_veiculo *carros, int *n);

#endif
