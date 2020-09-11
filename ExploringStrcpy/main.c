/*
 * Author: Luke Hindman
 * Date: Fri Sep 11 14:32:58 MDT 2020
 * Description: Exploring the functionality of
 *    the strcmp function.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

   /* 
    * strcpy() API documentation
    * https://www.man7org/linux/man-pages/man3/strcpy.3.html
    */

   size_t MAX_MSG_LENGTH = 20;
   char msg[] = "Welcome to CS253";
   
   char dest[MAX_MSG_LENGTH + 1];

   strcpy(dest,msg);

   printf("Message Data: %s\n",dest);

   /*
    * From the man page, we can see that strcpy() can only be safely 
    *   used if we can guarantee that the location we're copying to (dest)
    *   is at least as large as the source (strlen(msg) + 1), including
    *   the null byte ('\0').  
    * This example demonstrates that danger.
    */

   // size_t MAX_MSG_LENGTH = 20;
   // char msg[] = "Welcome to CS253. It is a pleasure to meet you.";
   
   // char dest[MAX_MSG_LENGTH + 1]; /* char array to store copy of msg */

   // /* Load data into dest string, overflowing into adjacent memory. Watch in debugger
   //  *   sometimes it prints correctly, sometimes it segfaults. */
   // strcpy(dest,msg);


   /* 
    * The code below allows us to test for this condition 
    */
   // size_t MAX_MSG_LENGTH = 20; /* max number of characters in string */
   // char msg[] = "Welcome to CS253";
   // char dest[MAX_MSG_LENGTH + 1]; /* create destination for max size + 1 for '\0' */

   // if (strlen(msg) <= MAX_MSG_LENGTH) {
   //    strcpy(dest,msg);
   // } else {
   //    printf("The message is too long to fit into the message buffer\n");
   //    exit(1);
   // }
   
   // printf("%s\n",dest);


   /* 
    * We can use the strncpy() function to copy up to n characters
    *   from the src string to the destination string.  There is 
    *   a key detail to remember when using strncpy(). If there are 
    *   more characters in src than n, a '\0' character must be 
    *   manually added to the end of the string.
    */
   // size_t MAX_MSG_LENGTH = 20; /* max number of characters in string */
   // char msg[] = "Welcome to CS253. It is a pleasure to meet you!";
   // char dest[MAX_MSG_LENGTH + 1]; /* create destination for max size + 1 for '\0' */

   
   // strncpy(dest,msg,MAX_MSG_LENGTH);

   // if (strlen(msg)>=MAX_MSG_LENGTH) {
   //    dest[MAX_MSG_LENGTH] = '\0';
   // }

   // printf("%s\n",dest);

   /* An exit code of zero indicates that the program ran successfully */
   return 0; 
}
