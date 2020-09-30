/*
 * ---------------------------------------------------------------------
 * Programa:  ej1-1.c 
 * ---------------------------------------------------------------------
 * del libro: UNIX Programación avanzada 3ª ed. 
 * Autor: Francisco M. Márquez
 * Editorial Ra-Ma
 *
 ** sys_errlist and  sys_nerr are deprecated; use strerror or strerror_r  instead
*/

 #include <stdio.h>
#include <errno.h>  /* anadido para sustituir sys_errlist y sys_nerr */
#include <string.h>  /* es necesario para la función strerror() */

extern int errno ;
int main()
{
    int i;
    /* En el array sys_errlist hay una descripción corta asociada a cada número de error
     * sys_nerr es el total de elementos del array sys_errlist */
    for (i=0;i<sys_nerr;i++)  {
        printf("%d: %s\n", i, sys_errlist[i]);
    } 
    
   /* este bucle es igual que el anterior pero con la función strerror()
    * no encuentro variable sustituta de sys_nerr */
    for (i=0;i<sys_nerr;i++)  {
        printf(" strerror( %d): %s\n",i, strerror(i));
    }
}

