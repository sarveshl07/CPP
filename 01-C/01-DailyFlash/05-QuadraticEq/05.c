/* S.G.M.P. */

//header file
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void) {

	//variable decalaration
	float r1, r2, res;
	float a, b, c;
	int i = 0;

	//code
	printf("Please Enter the constants for quadratic equation with single variable(ax^2 + bx + c).\n");
	scanf("%f%f%f", &a, &b, &c);

	while (a == 0) {
		i++;
		if (i <= 3) {
			printf("Entered value of a is Zero. Please enter a non-zero value.\n");
			scanf("%f", &a);
		}
		else {
			printf("Exiting program!\n");
			return(0);
		}
	}

	res = ((pow(b, 2)) - 4 * a * c);
	if (res >= 0) {
		printf("The equation %0.2fx^2 + %0.2fx + %0.2f = 0 does not have real roots.\n", a, b, c);
		return(0);
	}
	else {
		r1 = pow(res, 0.5);

		//r1 = (-b) + (sqrt(res) / 2 * a);
		//r2 = (-b) - (sqrt(res) / 2 * a);
		printf("%f, %f, %f", r1, r2, res);
		//printf("The roots of the equation %0.2fx^2 + %0.2fx + %0.2f = 0 are as follows:\n r1 = %f\tr2 = %f.\n", a, b, c, r1, r2);
	}

	return(0);
}