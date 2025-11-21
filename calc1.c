#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


double finalResult;
char op;
double base;
double exponent;
int clear;
int CheckOPCorrect;
char UpOrDown;
double RoundUpNum;
double RoundDownNum;
int x;

#define LIGHT_GREEN "\x1b[32m"
#define RESET "\x1b[0m"
#define BOLD_GREEN "\033[1;32m"
#define COLOR_BLUE "\033[34m"
#define COLOR_RED "\033[31m"
#define COLOR_YELLOW  "\x1b[33m"

// ./calc1 [OPERATION] [FIRST NUMBER] [SECOND NUMBER]


int main (int argc, char *argv[]) {
	char op = argv[1][0];

	if (op == 's' || op == 'p' || op == 'r') {
		x = 1;
	}
	if (argc != 4 && x != 1) {
		printf(COLOR_RED "FATAL: You need to input three arguments" RESET);
		return 1;
		} 

	printf(COLOR_YELLOW "NOTE: Please write 's' when requested to enter the type of calculation for finding the square root of a number\n" RESET);
	printf(COLOR_YELLOW "NOTE: 'p' is for calculating the power\n" RESET);
	printf(COLOR_YELLOW "NOTE: 'r' is for rounding (Upwards and downwards, Just type the operation as 'r' and keep the numbers blank\n" RESET);
	printf(COLOR_YELLOW "NOTE: Press 'ctrl+c' on your keyboard or termux keyboard to exit the program\n" RESET);
	if (op == 's') { // 's' means that the user wants the square-root, We used single-quotes because it's a single-letter plus, We are storing it in a char (single-letter-variable, which is: op)
		double sqrtOp = atof(argv[2]); // Convert string to float
		
		if (sqrtOp < 0) { // Check if the square root (sqrt, Stored in: sqrtOp) is a negative number, Or more specifically, Check if 0 is bigger than the inputed square-root
			printf(COLOR_RED "FATAL: Square root cannot be a negative number\n" RESET); }
			 

		else {
			printf(LIGHT_GREEN "The result is: " RESET BOLD_GREEN "%f" RESET "\n", sqrt(sqrtOp) ); 
				}
} // Line 42 closing

	else if (op == 'p') { // If user typed "p" in the opreation (Stored in: op), That means he requested to find the power of something 
	double base = atof(argv[2]);
	double exponent = atof(argv[3]);
	if (exponent == 0 || base == 0) {
		printf(COLOR_RED "FATAL: Cannot do 0 power 0 in power calculation" RESET);
		return 1;
	}
	printf(LIGHT_GREEN "The result is: " RESET BOLD_GREEN "%f\n", pow(base, exponent)); }
	


else if (op == 'r') {
	printf("Do you want to round the number upwards or downwards?: ('u' for upwards, 'd' for downwards)\n");
	if (scanf(" %c", &UpOrDown) != 1) {
		printf(COLOR_RED "FATAL: Invalid input\n" RESET); 
		while ((clear = getchar()) != '\n' && clear != EOF) {}
 
	}
	
	if (UpOrDown == 'u') {
		printf("What number do you want to round upwards?: \n");
		if (scanf(" %lf", &RoundUpNum) != 1) {
			printf(COLOR_RED "FATAL: Invalid input\n" RESET); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
 
		}
		else {
			printf(LIGHT_GREEN "The result is: " RESET BOLD_GREEN "%f" RESET, ceil(RoundUpNum) ); } 
		} 
				
	if (UpOrDown == 'd') {
		printf("What number do you want to round downwards?: \n");
		if (scanf(" %lf", &RoundDownNum) != 1) {
			printf(COLOR_RED "FATAL: Invalid input\n" RESET); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}

		}
		else {
			printf(LIGHT_GREEN "The result is: " RESET BOLD_GREEN "%f" RESET "\n", floor(RoundDownNum));
			} 
		} // if line:54 closing
		}
else { // It will continue to perform a basic-math-calculation (+, -, *, /) 
	double result1 = atof(argv[2]);
	double result2 = atof(argv[3]);
	switch (op) { // One of these conditions must be met
		case '+': finalResult = result1 + result2; CheckOPCorrect = 1; break; // If the user entered plus when asked to enter the operation (Line: 20), Then add the first number (result1) and the second number (result2) together and perform a simple-addition-calculation
		case '-': finalResult = result1 - result2; CheckOPCorrect = 1; break; // If the user entered (-), Subtract result1 from result2 and temporarily store the final result into (finalResult)
		case 'x': finalResult = result1 * result2; CheckOPCorrect = 1; break; // Same goes on and on
		case '/': // If the user is trying to do division 
			if (result2 == 0) { // And if the user is dividing the second number (result2) by 0
				printf(COLOR_RED "FATAL: Cannot divide by 0\n" RESET); // Clarify that you can't do that buddy   

			}
			else {  // If the user isn't trying to divide by zero
				finalResult = result1 / result2; // Divide the first number (result1) and the second number (result2) together and put them into (finalResult)
				CheckOPCorrect = 1;  // It will temporarily store the number (1) into the variable (CheckOPCorrect) 
				break;
			}
		default: 
			printf(COLOR_RED "FATAL: Invalid operation\n" RESET);  // Check if the operation is not correct, Or maybe the user just entered something that isn't added yet 
			break; }
			
		if (CheckOPCorrect == 1) { // If the CheckOPCorrect has it's value stored as (1) (See line: 72)
			printf(LIGHT_GREEN "Result is: " BOLD_GREEN  "%.2lf" RESET "\n", finalResult);
			   // Print the result that has been stored from at least one of the (case) code block
		} // CheckOPCorrect if closing bracket

} // Else closing bracket (Line: 50)

} // main closing bracket (Line: 14)

