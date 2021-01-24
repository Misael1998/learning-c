#include <stdio.h>

/* copy input to output; 2st version */
int main()
{
  int c;

  c = getchar();
  while((c = getchar()) != EOF)
    putchar(c);
}
