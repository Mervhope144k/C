#include <stdio.h>

/*
 * Description: simple calculator program, to evaluate the number 5
 * 		and 2 using five operations: Addition, substraction
 * 		multiplication, division, remainder.
 * Author: Merveilles
 * main : program entrance
 * return : 0 for success and other integer for faillure.
 */

int main()
{
printf("%d + %d = %d\n", 5, 2, 5 + 2);
printf("%d - %d = %d\n", 5, 2, 5 - 2);
printf("%d * %d = %d\n", 5, 2, 5 * 2);
printf("%f / %f = %f\n",5.0, 2.0, 5.0 / 2.0);
printf("%d %% %d = %d\n", 5, 2, 5 % 2);
return 0;
}
