#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"

#if defined(__cplusplus)
extern "C" {
#endif

typedef struct{
    char *key;
    char *val;
    int used;
} kvp;


int read_option(char *s, list *options);
void option_insert(list *l, char *key, char *val);
char *option_find(list *l, const char *key);
float option_find_float(list *l, const char *key, float def);
float option_find_float_quiet(list *l, const char *key, float def);
void option_unused(list *l);

#if defined(__cplusplus)
}
#endif

#endif
