#include <stdio.h>

/*4) Escribir un programa que para una fecha ingresada por un usuario (año, mes, día)
determine:
a) Si es una fecha válida.
b) Si el año es bisiesto o no.
c) La cantidad de días que faltan para fin de mes.
Nota: un año es bisiesto si es un número divisible por 4, pero no si es divisible por 100, excepto
que también sea divisible por 400.
*/
int main () 
{

// se determinan las variables
int (dia);
int (mes);
int (anio);

// se les otorga el valor que desee el usuario
printf ("\n escriba el dia:");
scanf ("%i",&dia);

printf ("\n escriba el mes:");
scanf ("%i",&mes);

printf ("\n esciba el año:");
scanf ("%i",&anio);

// se determina si la fecha ingresada es correcta o incorrecta y si es un anio bisiesto o no
if (mes >= 1 && mes <= 12)
 { if (mes % 2 == 0)
      if (dia >= 1 && dia <= 30)
      printf ("\n la fecha es correcta");
   else 
      printf ("\n la fecha es incorrecta");

  }    
    if (mes >= 1 && mes <= 12)
    {  if (mes % 2 != 0)
          if (dia >= 1 && dia <= 31)
           printf ("\n la fecha es correcta");
      else 
           printf ("\n la fecha es incorrecta");

    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )
        printf ( "\n  es bisiesto" );
    else
        printf ( "\n  no es bisiesto" );

    }  
  
  return 0;
}