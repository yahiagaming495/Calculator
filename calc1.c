#include <stdio.h>
#include <string.h>
#include <math.h>

double result1;
double result2;
double finalResult;
char op;
double base;
double exponent;
int clear;
int CheckOPCorrect;

int main () {
	printf("NOTE: If you divide any number by zero (0), The program will output 'inf' (Infinity)\n");
	printf("NOTE: Please write 's' when requested to enter the type of calculation for finding the square root of a number\n");
	printf("NOTE: 'p' is for calculating the power\n"); // We will do a better method later but i am lazy... Maybe add a numbered-menu of possible calculation and make the user input the number, Uhh, not now 
	start:
	printf("NOTE: Press 'ctrl+c' on your keyboard or termux keyboard to be exit the program\n");
	printf("What type of calculation would you like to perform?: \n");
	scanf(" %c", &op);
	if (op == 's') {
		double sqrtOp;
		printf("Enter the number you want the square root of: \n");
		if (scanf("%lf", &sqrtOp) != 1) { // Scanf will return 1 if the input was correct, if it wasn't correct it will output ANY other number than 1
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {} // Clear the input buffer if the input was invalid
			goto start; }
		if (sqrtOp < 0) {
			printf("Square root cannot be a negative number");
			goto start; }
			
		else {
		printf("The result is: %f\n", sqrt(sqrtOp)); }
		goto start;
		}
	if (op == 'p') {
	printf("Please type the base number for this power calculation?:\n ");
	if (scanf("%lf", &base) != 1) {
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
			goto start; }
	printf("Please type the exponent of the number: \n");
	if (scanf("%lf", &exponent) != 1) {
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
			goto start; }
	printf("%lf", pow(base, exponent));
	goto start;
  }	else { // It will continue to perform a basic-math-calculation (+, -, *, /) 
	printf("Enter the first number:\n");
	if (scanf("%lf", &result1) != 1) {
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
			goto start; }
	printf("Enter the second number:\n");
	if (scanf("%lf", &result2) != 1) {
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
			goto start; }
	switch (op) {
		case '+': finalResult = result1 + result2; CheckOPCorrect = 1; break;
		case '-': finalResult = result1 - result2; CheckOPCorrect = 1; break;
		case '*': finalResult = result1 * result2; CheckOPCorrect = 1; break;
		case '/': finalResult = result1 / result2; CheckOPCorrect = 1; break; 	
	
		default: 
			printf("Invalid operation\n");  // Check if the operation is not correct, Or maybe the user just entered something that isn't added yet 
			CheckOPCorrect = 0;
			goto start;	}
		if (CheckOPCorrect == 1) {
			printf("Result is: %.2lf\n", finalResult);  }
			goto start;
		}

}



