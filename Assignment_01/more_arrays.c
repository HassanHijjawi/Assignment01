// This is not a functional program. Submitted for partial grades

#include <stdio.h>
#include <string.h>
void concat(char* array[][100], int n);

int main() {
    char *array[][100] = { {"I","Love","Coding"},{"This","is","Sparta"} };
    concat(array, 6);
}
// This function takes the 2D array of strings , and creates a new 1D array containing all the elements in the 2D array.
void concat(char* array[][100], int size) {
    char* arr[6];
    int counter = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arr[counter] = array[i][j];
            counter++;
        }
    }
    char* result[2];
    int i = 0, m=0, s=3;
    for (i; i < 2; i++)
    {
        for (m; m < s; m++)
            strcat(result[0], arr[m]);
        m = 3;
        s = 6;
    }
    for (int i = 0; i < 2; i++) {
        printf("%s", result[i]);
    }
}