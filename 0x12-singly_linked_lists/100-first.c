/**
 * @file 100-first.c
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}