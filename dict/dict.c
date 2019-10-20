#include "dict.h"
#include <stdlib.h>
#include <stdio.h>

Dict *dict_new(void)
{
	Dict *D = (dict *) malloc(sizeof(Dict));
	D ->KeyValue = NULL;
	D ->size = 0;
	return D;
}
void dict_app(Dict *D, const char *key, const *char value);
{
	dict_add(D, 1);
	D ->keys_value[D->size - 1]
}
void dict_show(const Dict *D);
void dict_free(const Dict *D);
void dict_add(Dict *D, int nbr){
{
	
}
