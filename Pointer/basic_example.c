#include <stdio.h>

int main () {

   int  a = 10; /*variable declaration */
   int  *referance; /* pointer variable declaration */

   referance = &a;  /* point to address */

   printf("Address of variable: %x\n", &a);

   /* address stored in pointer variable */
   printf("Address of referance: %x\n", referance);

   /* access the value using the pointer */
   printf("Value of *referance: %d\n", *referance);

   return 0;
}
