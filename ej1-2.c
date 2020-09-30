/*
 * ---------------------------------------------------------------------
 * Programa:  ej1-2.c 
 * ---------------------------------------------------------------------
 * del libro: UNIX Programación avanzada 3ª ed. 
 * Autor: Francisco M. Márquez
 * Editorial Ra-Ma
 * 
*/
 #include <mic.h>

int main()
{
    extern int sys_nerr;
    
    char mensaje[50];
    
    /* En el array sys_errlist hay una descripción corta asociada a cada número de error
     * sys_nerr es el total de elementos del array sys_errlist
     * pero están obsoletas, se recomienda usar la función strerror()
     * no encuentro variable que sustituya a sys_nerr para mostrarlas todas
     */
    for (int i=1; i < sys_nerr; i++)  {
        sprintf(mensaje, "Error nro. %d\n", i);
        errno = i;
        error ( __FILE__, __LINE__, mensaje);
    }
    
}
