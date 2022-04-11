/**
 * @file 2-main.c
 * @author muhabeid
 * @version 0.1
 * @date 2022-04-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(void)
{
  /**
   * @brief main - prints the name of the file it was compiled from, followed by a new line.
   * 
   * Returns 0 always
   */

  printf("%s\n", __FILE__);

  return 0;
}