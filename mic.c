/*
 * ---------------------------------------------------------------------
 * fichero mic.c  
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
 * compilar con la opción -c para generar el fichero objeto
 * gcc -c mic.c
*/
#include <mic.h>

void error (char *nfichero, int nro_linea, char *mensaje) {
    printf("%s (%d) . ERROR: %s, %s. %s", nfichero, nro_linea, errnos[errno-1].name, strerror(errno), mensaje);
}

void error_fatal(char *mensaje, int codigo_salida) {
     printf("ERROR FATAL: %s, %s. %s\n", errnos[errno-1].name, strerror(errno), mensaje);
     exit(codigo_salida);
}
