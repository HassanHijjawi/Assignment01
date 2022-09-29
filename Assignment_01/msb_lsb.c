/*
* requires : A non-negative 32 bits integer .
* effects : Returns the distance between the msb set to 1 and the lsb set to 1.
*/

/*
* Test Cases and their expected output:
* 0 --> 0
* 2 --> 0
* 4 --> 0
* 9 --> 3
* 1 --> 0
*/

#include <stdio.h>
#include <Windows.h>

int msb(int);
int lsb(int);

int main()
{
	int number = 0;
	printf("Please enter a non-negative integer:");
	scanf_s("%d", &number);

	int msb_1 = msb(number);
	int lsb_1 = lsb(number);

	printf("\n The distance between msb and lsb of %d is: %d",number, lsb_1 - msb_1);
	
}

int msb(int number)
{
	if (number == 0)
		return 0;

	char bit_Representation[32];
	int i = 0;
	for (i; i < 32; i++)
		bit_Representation[i] = -1;

	i = 0;
	int index = 31;
	//Getting the 32-bit binary representation
	while (number > 0)
	{
		if (number % 2 == 0)
			bit_Representation[index] = 0;
		else
			bit_Representation[index] = 1;

		index--;
		number /= 2;
	}

	for (i; i < 32; i++)
	{
		if (bit_Representation[i] == 1)
			break;
	}
	
	if (i == 32)
		return 0;
	return i;

}

int lsb(int number)
{
	if (number == 0)
		return 0;

	char bit_Representation[32];
	int i = 0;
	for (i; i < 32; i++)
		bit_Representation[i] = -1;

	i = 31;
	int index = 31;
	//Getting the 32-bit binary representation
	while (number > 0)
	{
		if (number % 2 == 0)
			bit_Representation[index] = 0;
		else
			bit_Representation[index] = 1;

		index--;
		number /= 2;
	}


	for (i; i >= 0; i--)
	{
		if (bit_Representation[i] == 1)
			break;
	}
		

	if (i == 0)
		return 0;
	return i;

}