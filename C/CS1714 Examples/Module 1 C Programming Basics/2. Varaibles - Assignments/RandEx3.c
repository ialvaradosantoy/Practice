#include <stdio.h>
#include <stdlib.h>   // Enables use of rand()
#include <time.h>     // Enables use of time()

int main(void) {
   int seedVal;

   scanf("%d", &seedVal);
   srand(seedVal);

   printf("%d\n", (rand() % 50) + 100);
   printf("%d\n", (rand() % 50) + 100);

   return 0;
}