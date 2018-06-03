/* TODO: TO BE COMPLETED */

#include "global.h"
#define MAX_SYMBOLS 300

/* TODO: define a symbol table/array, reuse project Pr1 */
Symbol symbol_table[MAX_SYMBOLS];
int symbol_table_size = 0;

Symbol *lookup(const char *s){
        /* TODO: TO BE COMPLETED */
	for(int i=0; i<symbol_table_size; i++){
		if(strcmp(symbol_table[i].lexptr, s) == 0){
			return &symbol_table[i];
		}
	}
	return NULL;
}

Symbol *insert(const char *s, int token){

	symbol_table[symbol_table_size].lexptr = strdup(s);
	symbol_table[symbol_table_size].token = token;
	symbol_table_size++;
	return &symbol_table[symbol_table_size-1];
}