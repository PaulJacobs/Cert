/* another strncat to into an unterminated buffer. */

main(int argc, char **argv)
{
  char *buffer = (char *)malloc(101);

  strncat(buffer, argv[2], 90);
}
Example 15 – strncpy1.c

/* 
   In this example, the attacker controls the third argument of strncpy,
   making it unsafe.
*/


#include <stdio.h>

main(int argc, char **argv)
{
  int incorrectSize = atoi(argv[1]);
  int correctSize = atoi(argv[2]);
  char *buffer = (char *)malloc(correctSize+1);


  /* number of characters copied is based on user-supplied value */

  strncpy(buffer, argv[3], incorrectSize);
}