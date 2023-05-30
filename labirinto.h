#ifndef _LABIRINTO_H_
#define _LABIRINTO_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Labirinto Labirinto;

struct Labirinto *labirinto_ler_bin(FILE *p);

#endif