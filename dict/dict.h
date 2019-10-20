#ifndef DICT_H
#define DICT_H

typedef struct KeyValue	KeyValue;
typedef struct Dict Dict;


struct KeyValue
{
	const char *key;
	const char *value;
};

struct Dict
{
	KeyValue **keys_values;
	int size;
};

Dict *dict_new(void);
void dict_app(Dict *D, const char *key, const *char value);
void dict_show(const Dict *D);
void dict_add(Dict *D, int nbr)
void dict_free(const Dict *D);

#endif
