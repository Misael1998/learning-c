#include <string.h>

#define MAXLEN 1000   /* max lenght of any input line */
#undef getline
int getLine(char *, int);
char *alloc(int);

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
  int len, nlines;
  char *p, line[MAXLEN];

  nlines = 0;
  while ((len = getLine(line, MAXLEN)) > 0)
    if (nlines >= maxlines || (p = alloc(len)) == NULL)
      return -1;
    else {
      line[len-1] = '\0'; /* delete new line */
      strcpy(p, line);
      lineptr[nlines++] = p;
    }

  return nlines;
}

