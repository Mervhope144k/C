#include <stdio.h>
#include <stdlib.h>

int main()

{
	//%d for integer placeholder
	printf("We have %d coins in the bank\n", 100);
	//%f for float placeholder without delimiter
	printf("We have %f coins in the bank\n", 125.7);
	//%d integer placeholder
	printf("Year = %d\n, 2023");
	//%f float placeholder without delimiter
	printf("Your average grade is: %f\n", 95.13);
	//sum of integers using %d integer placeholder
	printf("num1 = %d, num2 = %d, sum = %d\n", 5, 7, 5 + 7);
	//sum of decimals using %f placeholder
	printf("num1 = %f, num2 = %f, sum = %f\n", 5.2, 7.3, 9.5);
	//difference of integers using %d placeholder
	printf("num1 = %d, num2 = %d, sub = %d\n", 5, 3, 5-3);
	//sum of integers using %d
	printf("a = %d, b = %d, sum = a + b = %d\n", 3, 5, 3 + 5);
	//sum of integers using %d
	printf("a = %d, b = %d, sum = %d + %d = %d\n", 3, 5, 3, 5, 3 + 5);
	//sum of integers using %d
	printf("a = %d, b = %d, sum = a + b = %d + %d = %d\n", 3, 5, 3, 5, 3 + 5);
	return 0; 
}
