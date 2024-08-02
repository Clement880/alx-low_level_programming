#include <stdio.h>
/**
 * myStartupFun - applies constructor to myStartupFun()
 * so as to execute before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - the implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're best! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
