#include <stdio.h>
#include <stdlib.h>

int main(void) {

   /* 
    * scanf() API documentation
    * https://man7.org/linux/man-pages/man3/scanf.3.html
    */
   int value=0;
   int rc = 0;
   printf("Please enter an integer value: ");
   rc = scanf("%d", &value);

   if (rc == 1) {
      printf("You entered: %d\n", value);
   } else {
      printf("Please enter only integer values!\n");
   }
   
   /* Extended example */
   int min = 0;
   int sec = 0;
   printf("Please enter the runtime (mm:ss): ");
   rc = scanf("%d:%d", &min, &sec);

   if (rc == 2) {
      printf("You entered %d minutes and %d seconds\n", min, sec);
   } else {
      printf("Please enter time formatted in mm:ss only\n");
   }

   /* An exit code of zero indicates that the program ran successfully */
   return 0; 
}
