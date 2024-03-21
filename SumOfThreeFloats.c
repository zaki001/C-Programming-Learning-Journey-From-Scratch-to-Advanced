// Include the standard input/output library for functions like printf and scanf
#include <stdio.h>

int main(void)
{
    // Declare three variables of type float to store the user's input
    float a, b, c;
    
    // Variable to store the sum of the input values
    float sum;

    // Prompt the user to input three floating-point numbers
    printf("Input three floats: ");
    
    // Read the input values from the user and store them in the variables a, b, and c
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the sum of the three numbers
    sum = a + b + c;

    // Print the individual numbers to the console
    printf("a = %f, b = %f, c = %f\n", a, b, c);
    
    // Print the sum of the three numbers
    printf("Sum = %f\n\n", sum);
    
    // Return 0 to signal that the program finished successfully
    return 0;
}

