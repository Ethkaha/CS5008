/**
 * Starter Code Function Practice Code Along
 * 
 * This program demonstrates the use of functions in C.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> 

int add(int a, int b) {
return a + b;
}

int subtract(int a, int b) {
return  a - b;
}

int multiply(int a, int b) {
return a * b;
}

int divide(int a, int b) {
	
return a / b;
}

int modulus(int a, int b) {
return a % b;
}


int main() {
	int a = 10;
	int b = 5;
	
	printf("Additon: %d\n", add(a,b));
	printf("Subtraction: %d\n", subtract(a,b));
	printf("Multiply: %d\n", multiply(a,b));
	printf("Divide: %d\n", divide(a,b));
    return 0;
}

