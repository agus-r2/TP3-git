#include <stdio.h>

void Quick_sort(int C[], int inicio, int final);

int main(int conj, char *elem[])
{
  int i, C[7] = {5,8,9,2,6,1,3};

  Quick_sort(C, 0, 6);

  for(i = 0; i < 7; i++)
  {
      printf("%d \t", C[i]);
  }
return 0;
}

void Quick_sort(int C[], int inicio, int final)
{
   int pivot, izquierda, derecha, medio;

if(inicio < final)
 {
  pivot=C[inicio];
  izquierda=inicio;


  derecha=final;

  while(izquierda < derecha)
  {
    while(derecha > izquierda && C[derecha] > pivot)  
    derecha--;
    if(derecha > izquierda)
    {
      C[izquierda]= C[derecha];
      izquierda++;
    }

 while(izquierda && C[izquierda] < pivot )
    izquierda++;
  if(izquierda < derecha)
    {
      C[derecha] = C[izquierda];
      derecha--;  
    }  
  }
  
  C[derecha] = pivot;
  medio = derecha;

  Quick_sort(C, inicio, medio-1);
  Quick_sort(C, medio+1, final);
 }

}