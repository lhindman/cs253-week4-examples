/*
 * Author: Luke Hindman
 * Date: Fri Sep 11 14:32:58 MDT 2020
 * Description: Exploring the functionality of
 *    the strcpy function.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

   /* 
    * strcmp() API documentation
    * https://www.man7.org/linux/man-pages/man3/strcmp.3.html
    */

   char word1[] = "Bob";
   char word2[] = "Charles";
   int rc = 0;

   rc = strcmp(word1,word2);

   if (rc == 0) {
      printf("%s is identical to %s\n", word1, word2);
   } else if (rc < 0) {
      printf("%s comes before %s\n", word1, word2);
   } else {
      printf("%s comes before %s\n", word2, word1);
   }


   /* An exit code of zero indicates that the program ran successfully */
   return 0; 
}
