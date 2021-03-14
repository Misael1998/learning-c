#define ALLOCSIZE 10000 /* size of available space */

static char allocbuff[ALLOCSIZE];   /* storage for alloc */
static char *allocp = allocbuff;    /* next free position */

char *alloc(int n)
{
  if  (allocbuff + ALLOCSIZE - allocp >= n) { /* it fits */
    allocp += n;
    return allocp - n; /* old p */
  } else      /* not enough room */
    return 0;
}

void afree(char *p)   /* free storage pointed to by p */
{
  if (p >= allocbuff && p < allocbuff + ALLOCSIZE)
    allocp = p;
}
