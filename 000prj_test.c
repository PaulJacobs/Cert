
#include <stdlib.h>

/*  This program doesn't contain an integer overflow on line 15
    because the length of the variable len is checked. It's meant
    to complement overflow.c, to check if buffer overflow warnings 
    for that program are just vacuously triggered by the read()
    call or if the scanner is actually spotting the overflow.

    A scanner shouldn't complain about an integer overflow on line
    15 or a buffer overflow on line 16.
*/
void testFunc1(size_t len)
{
  int doNothing;
  
  doNothing = 2;
}

size_t testFunc2(size_t len)
{
  return len * 2;
}

int testFunc3(size_t len)
{
  return len * 2;
}
  

void func(int fd)
{

 char *buf;
 size_t len;
 
 read(fd, &len, sizeof(len));
 
 /* check the maximum length. No need to check for negative numbers since
    size_t is unsigned already. */
  
  if (len<1000)
  {
    len = 500;
    testFunc1(len);
    len = testFunc2(len);
  }
 
 if (len > 1024)
   return;

 buf = malloc(len+1);                    // line 15
 read(fd, buf, len);                     // line 16
 buf[len] = '�';
}
