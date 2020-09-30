/*
 * ---------------------------------------------------------------------
 * Programa:  ej1-3.c 
 * ---------------------------------------------------------------------
 * del libro: UNIX Programación avanzada 3ª ed. 
 * Autor: Francisco M. Márquez
 * Editorial Ra-Ma
 * 
*/
 #include <mic.h>

int main()
{
    errno = 2;
    error_fatal("No se puede abrir datos.dat", -1);    
}
