/*
* Robby Allen
* 8/28/2020
* 
* Classic game of Fizz Buzz. Multiples of 3 are Fizz. Multiples of 5 are Buzz.
* Both are FizzBuzz.
*/

#include <stdlib.h>
#include <stdio.h>


int main() {
	int amount = 0;
	printf("Enter the amount of numbers you want for Fizz Buzz\n");

	scanf_s("%d", &amount);


	for (int i = 1; i <= amount; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d = FizzBuzz\n", i);
		}
		else if (i % 3 == 0) {
			printf("%d = Fizz\n", i);
		}
		else if (i % 5 == 0) {
			printf("%d = Buzz\n", i);
		}
		else {
			printf("%d = None\n", i);
		}

	}
	


}