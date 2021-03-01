#include <stdio.h>

/* Print Fahrenheit-Celcius table
 * for fahr = 0, 20, ..., 300
 */

int main()
{
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;    /* Lower limit of temperature table */
  upper = 300;  /* Upper limit */
  step = 20;    /* Step size */

  fahr = lower;
  while(fahr <= upper)
  {
    celcius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }
}