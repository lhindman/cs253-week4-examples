#include <stdio.h>
#include <stdlib.h>

int main(void) {

   /* 
    * printf() API documentation
    * https://man7.org/linux/man-pages/man3/printf.3.html
    */

   printf("Hello World\n");

   /* Check the output */
   int rc = 0;
   rc = printf("");

   printf("The number of characters diplayed is: %d\n", rc);

   /* Check for errors */

   if (rc < 0) {
      printf("An error occurred while printing. Please try again. (Error: %d)\n", rc);
      exit(1); /* A non-zero exit code indicates that an error has occurred */
   }

   return 0; /* An exit code of zero indicates that the program ran successfully */
}
