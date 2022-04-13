/**
 * @file 3-calc.h
 * @author Muhabeid (muhabeid@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>
/**
* struct op - Struct op
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif