#include "apue.h"

int
main(int agrc, char *argv[])
{
	int i;

	for (i = 0; i != argc; ++i)
		printf("argv[%d]:%s\n", i, argv[i]);
	exit(0);
}
