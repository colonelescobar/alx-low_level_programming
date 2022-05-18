#include <stdio.h>

/**
 * fizz_buzz - prints 1 to 100 but prints "fizz" and "buzz" for multipl
 * es of 3 and 5 respectively.
 * 
 * Return: nothing.
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	 {
		 if(i % 3 == 0 && i % 5 == 0)
		 {
			 printf("FizzBuzz");
			 printf(" ");
		 }
		 else if (i % 5 == 0)
		 {
			 printf("buzz");
			 printf(" ");
		 }
		 else if (i % 3 == 0)
		 {
			 printf("Fizz");
			 printf(" ");
		 }
		 else
		 {
			printf("%d", i);
			printf(" ");
		 }

	 }

	printf("\n");
}
