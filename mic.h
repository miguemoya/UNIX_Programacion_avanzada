/*
 * ---------------------------------------------------------------------
 * fichero mic.h  para el programa  ej1-2.c 
 * ---------------------------------------------------------------------
 * del libro: UNIX Programación avanzada 3ª ed. 
 * Autor: Francisco M. Márquez
 * Editorial Ra-Ma
 * 
 * no sabía resolver como obtener la cadena del identificador del error, 
 * ej. ENOENT 2 No existe el fichero o el directorio
 * he copiado la estructura del programa errno.c del paquete moreutils
 * en el Makefile del paquete viene como se crea errnos.h
 * errnos.h:
 *         echo '#include <errno.h>' > dump.c
 *         $(CC) -E -dD dump.c | awk '/^#define E/ { printf "{\"%s\",%s},\n", $$2, $$2 }' > errnos.h
 *     -E  finaliza la compilción después del preproceso
 *  
*/
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

 
 static struct {
    const char *name;
    int code;
} errnos[] = {
    #include "errnos.h"
};
static const int num_errnos = sizeof(errnos) / sizeof(errnos[0]);

void error (char *nfichero, int nro_linea, char *mensaje) ;
void error_fatal(char *mensaje, int codigo_salida) ;
