#include <stdio.h>

/*
* ******************************************************************
* void print_Array (int array [], int size):
* 
* requires: an array of integers and its accurate size
* effects: prints the contents of the array in a form of a table of two columns such that each
*			row corresponds to an element of an array with its first column to display the index of the element in the array 
*			and the second column the actual value of the element.
* 
* Testcases:
* [] --> Displays nothing, program ends.
* [1,2,3] --> 0 1
*             1 2
*             2 3
* 
* [4,3,2,1] -->  0 4
*				 1 3
*				 2 2
*				 3 1
* 
* ******************************************************************
* void arrayHistogram(int array [], int size):
* 
* requires: an array of integers and its accurate size. The only elements that can exist in the array are 1,2 and 3.
* effects: Prints the value of an element, its frequency (how many times it appeared) and displays a histogram in the 
*			form of a number of stars which equal to the frequency of the element.
* 
* Testcases and their expected output (value, frequency, histogram): 
*	[1,2,3,1,2,3,1,2,2,1,3,1,3] --> 1,5,*****  
*									2,4,**** 
*									3,4 ****.
*	[1,1,1,1,1] --> 1,5,*****
*	[] --> Program ends; displays nothing;
*	[1,1,1,2,3,3] --> 1,3,*** 
*					  2,1,*  
*					  3,2,**.
* *******************************************************************
* void swapValues(int array [], int index_1, int index_2)
* 
* requires: A non-empty array of integers; the two passed indexes must be valid (indexes <= size of the array)
* effects: The array is changed such that A[i] = A[j] and A[j] = A[i] with i != j.
* 
* Testcases and their expected output:
* swapValues([8,2,3,9,3], 2, 2) --> [8,2,3,9,3]
* swapValues ([1,5,3,4], 0, 3) --> [4,5,3,1]
* swapvalues([0,1,2,4,1,7],-1,9) --> [0,1,2,4,1,7]
* swapvalues([0,1,2,4,1,7],-1,-9) --> [0,1,2,4,1,7]
* swapvalues([0,1,2,4,1,7],-1,-9) --> [0,1,2,4,1,7]
* 
* *******************************************************************
* void bubbleSort (int array [], int size)
* 
* requires: Nothing except the accurate size of the array.
* effects: Sorts the array such that A[i] <=  A[i+1] in O(n*n).
* 
* TestCases and expected output:
* 
* [] --> Program does nothing
* [3,2,1] --> [1,2,3]
* [1,1,1,1,1] --> [1,1,1,1,1]
* [1,2,3,4,5] --> [1,2,3,4,5]
* [-1,-5,-9,100,0,78,99] --> [-9,-5,-1,0,78,99,100]
* [-5,-4,-3] --> [-5,-4,-3]
* 
* ********************************************************************
* int Median(int array [], int size)
* 
* requires: Accurate size of the array
* effects: It sorts the array usinf the function bubbleSort such that A[i] <= A[i+1] and return the element at index size/2.
* 
* TestCases and expected output:
* [] --> Program does nothing.
* [1,2,3] --> Array becomes [1,2,3] and value returned is array[3/2] = array[1] = 2.
* [3,5,2,6,3,1] --> Array becomes [1,2,3,3,5,6] and value returned is array[6/2] = array[3] =3.
* [7,3,12,3,2,4,0] --> Array becomes [0,2,3,3,4,7,12] and value returned is array[7/2]= array[3] = 3
* 
* *******************************************************************
* int Mode (int array[], int size)
* 
* requires: Accurate size of the array
* effects: Sorts the array using bubble sort such that A[i] <= A[i+1] and returns the most frequent value in the array.
* 
* TestCases and expected output:
* [] --> Program does nothing.
* [0,0,0,0,0] --> Array becomes [0,0,0,0,0] and returned value is 0.
* [3,5,2,3,2,4,2,3,3,3,6] --> Array becomes [2,2,2,3,3,3,3,3,4,5,6] and returned value is 3.
* [-1,-2,-4,-4,-4,9,193] --> Array becomes [-4,-4,-4,-2,-1,9,193] and returned value is -4.
* [1,1,1,1,1,2,2,2,3,3] --> Array becomes [1,1,1,1,1,2,2,2,3,3] and returned value is 1.
* 
* *********************************************************************
* int isSorted(int array [] , int size)
* 
* requires: Acccurate size of the array.
* effects: The array is unchanged. Returns 0 if array[i+1] < array[i] for any i < size-1 since the array won't be in increasing order.
*			Returns 1 otherwise.
* 
* Testcases and their output:
* [] --> program does nothing.
* [1,2,3,4,5] --> returns 1
* [1,2,3,1,4] --> returns 0
* [4,7,8,19,-1] --> returns 0
* [-50,-43,-33,-11,79] --> returns 1
* [0,0,0,0,0,0] --> returns 1.
* 
* ***********************************************************************
*/
void print_Array(int[], int);

