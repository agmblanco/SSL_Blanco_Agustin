#include <stdio.h>
#include <time.h>

void main() {
   clock_t t;
   printf("Presione una tecla para iniciar...\n");

   while(1) {
      if (getchar())
      break;
   }
   printf("Cronometro iniciado :D\n");
   t = clock();
   printf("Presione una tecla para finalizar...\n");
   while(1) {
      if (getchar())
      break;
   }
   t = clock() - t;
   double tiempo = ((double)t)/CLOCKS_PER_SEC;
   printf("El tiempo fue de %f segundos :P\n", tiempo);
   printf("Presione una tecla para salir...\n");
   while(1) {
      if (getchar())
      break;
   }
}
