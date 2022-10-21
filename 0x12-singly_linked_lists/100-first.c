#include <stdio.h>
void myTimelessFun(void) __attribute__ ((constructor));
/**
 * myTimelessFun - this function executes before main function
 */
void myTimelessFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
