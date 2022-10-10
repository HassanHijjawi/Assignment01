/*
* void reverse(char* array_1, char* array_2)
* 
* This is just a function to make sure to always pass first the bigger array to prevent bugs and code repetition.
* It calls the function reverse_helper where all the work takes place.
* 
*  void reverse_helper(char* left[], char* right[])
* 
* requires: 2 arrays of strings sorted in alpha-numerical order and we must define their accurate sizes. 
*			size1 is the size of array_1 and size2 is the size of array_2.
* 
* effects: Merges the 2 arrays in an array in alpha-numerical order and prints the result each element per line.
*			Capital case or lower case make no difference, all characters are transformed to lower case before executing.
* 
* Test Cases --> expected output:
* Array_1 = [] ; Array_2 = [] --> Program displays nothing
* Array_1 = ["ab","se","zzz"]; Array_2 = [] --> ["ab","se","zzz"]
* Array_1 = []; Array_2 = ["ab","se","zzz"] --> ["ab","se","zzz"]
* Array_1 = ["ab","se","zzz"]; Array_2 = ["ab","se","zzz"] --> ["ab","ab","se","se","zzz","zzz"]
* Array_1 = ["Db","sE"]; Array_2=["am","gg","zzze"] -->["am", "Db", "gg", "sE","zzz"]
* Array_1 = ["Db","sE","oks"]; Array_2=["am","gg"] -->["am", "Db", "gg", "sE","zzz"]
*/


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void reverse(char* array_1[], char* array_2[]);
void reverse_helper(char* array_1[], char* array_2[]);

#define size1 2
#define size2 3


int main()
{
	char *array_1[] = { "Db","sE" };
	char *array_2[]  = { "am","gg","zzze" };
	reverse(array_1, array_2);

}
void reverse(char* array_1, char* array_2)
{
	if (size1 <= size2)
		reverse_helper(array_1, array_2);
	else
	{
		reverse_helper(array_2, array_1);
	}
}
 void reverse_helper(char* left[], char* right[])
{
	 if (size1 == 0 && size2 == 0)
		 return;
	int minimum = min(size1, size2);
    char * merged[size1 + size2];
	int i = 0,  checkCharacters = 1, mergedIndex = 0;

		for (i; i < minimum; i++)
		{
			char left_character = tolower(*(*left)), right_character = tolower(*(*right));
			if (left_character < right_character)
			{
				merged[mergedIndex] = left[i];
				printf("%s", merged[mergedIndex]);
				mergedIndex++;
				merged[mergedIndex] = right[i];
				mergedIndex++;
				left+1;
				right+1;
			}

			else if (left_character > right_character)
			{
				merged[mergedIndex] = right[i];
				mergedIndex++;
				merged[mergedIndex] = left[i];
				mergedIndex++;
				left+1;
				right+1;
			}

			else {
				char nextLefts = tolower(*(*left + checkCharacters)), nextRights = tolower(*(*right + checkCharacters));

				while (true)
				{
					if (nextLefts == NULL || (nextLefts < nextRights))
					{
						merged[mergedIndex] = left[i];
						mergedIndex++;
						merged[mergedIndex] = right[i];
						mergedIndex++;
						left+1;
						right+1;
						checkCharacters = 0;
						break;
					}
					else if (nextRights == NULL || (nextRights < nextLefts))
					{
						merged[mergedIndex] = right[i];
						mergedIndex++;
						merged[mergedIndex] = left[i];
						mergedIndex++;
						left+1;
						right+1;
						checkCharacters = 0;
						break;
					}
					checkCharacters++;
					nextLefts = *(*left + checkCharacters);
					nextRights = *(*right + checkCharacters);
				}
			}
		}
		int m = i;
		for (m; m < max(size1,size2); m++)
		{
			merged[mergedIndex] = right[m];
			mergedIndex++;
		}
			
	
	int k = 0;
	for (k; k < size1 + size2; k++)
		printf("%s \n", merged[k]);
}
