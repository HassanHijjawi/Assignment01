/*
* requires: only non-negative integers
* effects: This program returns the total number of different bits in the binary presentation of 2 integers >=0. 
*/

/*
* Test Cases and the expected output :
* 0 0 --> 0
* 3 1 --> 1
* 1 3 --> 1
* 3 3 --> 0
* 3 0 --> 2
* -1 2 --> Terminates the program
* 2 -1 --> Terminates the program
* -5 -5 --> Terminates the program
*/
#include <stdio.h>
#include <Windows.h>

int FindDifference(int ,int);


int main()
{
	int number_1 = 0, number_2 = 0;
	
	while (number_1 >= 0)
	{
		printf("Enter two positive numbers, a negative to stop:");
		scanf_s("%d", &number_1);
		if (number_1 < 0)
			break;
		scanf_s("%d", &number_2);
		if (number_2 < 0)
			break;
		printf("Hamming string: %d \n", FindDifference(number_1, number_2));

	}
}

int FindDifference(int number1, int number2)
{
	int Xoring = number1 ^ number2;
	int count_1s = 0;
	int check_Odd = -1;

	if (Xoring == 0)
		return 0;

	while (Xoring > 0)
	{
		check_Odd = Xoring % 2;
		if (check_Odd == 1)
		{
			count_1s++;
		}
		Xoring /= 2;
	}
	return count_1s;
}

	


