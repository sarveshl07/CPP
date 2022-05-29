/* S.G.M.P. */

//header file
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void) {

	//variable declaration
	const float k = 8.988 * (pow(10, 9));
	float q1, q2, r;
	float result;
	int i = 0;
	bool flag = false;

	//code
	printf("Enter two charges and the distance between them.\n");
	scanf("%f%f%f", &q1, &q2, &r);
	
	while (r<0) {
		i++;
		if (i <= 3) {
			printf("Distance cannot be Negative or Zero Please Enter again.\n");
			scanf("%f", &r);
		}
		else {
			flag = true;
			break;
		}
	}
	if (flag == true) {
		printf("Distance Entered is Negative or Zero. Exiting the program!");
		return(0);
	}
	else {
		result = (k * ((q1) * (q2))) / (pow(r, 2));
		printf("The Magnitude of Force is: %f\n", result);
		if (result > 0) {
			printf("Force is of Repulsion type.\n");
		}
		else if (result < 0) {
			printf("Force is of Attraction type.\n");
		}
		else {
			printf("No Force is being applied.\n");
		}
	}

	return(0);
}