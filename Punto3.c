#include <stdio.h>

/*3) realizar una función que reciba un caracter en minúscula como parámetro y devuelva
//convertido a mayúscula. Hacer la función inversa, que convierta de mayúscula a
minúscula. Crear un programa que utilice ambas funciones.
*/
void main () {

// se determina la letra 
char cLetra ;

printf("Escriba una letra:");
printf ("%c", cLetra);

//se escribe la letra que determina el usuario
//mediante el if de convierte la letra determinada

if (cLetra >= 65 && cLetra  <= 90);
    printf ("%c \n", cLetra + 32);
    
if (cLetra >= 97 && cLetra  <= 122);
    printf ("%c \n", cLetra - 32);

    return 0;
}