void arrayHistogram(int[], int);

void swapValues(int [], int, int);

void bubbleSort(int[], int);

int Median(int[], int);

int Mode(int[], int);

int isSorted(int[], int);

int main()
{
	//Uncomment the function you wish to test.

	const int SIZE = 10;
	int array[] = { 1,1,1,1,1,2,2,2,3,3 };
	//print_Array(array,SIZE);
	// 
	//arrayHistogram(array, SIZE);
	// 
	//swapValues(array, 0, 6);
	// 
	int array_2[] = { 4,2,5,8,9,2 };
	//bubbleSort(array_2, 6);
	// 
	int array_3[] = { 33,-34,-48,339,0,-1,47 };
	//bubbleSort(array_3, 7);
	//
	//printf("%d", Median(array_2, 6));
	//
	//printf("%d", Mode(array, SIZE));

	//printf("%d", isSorted(array, SIZE));
	


}

void print_Array(int array[], int size) 
{
	if (size == 0)
		return;

	int i = 0;
	printf("Index   Value\n");
	for (i; i < size; i++)
	{
		printf("%5d  %5d\n", i, array[i]);
	}
}

void arrayHistogram(int array[], int size)
{
	if (size == 0)
		return;
	int i = 0;
	int counter_1 = 0;
	int counter_2 = 0;
	int counter_3 = 0;
	for (i; i < size; i++)
	{
		
		if (array[i]==1)
		{
			counter_1++;
		}
		else if (array[i]==2)
		{
			counter_2++;
		}
		else
		{
			counter_3++;
		}
	}
	
	printf("Value    Frequency    Histogram");
	i = 1;
	int j = 0;
	while (i<4)
	{
		if (i == 1)
		{
			printf("\n%5d    %5d		  ", i, counter_1);
			for (j; j < counter_1; j++)
			{
				printf("*");
			}
				
			i++;
			j = 0;
		}

		else if (i == 2)
		{
			printf("\n%5d    %5d		  ", i, counter_2);
			for ( j; j < counter_2; j++)
			{
				printf("*");
			}
			i++;
			j = 0;
		}

		else if (i == 3)
		{
			printf("\n%5d    %5d		  ", i, counter_3);
			for ( j; j < counter_3; j++)
			{
				printf("*");
			}
			i++;
			j = 0;
		}
	}
	
}

void swapValues(int array[], int index_1, int index_2)
{
	if (index_1 == index_2)
		return;

	else if (index_1 >= 0 && index_2 >= 0)
	{
		int temp_holder = array[index_1];
		array[index_1] = array[index_2];
		array[index_2] = temp_holder;
	}
	
}

void bubbleSort(int array[], int size)
{
	if (size == 0)
		return;
	int i = 0;
	int j = 0;
	for (i; i < size; i++)
	{
		for (j; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
				swapValues(array, j, j + 1);
		}
		j = 0;
	}
	print_Array(array, size);
}

int Median(int array[], int size)
{
	if (size == 0)
		return;

	bubbleSort(array, size);
	return array[(size / 2)];
}

int Mode(int array[], int size)
{
	if (size == 0)
		return ;
	bubbleSort(array, size);
	int i = 0;
	int mode_Number = 0;
	int count_Occurences = 0;
	int current_Maximum = 0;

	for (i; i < size-1; i++)
	{	
		 if (array[i] == array[i + 1])
			 current_Maximum++;

		 else if (array[i] != array[i + 1])
		 {
			 if (current_Maximum > count_Occurences)
			 {
				 count_Occurences = current_Maximum;
				 mode_Number = array[i];
			 }
			 current_Maximum = 0;
		 }
	}
	return mode_Number;

}

int isSorted(int array[], int size)
{
	if (size == 0)
		return;
	int i = 0;
	for (i; i < size-1; i++)
	{
		if (array[i + 1] < array[i])
			return 0;
	}
	return 1;
}