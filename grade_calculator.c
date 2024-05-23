/* Write a C program that calculates the average grade of a student and determines the corresponding letter grade 
based on the average. The program should prompt the user to enter grades for five subjects,
compute the average, and then assign a letter grade based on the following scale:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F */

#include <stdio.h>

int main() {

	// prompting the user to enter grades for five subject
	printf("Enter the grades to your five subject please: ");

	// Declaring the array to store five grades of the student
	int grades[5];

	// Using to loops to prompt the user to enter grades for five subject and store them in the array

	for(int i = 0; i < 5 ; i++){
		printf("Enter grade of subject %d: ", i + 1);
		scanf("%d", &grades[i]);
}


}
