/* S.G.M.P. */

//header file
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>  

int main(void)
{
	//variable declaration
	const float G = 6.67 * (pow(10, -11));
	float m1, m2;
	float r;
	float result;
	bool flag = false;

	//printf("The masses and distance before values are %f, %f, %f", m1, m2, r); #Usually the values of the uninitialized variables is Zero

	//code
	printf("Enter the Mass of the two bodies and distance between them- \n");
	for(int i = 0; i<3; i++){
		scanf("%f%f%f", &m1, &m2, &r);
		if ((m1 < 0 || m2 < 0 || r < 0) && i!=2){
			int tri = 2 - i;
			printf("Both the masses and the distance should be positive value, Please enter again.\nTries left: %d\n", tri);
			//continue;
		}
		else if ((m1 >= 0 || m2 >= 0 || r >= 0)) {
			flag = true;
			break;
		}
		else {
			printf("Tries Expired! Exiting the program.");
			exit(0);	//return(0);
		}
	}
	//printf("The masses and distance before values are %f, %f, %f", m1, m2, r);
	if (flag == true) {
		result = G * (m1 * m2) / (pow(r, 2));
		printf("The Gravitational Force is: %f.\n Details:\n Mass1: %f\tMass2: %f\tDistance: %f.", result, m1, m2, r);
	}
	else {
		printf("Entered values are incorrect!\n");
	}
	return(0);
}