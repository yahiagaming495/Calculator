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
	if (op == 's') { // 's' means that the user wants the square-root, We used single-quotes because it's a single-letter plus, We are storing it in a char (single-letter-variable, which is: op)
		double sqrtOp;
		printf("Enter the number you want the square root of: \n");
		if (scanf("%lf", &sqrtOp) != 1) { // Scanf will return 1 if the input was correct, if it wasn't correct it will output ANY other number than 1
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {} // Clear the input buffer if the input was invalid
			goto start; }
		if (sqrtOp < 0) { // Check if the square root (sqrt, Stored in: sqrtOp) is a negative number, Or more specifically, Check if 0 is bigger than the inputed square-root
			printf("Square root cannot be a negative number\n");
			goto start; }
			
		else {
			printf("The result is: %f\n", sqrt(sqrtOp)); }
			goto start;
		}

	if (op == 'p') { // If user typed "p" in the opreation (Stored in: op), That means he requested to find the power of something 
	printf("Please type the base number for this power calculation?:\n ");
	if (scanf("%lf", &base) != 1) { // Any "&" in a scanf means store the user input into the variable after the "&"
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
			goto start; }
	printf("Please type the exponent of the number: \n");
	if (scanf("%lf", &exponent) != 1) {
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
			goto start; }
	printf("The result is: %lf\n", pow(base, exponent));
	goto start;


  }	else { // It will continue to perform a basic-math-calculation (+, -, *, /) 
	printf("Enter the first number:\n");
	if (scanf("%lf", &result1) != 1) {
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {}
			goto start; 
		}
	printf("Enter the second number:\n");
	if (scanf("%lf", &result2) != 1) { // scanf should return any other number than 1 if the user didn't input the correct type, We can use this to know if the user entered the requested type or not 
			printf("Invalid input\n"); 
			while ((clear = getchar()) != '\n' && clear != EOF) {} // Clear the input buffer (This may be hard to understand a bit tho)
			goto start; } // Go from the beggining (line: 18)
	switch (op) { // One of these conditions must be met
		case '+': finalResult = result1 + result2; CheckOPCorrect = 1; break; // If the user entered plus when asked to enter the operation (Line: 20), Then add the first number (result1) and the second number (result2) together and perform a simple-addition-calculation
		case '-': finalResult = result1 - result2; CheckOPCorrect = 1; break; // If the user entered (-), Subtract result1 from result2 and temporarily store the final result into (finalResult)
		case '*': finalResult = result1 * result2; CheckOPCorrect = 1; break; // Same goes on and on
		case '/': // If the user is trying to do division 
			if (result2 == 0) { // And if the user is dividing the second number (result2) by 0
				printf("Cannot divide by 0\n"); // Clarify that you can't do that buddy   
				goto start; // Go from the beggining, Or more specifically, From line (18)
			}
			else {  // If the user isn't trying to divide by zero
				finalResult = result1 * result2; // Divide the first number (result1) and the second number (result2) together and put them into (finalResult)
				CheckOPCorrect = 1; // It will temporarily store the number (1) into the variable (CheckOPCorrect) 
			}
	
		default: 
			printf("Invalid operation\n");  // Check if the operation is not correct, Or maybe the user just entered something that isn't added yet 
			CheckOPCorrect = 0;
			goto start;	}
		if (CheckOPCorrect == 1) { // If the CheckOPCorrect has it's value stored as (1) (See line: 72)
			printf("Result is: %.2lf\n", finalResult);   // Print the result that has been stored from at least one of the (case) code block
			goto start; // Go to the (start:) in line (18) and do all the code after line (18)
		} // CheckOPCorrect if closing bracket

} // Else closing bracket (Line: 50)

} // main closing bracket (Line: 14)
