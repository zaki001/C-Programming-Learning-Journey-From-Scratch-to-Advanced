/* Conversion of Fahrenheite to Celsius prgram

C = (F - 32)/1.8

*/

#include <stdio.h>

int main (void){

	int fahrenheit, celcius;
	
	printf("Please enter fahrenheit as an integer: ");
	scanf("%d", &fahrenheit);
	celcius = (fahrenheit - 32)/1.8;
	printf("\n%dfahrenheit is %d celcius. \n", fahrenheit, celcius);
	return 0;
	



}

