#ifndef FUNC_POINTERS
#define FUNC_POINTERS
#include<stddef.h>
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
