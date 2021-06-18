#include <stdio.h>

/*1) Realizar un programa que lea desde el teclado el ancho, alto y profundidad de un
prisma rectangular (cuerpo geométrico de 6 caras rectangulares, como una caja) e
informe su volumen y área de la superficie formada por sus caras.
*/
void main() {
//se determinan las variables     
float (xLargo);
float (yAncho);
float (zAltura);
int (volumen);
int (area);

//se establezen los valores 
printf ("el valor del largo de la figura:");
scanf ("\n %f",&xLargo);

printf ("\n el valor del ancho de la figura es:");
scanf ("\n %f",&yAncho);

printf ("\n el valor de la altura de la figura es:");
scanf ("\n %f",&zAltura);

//se realiza las operacion para allar el valor del volumen y el area
volumen = xLargo * zAltura;
area = xLargo + (2 * zAltura);

printf ("el volumen es: %d \n", volumen);
printf ("el area es: %d \n", area);

return 0;