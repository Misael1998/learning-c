#include <stdio.h>
#include <stdlib.h>

#include "table.h"

#define HASHSIZE 101
static struct nlist *hashtab[HASHSIZE];

struct nlist *lookup(char *);
char *strdUp(char *);

unsigned hash(char *);

/* install: put (name, defn) in hashtab */
struct nlist *install(char *name, char *defn)
{
  struct nlist *np;
  unsigned hashval;

  if ((np = lookup(name)) == NULL) {
    np = (struct nlist *) malloc(sizeof(*np));
    if (np == NULL || (np->name = strdUp(name)) == NULL)
      return NULL;
    hashval = hash(name);
    np->next = hashtab[hashval];
    hashtab[hashval] = np;
  } else 
    free((void *) np->defn);
  if ((np->defn = strdUp(defn)) == NULL)
    return NULL;
  return np;
}
