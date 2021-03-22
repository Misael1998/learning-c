union u_tag {
  int ival;
  float fval;
  char *sval;
} u;

struct {
  char *name;
  int flags;
  int utype;
  union {
    int ival;
    float fval;
    char *sval;
  } u;
} symtab[123];

/*
int ival = symtab[0].u.ival;
*char sval = *symtab[0].u.sval;
*/
