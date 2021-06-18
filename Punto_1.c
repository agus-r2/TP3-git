#include <stdio.h>

void main()
{
//se determinan las variables     
char iNombre[10];
char iApellido[10];

//se asigna el nombre a la variable
printf ("\n escriba su nombre:");
scanf ("\n %s",&iNombre);
printf ("\n su nombre es: %s",iNombre);

//se asigna el apellido a la variable
printf ("\n escriba su apellido:");
scanf("%s",&iApellido);
printf("su apellido es: %s",iApellido);

return 0;

}