#include <stdio.h>
#include <string.h>
#include <math.h>

double result1;
double result2;
double finalResult;
char op;
double base;
double exponent;
double result;

int main () {
	printf("NOTE: If you divide any number by zero (0), The program will output 'inf' (Infinity)\n");
	printf("NOTE: Please write 's' when requested to enter the type of caluclation for finding the square root of a number\n");
	printf("NOTE: 'p' is for calculating the power") // We will do a better method later but i am lazy... Maybe add a numbered-menu of possible calculation and make the user input the number, Uhh, not now 
	printf("What type of calculation would you like to perform?: \n");
	scanf(" %c", &op);
	if (op == 's') {
		double sqrtOp;
		printf("Enter the number you want the square root of: \n");
		scanf("%lf", &sqrtOp);
		printf("The result is: %f\n", sqrt(sqrtOp)); }

	if (op == 'p') {
	printf("Please type the base number for this power calculation?:\n ");
	scanf(" %lf", &base);
	printf("Please type the exponent of the number: \n");
	scanf(" %lf", &exponent);
	result = pow(base, exponent);
	printf("%lf raised to the power of %lf is %lf", base, exponent, result);
	
  }	else { // It will continue to perform a basic-math-calculation (+, -, *, /) 
	printf("Enter the first number:\n");
	scanf("%lf", &result1);
	printf("Enter the second number:\n");
	scanf("%lf", &result2);
	switch (op) {
		case '+': finalResult = result1 + result2; CheckOPCorrect = 1; break;
		case '-': finalResult = result1 - result2; CheckOPCorrect = 1; break;
		case '*': finalResult = result1 * result2; CheckOPCorrect = 1; break;
		case '/': finalResult = result1 / result2; CheckOPCorrect = 1; break;		
	
		default: 
			printf("Invalid operation"); // Check if the operation is not correct, Or maybe the user just entered something that isn't added yet 
	}


		printf("Result is: %f", finalResult);
		return 0;
			
		}

}



