#include <stdio.h>

// &    bitwise AND
// |    bitwise inclusive OR
// ^    bitwise exclusive OR
// <<   left shift
// >>   right shit
// ~    one's complement (unary)

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
  return (x >> (p+1-n)) & ~(~0 << n);
}

int main()
{
  return 0;
}
