/*
 * print user id and group id.
 */

#include "apue.h"

int
main()
{
	printf("uid = %d\ngid = %d\n", getuid(), getgid());
	exit(0);
}
