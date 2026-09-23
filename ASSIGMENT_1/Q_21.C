#include <stdio.h>

int main()
 {
    // Variables to store input numbers
    int num1, num2;
    
    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient;
    
    // Check for division by zero
    if (num2 != 0)
	 {
		
        quotient = (float)num1 / num2;
    } 
	else
	 {
        quotient = 0;  // Default value when division by zero occurs
        printf("Warning: Division by zero is not allowed.");
    }
    
    int remainder;
    if (num2 != 0) 
	{
        remainder = num1 % num2;
    } 
	else 
	{
        remainder = 0;  // Default value when modulus by zero occurs
    }
    
    // Display results
    printf("Addition: %d + %d = %d", num1, num2, sum);
    printf("Subtraction: %d - %d = %d", num1, num2, difference);
    printf("Multiplication: %d * %d = %d", num1, num2, product);
    if (num2 != 0) 
	{
        printf("Division: %d / %d = %.2f", num1, num2, quotient);
        printf("Modulus: %d %% %d = %d", num1, num2, remainder);
    }

    return 0;
}