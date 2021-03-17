#ifndef node
#define node

struct tnode {      /* the tree node: */
  char *word;           /* points to the text */
  int count;            /* number of ocurrances */
  struct tnode *left;   /* left child */
  struct tnode *right;  /* right child */
};

#endif
