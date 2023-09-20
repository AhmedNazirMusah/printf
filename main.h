#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF _SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */

#define S_LONG 2
#define S-SHORT 1

/**
  * struct fmt - Struct op
  *@fmt: The Format.
  *@fn: The function associated.
  */
Struct fmt 
{
	char fmt:
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 */
