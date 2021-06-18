#include <stdio.h>

/*2) Un cyber café necesita un programa para procesar la información relacionada con las
computadoras que posee. Se necesita leer cantidad de computadoras, y precio por hora
de uso. Luego ingresar la cantidad de horas de uso de cada computadora en el mes.
se pide:
a) calcular el monto total recaudado por el cyber en el mes.
b) informar cual fue la computadora con menor cantidad de horas de uso y monto recaudado
por la misma.
*/

int main () {

//se determinan las variables 

int Cant_comp ;
int Cant_horas = 0;
int Precio_por_hora = 0;
int Minimo ;
int Comp_menos_horas = 0;
int Total_del_mes; 

//el usuairio establece la cantidad de computadoras que tiene y establezca el precio por hora

printf ("Determine la cantidad de computadoras: \n");
scanf ("%d",&Cant_comp);

printf ("Defina el precio por hora : \n");
scanf ("%d",&Precio_por_hora);

//se determina la cantidad de horas que cada computadora se uso

for (int i = 0; i < Cant_comp; i++)
 { 
    printf ("establesca la cantidad de horas en la que se uso la computadora: %d \n",i);
    scanf ("%d",&Cant_horas);

    Total_del_mes = Total_del_mes + (Cant_comp * Precio_por_hora);


    if(Cant_horas < Minimo)
    {
       Minimo = Cant_horas;
       Comp_menos_horas = i;
    }
 }

//se determina la computadora que recaudo menos y el total de ganancias del mes

printf ("\n el monto total ganado es de : %i", Total_del_mes);    
printf ("\n la computadora con menor horas de uso es %i con la cantidad de horas de %i y la recaudacion de %i",Comp_menos_horas, Minimo, Minimo * Precio_por_hora);

    return 0;
}