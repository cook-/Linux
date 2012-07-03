/*
 * print user id and group id.
 */

#include "apue.h"

int
main()
{
	printf("uid = %d\ngid = %d", getuid(), getgid());
	exit(0);
}
