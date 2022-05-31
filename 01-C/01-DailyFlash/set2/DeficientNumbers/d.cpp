/* S.G.M.P. */

//header file
#include<iostream>

using namespace std;


void deficientNums(int num, int* arr) {

	int sum;
	int array_itr = 0;

	for (int i = 1; i <= num; i++) {
		sum = 0;
		for (int j = 1; j < (i / 2) + 1; j++) {
			if (i % j == 0) {
				sum += j;
			}	
		}
		if (sum < i) {
			*(arr + array_itr) = i;
			array_itr++;
		}
	}
	
}


int main(void) {

	//variable declaration
	int number = 0;
	cout<<"Please Enter the Last* Number of the Deficient Series.\n";
	cin >> number;

	int* deficientList = new int[number];

	//code 

	for (int i = 0; i < number; i++) {
		deficientList[i] = -1;
	}

	deficientNums(number, deficientList);

	cout << "The Deficient Numbers Series is:\n";
	for (int i = 0; i < number; i++) {
		if (deficientList[i] == -1) {
			break;
		}
		cout << deficientList[i] << ", " << endl;
	}

	return(0);
}
