/* Distance of a marathon in yards

*/

#include <stdio.h>

int main(void){
	int miles = 26;
	int yards = 385;

	double kilometers = 1.609 * (miles + yards/1760.0);
	printf("\nA Marathon is %lf kilometers. \n", kilometers);
	return 0;

}
