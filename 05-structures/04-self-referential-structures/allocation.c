#include <stdlib.h>
#include <string.h>
#include "node.h"

/* talloc: make a tnode */
struct tnode *talloc(void)
{
  return (struct tnode *) malloc(sizeof(struct tnode));
}

char *strdUp(char *s)
{
  char *p;
  p = (char *) malloc(strlen(s)+1);
  if (p != NULL)
    strcpy(p, s);
  return p;
}
